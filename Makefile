# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Paths and files
SRC = src/main.cpp
BUILD_DIR = build
TARGET = $(BUILD_DIR)/main.exe

# Default target
all: $(TARGET)

# Ensure build directory and build the target
$(TARGET): $(SRC)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $<

# Clean up
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
