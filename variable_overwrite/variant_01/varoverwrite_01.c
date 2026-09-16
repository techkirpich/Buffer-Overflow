#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int is_admin = 0;
    char input_buf[256];

    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    strcpy(input_buf, argv[1]);
    printf("Input: %s\n", input_buf);

    if (is_admin) {
        printf("Admin access granted!\n");
    } else {
        printf("Admin access denied.\n");
    }

    return 0;
}