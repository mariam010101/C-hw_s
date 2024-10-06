#include <stdio.h>

#define MAXLINE 500

void reverse(char s[MAXLINE]) {
    int length = 0;

    while (s[length] != '\0') {
        length++;
    }


    for (int i = length - 1; i >= 0; i--) {
        putchar(s[i]);
    }
}
int main() {
    char s[MAXLINE]; 
    int i = 0;     
    char ch;       
    printf("Write something: ");

    
    while (i < MAXLINE - 1 && (ch = getchar()) != '\n' && ch != EOF) {
        s[i++] = ch; 
    }
    s[i] = '\0'; 

    printf("Reversed string: ");
    reverse(s);

    return 0;
}







