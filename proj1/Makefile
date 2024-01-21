CC=gcc
CXX=g++

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./obj
BIN_DIR = ./bin
TEST_SRC_DIR = ./testsrc

CXXFLAGS = -std=c++17 -I $(INC_DIR)
LDFLAGS = -lgtest -lpthread

all: directories

$(OBJ_DIR)/StringUtils.o: $(SRC_DIR)/StringUtils.cpp $(INC_DIR)/StringUtils
	$(CXX) -o $(OBJ_DIR)/StringUtils.cpp

directories:
	mkdir -p $(OBJ_DIR)
	mkdir -p $(BIN_DIR)
	