#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int unlocked_mode = 0;
    char key[168];

    if (argc < 2) {
        printf("Usage: %s <key>\n", argv[0]);
        return 1;
    }

    strcpy(key, argv[1]);
    printf("Key: %s\n", key);

    if (unlocked_mode) {
        printf("Unlocked mode active!\n");
    } else {
        printf("Locked mode active.\n");
    }

    return 0;
}