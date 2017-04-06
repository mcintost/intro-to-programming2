################################################
#File: makefile
#Description: This program has a 20 by 20 grid 
#that contains critters that are ants and doodlebugs
#the critters can walk breed die and eat.  
################################################

CXX = g++
CXXFLAGS = -std++11
CXXFLAGS += -Wall
CXXFLAGS += -pendantic-errors
CXXFLAGS += -g 

#Source Files
SRC1 = Critter.cpp
SRC2 = Ant.cpp
SRC3 = Doodlebug.cpp
SRC4 = Main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4}

#Header Files
HEADER1 = Critter.hpp
HEADER2 = Ant.hpp
HEADER3 = Doodlebug.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3}

#Executable Files
PROG = Assignment2

default:
	${CXX} ${SRCS} ${HEADERS} -o ${PROG}

clean:
	rm -f ${PROG} *.o *~
