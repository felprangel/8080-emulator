CFLAGS=-std=c17 -Wall -Wextra -Werror `sdl2-config --cflags --libs`

all:
	gcc 8080.c -o 8080 $(CFLAGS)