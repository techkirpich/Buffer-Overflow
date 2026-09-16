#include <stdio.h>
#include <string.h>

void hidden_menu() {
    printf("You unlocked the hidden menu!\n");
}

void handle_name(char *name) {
    char username[40];
    strcpy(username, name);
    printf("Hello, %s!\n", username);
}

int main(int argc, char **argv) {
    printf("Login system starting...\n");
    handle_name(argv[1]);
    printf("Login flow finished normally.\n");
    return 0;
}