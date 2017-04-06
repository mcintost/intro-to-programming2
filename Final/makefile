#############################################
#File: makefile
#Description: A beach exploration game.
#############################################

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

#Source Files
SRC1 = Space.cpp
SRC2 = Beach.cpp
SRC3 = Shore.cpp
SRC4 = Forest.cpp
SRC5 = Helicopter.cpp
SRC6 = Player.cpp
SRC7 = Map.cpp
SRC8 = Story.cpp
SRC9 = Main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7} ${SRC8} ${SRC9}

#Header Files
HEADER1 = Space.hpp
HEADER2 = Beach.hpp
HEADER3 = Shore.hpp
HEADER4 = Forest.hpp
HEADER5 = Helicopter.hpp
HEADER6 = Player.hpp
HEADER7 = Map.hpp
HEADER8 = Story.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5} ${HEADER6} ${HEADER7} ${HEADERS8}

PROG = final

default:
	${CXX} ${SRCS} ${HEADERS} -o ${PROG}

clean:
	rm -f ${PROG} *.o *~
