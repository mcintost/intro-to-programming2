###############################################
#File: makefile
#Description: This program utilizes a stack
#to work as a calculator.
###############################################

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

SRC1 = Calculator.cpp
SRC2 = Stack.cpp
SRC3 = Main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3}

HEADER1 = Calculator.hpp
HEADER2 = Stack.hpp
HEADERS = ${HEADER1} ${HEADER2}

PROG = LabFb

default:
	${CXX} ${SRCS} ${HEADERS} -o ${PROG}

clean:
	rm -f ${PROGS} *.0 *~
