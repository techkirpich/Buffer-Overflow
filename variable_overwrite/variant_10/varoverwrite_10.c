#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int trusted = 0;
    char host[79];

    if (argc < 2) {
        printf("Usage: %s <hostname>\n", argv[0]);
        return 1;
    }

    strcpy(host, argv[1]);
    printf("Host: %s\n", host);

    if (trusted) {
        printf("Host is trusted!\n");
    } else {
        printf("Host is untrusted.\n");
    }

    return 0;
}