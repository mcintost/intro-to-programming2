#############################################
#File:makefile
#Description: A fantasy dice rolling game that
#allows the user to choose one of five characters 
############################################

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

#Source Files
SRC1 = Creature.cpp
SRC2 = Reptile.cpp
SRC3 = BlueMen.cpp
SRC4 = Medusa.cpp
SRC5 = Golum.cpp
SRC6 = HarryPotter.cpp
SRC7 = Dice.cpp
SRC8 = Main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7} ${SRC8}

#Header Files
HEADER1 = Creature.hpp
HEADER2 = Reptile.hpp
HEADER3 = BlueMen.hpp
HEADER4 = Medusa.hpp
HEADER5 = Golum.hpp
HEADER6 = HarryPotter.hpp
HEADER7 = Dice.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5} ${HEADER6} ${HEADER7}

#Executable Files
PROG = Assignment3

default:
	${CXX} ${SRCS} ${HEADERS} -o ${PROG}

clean:
	rm -f ${PROG} *.o *~
