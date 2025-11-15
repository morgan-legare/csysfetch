# WRITTEN BY MORGAN L
# MAKEFILE FOR CSYSFETCH

CC=gcc

all:
	@echo
	@echo "Run \"make install\" to compile csysfetch." 	
	@echo "Run \"make run\" to run csysfetch." 	
	@echo

install:
	@$(CC) main.c -o csysfetch
	@chmod 755 csysfetch

run:
	@./csysfetch
