#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int authenticated = 0;
    char buffer[16];

    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    strcpy(buffer, argv[1]);
    printf("Buffer: %s\n", buffer);

    if (authenticated) {
        printf("Access granted!\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
