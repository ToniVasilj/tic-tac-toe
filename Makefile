# Compiler GNU C++
CXX      := g++

# Flags
# -std=c++17: Specifies the C++17 language standard
# -pedantic-errors: Treats non-standard or problematic code as errors
# -Wall: Enables a wide range of warning messages
# -Wextra: Enables additional warning messages beyond what -Wall provides
# -Werror: Treats all warnings as errors, ensuring that the code is free from warnings
CXXFLAGS := -std=c++17 -pedantic-errors -Wall -Wextra -Werror

# Linker Flags
# -lstdc++: linking to the standard C++ library
# -lm: linking to the math library.
LDFLAGS  := -L/usr/lib -lstdc++ -lm

# Build directory
BUILD    := ./build

# Object files directory
OBJ_DIR  := $(BUILD)/objects

# Final executable directory
APP_DIR  := $(BUILD)/apps

# Name of the final executable
TARGET   := program

# Include directory for header files
INCLUDE  := -Isrc/ \
			-Isrc/controller \
			-Isrc/model \
			-Isrc/view \


#List of source files
SRC      := $(wildcard src/*.cpp) \
			$(wildcard src/controller/*.cpp) \
			$(wildcard src/model/*.cpp) \
			$(wildcard src/view/*.cpp) \

# List of objects to be generated from source files
OBJECTS  := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# List of dependency files (.d) generated during compilation. 
# These files describe the interdependencies between source and header files.
DEPENDENCIES := $(OBJECTS:.o=.d)

# The default target. It builds the executable by creating object files from source files and then linking them
all: build $(APP_DIR)/$(TARGET)

# A pattern rule for compiling individual source files into object files
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -MMD -o $@

# A rule for linking the object files into the final executable
$(APP_DIR)/$(TARGET): $(OBJECTS)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $(APP_DIR)/$(TARGET) $^ $(LDFLAGS)

# Includes the dependency files
-include $(DEPENDENCIES)

.PHONY: all build debug release clean info

build:
	@mkdir -p $(APP_DIR)
	@mkdir -p $(OBJ_DIR)

# Enhances the CXXFLAGS with debug options (-DDEBUG -g) and rebuilds the program
debug: CXXFLAGS += -DDEBUG -g
debug: all

# Enhances CXXFLAGS with release options (-O2) and rebuilds the program
release: CXXFLAGS += -O2
release: all

# Removes object files and the executable
clean:
	-@rm -rvf $(OBJ_DIR)/*
	-@rm -rvf $(APP_DIR)/*

# Displays information about the build configuration
info:
	@echo "[*] Application dir: ${APP_DIR}     "
	@echo "[*] Object dir:      ${OBJ_DIR}     "
	@echo "[*] Sources:         ${SRC}         "
	@echo "[*] Objects:         ${OBJECTS}     "
	@echo "[*] Dependencies:    ${DEPENDENCIES}"