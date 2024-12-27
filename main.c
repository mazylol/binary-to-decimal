#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc < 2 || argv[1] == NULL) {
        fprintf(stderr, "This program requires an argument\n");
        return -1;
    }

    int value = 1;

    int found_first = 0;
    for (int i = 0; i < strlen(argv[1]); i++) {
        int num = argv[1][i] - '0';

        if (num < 0 || num > 1) {
            fprintf(stderr, "Encountered a non-binary number\n");
            return -1;
        }

        if (num == 1 && !found_first) {
            found_first = 1;
            continue;
        }

        if (found_first) {
            value *= 2;

            if (num == 1) {
                value += 1;
            }
        }
    }

    printf("%d\n", value);

    return 0;
}
