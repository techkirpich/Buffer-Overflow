#include <stdio.h>
#include <string.h>

void trigger_easter_egg() {
    printf("Easter egg triggered!\n");
}

void receive_packet(char *packet) {
    char packet_buf[100];
    strcpy(packet_buf, packet);
    printf("Packet received: %s\n", packet_buf);
}

int main(int argc, char **argv) {
    printf("Network listener active...\n");
    receive_packet(argv[1]);
    printf("Packet handling complete.\n");
    return 0;
}