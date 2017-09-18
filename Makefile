msleep: msleep.c
	gcc -Wall -O2 -o msleep msleep.c

usleep: usleep.c
	gcc -Wall -O2 -o usleep usleep.c

.PHONY: all
all: msleep usleep

.PHONY: clean
clean:
	@rm -f msleep usleep
