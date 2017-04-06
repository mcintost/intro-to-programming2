#############################################
#File: Makefile
#Description: A program that shows the proper
#functions of stacks and Queue.
#############################################

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

#Source Files:
SRC1 = Stack.cpp
SRC2 = Queues.cpp
SRC3 = Main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3}

#Header Files:
HEADER1 = Stack.hpp
HEADER2 = Queues.hpp
HEADERS = ${HEADER1} ${HEADER2}

PROG = LabFa

default:
	${CXX} ${SRCS} ${HEADERS} -o ${PROG}

clean:
	rm -f ${PROG} *.o *~
