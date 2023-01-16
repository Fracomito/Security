#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void execute_me() {
    exit(1);
}

void copy_message(char* input) {
    char message [20] = "hello";
    strcat(message, input);
    printf("%s\n", message);
}

int main(int argc, char** argv) {
    char input [100] = "11111111111111111111111111";

    copy_message(input);
    exit(0);
}
