//EX21 Write a program in C to print all the alphabets using a pointer.

#include <stdio.h>

int main() {
   
    char alph[30];  
    int i;
    char *ptr;  

    ptr = alph; 

    
    for (i = 0; i < 26; i++) {
        *ptr = i + 'A'; 
        ptr++; // Moving the pointer to the next memory location
    }

    ptr = alph; // Resetting the pointer to the base address of array 'alph'

  
    printf(" The Alphabets are : \n");
    for (i = 0;i < 26; i++) {
        printf(" %c ", *ptr); // Printing each alphabet
        ptr++;
    }
    return 0;
}