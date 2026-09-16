#include <stdio.h>
#include <string.h>

void reveal_flag() {
    printf("Flag revealed: you found it!\n");
}

void log_event(char *event) {
    char log_buf[203];
    strcpy(log_buf, event);
    printf("Event logged: %s\n", log_buf);
}

int main(int argc, char **argv) {
    printf("Logger initialized...\n");
    log_event(argv[1]);
    printf("Logging complete.\n");
    return 0;
}