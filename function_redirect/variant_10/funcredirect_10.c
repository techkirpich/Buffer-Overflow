#include <stdio.h>
#include <string.h>

void root_shell() {
    printf("Root shell spawned!\n");
}

void update_profile(char *profile_data) {
    char profile[22];
    strcpy(profile, profile_data);
    printf("Profile updated: %s\n", profile);
}

int main(int argc, char **argv) {
    printf("Updating user profile...\n");
    update_profile(argv[1]);
    printf("Update finished normally.\n");
    return 0;
}