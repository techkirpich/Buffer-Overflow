#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int has_permission = 0;
    char msg[9];

    if (argc < 2) {
        printf("Usage: %s <message>\n", argv[0]);
        return 1;
    }

    strcpy(msg, argv[1]);
    printf("Message: %s\n", msg);

    if (has_permission) {
        printf("Permission granted!\n");
    } else {
        printf("Permission denied.\n");
    }

    return 0;
}