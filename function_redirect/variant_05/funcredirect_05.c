#include <stdio.h>
#include <string.h>

void grant_access() {
    printf("Access granted to restricted area!\n");
}

void save_record(char *record) {
    char entry[8];
    strcpy(entry, record);
    printf("Record saved: %s\n", entry);
}

int main(int argc, char **argv) {
    printf("Database write starting...\n");
    save_record(argv[1]);
    printf("Write finished (expected path).\n");
    return 0;
}