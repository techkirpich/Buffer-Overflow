#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int vip_status = 0;
    char ticket[14];

    if (argc < 2) {
        printf("Usage: %s <ticket>\n", argv[0]);
        return 1;
    }

    strcpy(ticket, argv[1]);
    printf("Ticket: %s\n", ticket);

    if (vip_status) {
        printf("Welcome, VIP!\n");
    } else {
        printf("Standard entry only.\n");
    }

    return 0;
}