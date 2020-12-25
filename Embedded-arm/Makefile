# Name of the project
CC=arm-none-eabi-gcc
PROJECT_NAME = operation
MACH=cortex-m4
CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnu


main.o:main.c inc/operation.h
	$(CC) $(CFLAGS) main.c  -o main.o