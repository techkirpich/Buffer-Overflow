#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int override_flag = 0;
    char cmd[128];

    if (argc < 2) {
        printf("Usage: %s <cmd>\n", argv[0]);
        return 1;
    }

    strcpy(cmd, argv[1]);
    printf("Command: %s\n", cmd);

    if (override_flag) {
        printf("Override engaged!\n");
    } else {
        printf("Override inactive.\n");
    }

    return 0;
}