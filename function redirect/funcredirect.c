#include <stdio.h>
#include <string.h>

void secret_function() {
    printf("You reached the secret function!\n");
}

void vulnerable(char *input) {
    char buffer[32];
    strcpy(buffer, input);
    printf("You entered: %s\n", buffer);
}

int main(int argc, char **argv) {
    printf("Calling vulnerable()...\n");
    vulnerable(argv[1]);
    printf("Back in main (normal path).\n");
    return 0;
}
