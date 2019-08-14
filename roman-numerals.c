#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int
main(int arc, char **argv)
{
    int input;

    if (arc != 2) {
        fprintf(stderr, "Usage: %s <number>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    input = atoi(argv[1]);

    if (errno) {
        perror("atio error");
        exit(EXIT_FAILURE);
    }

    printf("Decimal: %d\n", input);

    while (input > 0) {
        if (input % 1000 != input) {
            printf("M");
            input -= 1000;
        } else if (input % 900 != input) {
            printf("CM");
            input -= 900;
        } else if (input % 500 != input) {
            printf("D");
            input -= 500;
        } else if (input % 400 != input) {
            printf("CD");
            input -= 400;
        } else if (input % 100 != input) {
            printf("C");
            input -= 100;
        } else if (input % 90 != input) {
            printf("XC");
            input -= 90;
        } else if (input % 50 != input) {
            printf("L");
            input -= 50;
        } else if (input % 40 != input) {
            printf("XL");
            input -= 40;
        } else if (input % 10 != input) {
            printf("X");
            input -= 10;
        } else if (input % 9 != input) {
            printf("IX");
            input -= 9;
        } else if (input % 5 != input) {
            printf("V");
            input -= 5;
        } else if (input % 4 != input) {
            printf("IV");
            input -= 4;
        } else if (input % 1 != input) {
            printf("I");
            input -= 1;
        }
    }

    printf("\n");
    exit(EXIT_SUCCESS);
}
