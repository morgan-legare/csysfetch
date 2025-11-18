# WRITTEN BY MORGAN L
# MAKEFILE FOR CSYSFETCH

CC=gcc

all:
	@echo
	@echo "Run \"make install\" to compile csysfetch, REQUIRES GCC: https://gcc.gnu.org/" 	
	@echo "Run \"make run\" to run csysfetch." 	
	@echo

build: 
	@$(CC) main.c -o csysfetch
	@chmod 755 csysfetch

install:
	@$(CC) main.c -o csysfetch
	@chmod 755 csysfetch

run:
	@./csysfetch
