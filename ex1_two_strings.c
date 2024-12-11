/*EX1 Write a C program that asks the user for two strings (maximum 
length 100 each) and performs the following operations:– Concatenates the strings and prints the result.– Compares the two strings and prints whether they are the same or 
different.– Finds the length of each string and prints it.– Copies the first string into another variable and prints the copy.*/

#include <stdio.h>
#include <string.h>
#define MAX 101

int main(){
    char str1[MAX], str2[MAX], concatenated[202], copy [MAX];
    
    printf("Enter the first string (max length 100)\n");
    fgets(str1,sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
    
    printf("\nEnter the second string (max length 100)\n ");
    fgets(str2,sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character
    
    strcpy(concatenated, str1); 
    strcat(concatenated, str2); /*strcpy initializes concatenated with the contents of string1.
strcat appends string2 to concatenated.*/

     if (strcmp(str1, str2)==0){   //comparing strings
         printf("The strings are the same\n");
     }
     else{
         printf("Strings are different\n");
     }
     
     printf("The length of the first string is %lu \n", strlen(str1));
     printf("The length of the second string is %lu \n ", strlen(str2));
     
     strcpy(copy, str1);
     printf("\n This is the copy of the first string : %s", copy);
     
     
     return 0;    
    
}
