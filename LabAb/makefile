#####################################################
#File: makefile
#Description: This program takes an array of integers  
#and returns the sum and average of the integers.
#####################################################

CXX = g++
CXXFLAGS = -std++11
CXXFLAGS += -Wall
CXXFLAGS += -pendantic-errors
CXXFLAGS += -g

#Source Files
SRC1 = Average.cpp
SRC2 = Summation.cpp
SRC3 = Main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3}

#Header Files
HEADER1 = Average.h
HEADER2 = Summation.h
HEADERS = ${HEADER1} ${HEADER2}

#Executable Files
PROG = LabAb

default:
	${CXX} ${SRCS} ${HEADERS} -o  ${PROG}

clean:
	rm -f ${PROG} *.o  *~
