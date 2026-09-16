#include <stdio.h>
#include <string.h>

void vip_access() {
    printf("VIP access granted!\n");
}

void register_user(char *user_data) {
    char userbuf[128];
    strcpy(userbuf, user_data);
    printf("User registered: %s\n", userbuf);
}

int main(int argc, char **argv) {
    printf("Registration service running...\n");
    register_user(argv[1]);
    printf("Registration complete.\n");
    return 0;
}