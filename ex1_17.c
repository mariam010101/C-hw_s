#include <stdio.h>
#define MAXLENGTH 1000

int main() {
    char line[MAXLENGTH];

    printf("Enter text \n");
        // Check if the line length is greater than 80 characters
        if (strlen(line) > 80) {
            printf("%s", line);
        }
    

    return 0;
}
