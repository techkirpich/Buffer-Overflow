#include <stdio.h>
#include <string.h>

void admin_panel() {
    printf("Welcome to the admin panel!\n");
}

void process_input(char *data) {
    char buf[14];
    strcpy(buf, data);
    printf("Processed: %s\n", buf);
}

int main(int argc, char **argv) {
    printf("Starting input processor...\n");
    process_input(argv[1]);
    printf("Processing complete.\n");
    return 0;
}