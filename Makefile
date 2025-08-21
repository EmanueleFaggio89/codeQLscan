CC = g++
CFLAGS = -Wall -g

SRC_DIR = .
OBJ_DIR = obj
OUT_DIR = bin

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
EXECUTABLE = $(OUT_DIR)/program

$(OUT_DIR)/program: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -rf $(OBJ_DIR) $(OUT_DIR)
