#include <stdio.h>
#include <stdlib.h>

void StartCLI() {
    char* buffer = (char*)malloc(sizeof(char) * 256);
    if (buffer == NULL) {
        printf("Memory allocation failed!\n");
    }
    printf("Enter a command: ");
    fgets(buffer, 256, stdin);
    printf("You entered: %s\n", buffer);
    free(buffer);
}
