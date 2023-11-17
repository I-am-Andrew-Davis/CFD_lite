##
# tmp name
#
# @file
# @version 0.1
CXX = g++
OBJ = obj
DIRS = $(sort $(dir $(wildcard ../*/)))
CPP_FILES = $(wildcard *.cpp)
OBJECTS = $(foreach file, $(CPP_FILES), $(OBJ)/$(basename $(file)).o)
ifeq ("$(DEBUG)","TRUE")
	FLAGS = -c -g3 -std=c++14 -I
else
	FLAGS = -c -O3 -std=c++14 -I
endif

all: $(OBJECTS)

$(OBJ)/%.o : %.cpp
	$(CXX) $(FLAGS) $(foreach dir, $(DIRS), -I$(dir)) $< -o $@


# end
