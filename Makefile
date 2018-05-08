#!/bin/bash

CC:= gcc
CFLAGS:= -Wall
OUTPUT:= build/jill

all:
	${CC} ${CFLAGS} jill.c -o ${OUTPUT}

clean:
	rm build/*


