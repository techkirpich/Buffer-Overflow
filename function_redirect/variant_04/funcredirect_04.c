#include <stdio.h>
#include <string.h>

void bypass_check() {
    printf("Security check bypassed!\n");
}

void store_message(char *msg) {
    char message[64];
    strcpy(message, msg);
    printf("Message stored: %s\n", message);
}

int main(int argc, char **argv) {
    printf("Message service running...\n");
    store_message(argv[1]);
    printf("Message handling complete.\n");
    return 0;
}