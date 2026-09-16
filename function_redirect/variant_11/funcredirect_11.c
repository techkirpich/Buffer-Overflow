#include <stdio.h>
#include <string.h>

void debug_console() {
    printf("Debug console opened!\n");
}

void append_note(char *note) {
    char notes[91];
    strcpy(notes, note);
    printf("Note saved: %s\n", notes);
}

int main(int argc, char **argv) {
    printf("Notes app starting...\n");
    append_note(argv[1]);
    printf("Note handling complete.\n");
    return 0;
}