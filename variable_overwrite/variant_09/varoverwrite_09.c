#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int pass_check = 0;
    char password[74];

    if (argc < 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    strcpy(password, argv[1]);
    printf("Password entered: %s\n", password);

    if (pass_check) {
        printf("Password accepted!\n");
    } else {
        printf("Password rejected.\n");
    }

    return 0;
}