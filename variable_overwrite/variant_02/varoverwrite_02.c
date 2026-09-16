#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int unlocked = 0;
    char name[25];

    if (argc < 2) {
        printf("Usage: %s <name>\n", argv[0]);
        return 1;
    }

    strcpy(name, argv[1]);
    printf("Name: %s\n", name);

    if (unlocked) {
        printf("Door unlocked!\n");
    } else {
        printf("Door remains locked.\n");
    }

    return 0;
}