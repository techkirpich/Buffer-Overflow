#include <stdio.h>
#include <string.h>

void developer_mode() {
    printf("Developer mode activated!\n");
}

void parse_config(char *cfg) {
    char config_buf[16];
    strcpy(config_buf, cfg);
    printf("Config loaded: %s\n", config_buf);
}

int main(int argc, char **argv) {
    printf("Reading configuration...\n");
    parse_config(argv[1]);
    printf("Configuration applied.\n");
    return 0;
}