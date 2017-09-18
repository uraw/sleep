#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    useconds_t useconds;
    char *endptr;

    if (argc != 2) {
        fprintf(stderr, "No argument\n");
        return 1;
    }

    useconds = strtoul(argv[1], &endptr, 10);
    if (endptr == argv[1]) {
        fprintf(stderr, "No argument\n");
        return 1;
    }

    usleep(useconds);

    return 0;
}
