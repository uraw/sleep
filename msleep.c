#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    useconds_t sleep_in_millis;
    char *endptr;

    if (argc != 2) {
        fprintf(stderr, "No argument\n");
        return 1;
    }

    sleep_in_millis = strtoul(argv[1], &endptr, 10);
    if (endptr == argv[1]) {
        fprintf(stderr, "No argument\n");
        return 1;
    }

    usleep(sleep_in_millis * 1000);

    return 0;
}
