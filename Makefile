# Written by Morgan L
# Makefile for csysfetch
CC=gcc

all:
	@echo "Run \"make install\" to compile and run csysfetch." 	
install:
	$(CC) *.c -o csysfetch
	@./csysfetch
