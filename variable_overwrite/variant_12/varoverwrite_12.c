#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int bypass = 0;
    char field[151];

    if (argc < 2) {
        printf("Usage: %s <field>\n", argv[0]);
        return 1;
    }

    strcpy(field, argv[1]);
    printf("Field: %s\n", field);

    if (bypass) {
        printf("Bypass triggered!\n");
    } else {
        printf("Bypass not triggered.\n");
    }

    return 0;
}