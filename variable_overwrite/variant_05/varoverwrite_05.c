#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int logged_in = 0;
    char username[45];

    if (argc < 2) {
        printf("Usage: %s <username>\n", argv[0]);
        return 1;
    }

    strcpy(username, argv[1]);
    printf("Username: %s\n", username);

    if (logged_in) {
        printf("Login successful!\n");
    } else {
        printf("Login failed.\n");
    }

    return 0;
}