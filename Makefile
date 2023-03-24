PARSER += Parser
LEXER += Lexer
#CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
#CPPFLAGS += -I include
#.PHONY = default
#
#default: bin/c_compiler
#
#all : bin/print_parsed bin/print_canonical  bin/cumpile
#
#bin/$(PARSER).tab.cpp bin/$(PARSER).tab.hpp : src/$(PARSER).y
#	mkdir -p bin
#	bison -v -d  -Wconflicts-sr -Wother -Wcounterexamples src/$(PARSER).y -o bin/$(PARSER).tab.cpp
#
#bin/$(LEXER).yy.cpp : src/$(LEXER).flex bin/$(PARSER).tab.hpp
#	mkdir -p bin
#	flex -o bin/$(LEXER).yy.cpp  src/$(LEXER).flex
#
#bin/print_parsed : src/compiler_code/print_parsed.o bin/$(PARSER).tab.o bin/$(LEXER).yy.o bin/$(PARSER).tab.o
#	mkdir -p bin
#	g++ $(CPPFLAGS) -o bin/print_parsed $^
#
#bin/print_canonical : src/compiler_code/print_canonical.o bin/$(PARSER).tab.o bin/$(LEXER).yy.o bin/$(PARSER).tab.o
#	mkdir -p bin
#	g++ $(CPPFLAGS) -o bin/print_canonical $^
#
#bin/cumpile : src/compiler_code/cumpile.o bin/$(PARSER).tab.o bin/$(LEXER).yy.o bin/$(PARSER).tab.o
#	mkdir -p bin
#	g++ $(CPPFLAGS) -o bin/cumpile $^
#
#bin/c_compiler : src/cli.cpp src/compiler.cpp
#	@mkdir -p bin
#	g++ $(CPPFLAGS) -o bin/c_compiler $^
#
#clean :
#	rm -rf bin/*
#	rm -rf src/compiler_code/*.o

LINK_TARGET = bin/c_compiler
CC = g++

CPPFLAGS += -std=c++17 -W -Wall -g -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function
CPPFLAGS += -I include -I src

HPPFILES := $(shell find include/ -type f -name "*.hpp")
CPPFILES := $(shell find src/ -type f -name "*.cpp")
OBJS = $(patsubst %.cpp,%.o,$(CPPFILES))

all : $(LINK_TARGET)

$(LINK_TARGET) : src/$(LEXER).yy.o src/$(PARSER).tab.o $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

src/%.o: src/%.cpp $(HPPFILES)
	$(CC) $(CPPFLAGS) -c -o $@ $<

src/$(PARSER).tab.cpp src/$(PARSER).tab.hpp: src/$(PARSER).y
	bison -v -d src/$(PARSER).y -o src/$(PARSER).tab.cpp
	mkdir -p bin;

src/$(LEXER).yy.cpp : src/$(LEXER).flex src/$(PARSER).tab.hpp
	flex -o src/$(LEXER).yy.cpp src/$(LEXER).flex

makeobj:
	$(CC) $(CPPFLAGS) src/$(CPPALLTEST) -o bin/testout

$(LEXER): src/$(LEXER).yy.cpp

$(PARSER): src/$(PARSER).tab.cpp src/$(PARSER).tab.hpp

bin/compiler: src/c_compiler.output

.PHONY: clean
clean :
	rm -rf bin/*
	rm -rf out/*
	rm -f src/*.tab.hpp
	rm -f src/*.tab.cpp
	rm -f src/*.yy.cpp
	rm -f src/*.output
	find src/ -type f -name '*.o' -delete
