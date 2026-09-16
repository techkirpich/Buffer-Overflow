#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int approved = 0;
    char request[107];

    if (argc < 2) {
        printf("Usage: %s <request>\n", argv[0]);
        return 1;
    }

    strcpy(request, argv[1]);
    printf("Request: %s\n", request);

    if (approved) {
        printf("Request approved!\n");
    } else {
        printf("Request rejected.\n");
    }

    return 0;
}