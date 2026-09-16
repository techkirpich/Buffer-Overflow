#include <stdio.h>
#include <string.h>

void override_permissions() {
    printf("Permissions overridden!\n");
}

void set_nickname(char *nick) {
    char nickname[12];
    strcpy(nickname, nick);
    printf("Nickname set to: %s\n", nickname);
}

int main(int argc, char **argv) {
    printf("Profile setup starting...\n");
    set_nickname(argv[1]);
    printf("Profile setup finished.\n");
    return 0;
}