##
# tmp name
#
# @file
# @version 0.1
MAIN = test.cpp
MAINO = test.o
CXX = g++
DIRS = $(sort $(dir $(wildcard ../src/*/)))
OBJ_DIRS = $(foreach dir, $(DIRS), $(dir)obj/)
CPP_FILES = $(foreach dir, $(DIRS), $(wildcard $(dir).cpp))
OBJ_FILES = $(foreach dir, $(OBJ_DIRS), $(wildcard $(dir)*.o))
EXEC = Linux.run
DEBUG = TRUE

ifeq ("$(DEBUG)","TRUE")
	FLAGS = -g3 -std=c++14
	COMPILE_FLAGS = DEBUG=TRUE -C
else
	FLAGS = -O3 -std=c++14
	COMPILE_FLAGS = -c
endif

all: $(EXEC)

$(EXEC): $(MAINO)
	$(CXX) $(FLAGS) -o $(EXEC) $(OBJ_FILES) $(MAINO)

$(MAINO): create
	$(info list of all obj files: $(OBJ_FILES))
	$(CXX) -c $(FLAGS) $(foreach dir, $(DIRS), -I $(dir)) $(MAIN)

create: $(CPP_FILES)
	$(foreach dir, $(DIRS), $(MAKE) $(COMPILE_FLAGS) $(dir);)

nolibs: link_nolibs
	$(CXX) $(FLAGS) -o $(EXEC) $(wildcard $(foreach dir, $(OBJ_DIRS), $(dir)*.o)) $(MAINO)

link_nolibs:
	$(CXX) -c $(FLAGS) $(foreach dir, $(DIRS), -I$(dir)) $(MAINO)

realclean: clean
	rm $(EXEC)

clean:
	rm $(wildcard $(foreach dir, $(OBJ_DIRS), $(dir)*.o) ); rm $(MAINO)

# end
