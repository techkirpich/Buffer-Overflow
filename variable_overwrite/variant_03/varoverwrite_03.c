#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int verified = 0;
    char code[208];

    if (argc < 2) {
        printf("Usage: %s <code>\n", argv[0]);
        return 1;
    }

    strcpy(code, argv[1]);
    printf("Code entered: %s\n", code);

    if (verified) {
        printf("Verification successful!\n");
    } else {
        printf("Verification failed.\n");
    }

    return 0;
}