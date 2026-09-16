#include <stdio.h>
#include <string.h>

void unlock_level() {
    printf("Secret level unlocked!\n");
}

void copy_token(char *token) {
    char token_buf[70];
    strcpy(token_buf, token);
    printf("Token: %s\n", token_buf);
}

int main(int argc, char **argv) {
    printf("Validating token...\n");
    copy_token(argv[1]);
    printf("Token validation complete.\n");
    return 0;
}