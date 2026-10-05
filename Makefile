CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror -pedantic

distance: distance.c
	$(CC) $(CFLAGS) -o distance distance.c

clean:
	rm -f distance

.PHONY: clean
