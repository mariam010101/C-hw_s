//EX7 Write a program in C to store n elements in an array and print the elements using a pointer.

#include <stdio.h>
#define SIZE 100


int main(){
    int arr[SIZE],i,n;
    
    printf("Enter the number of elements you would like to store: \n");
    scanf("%d", &n);
    
    printf("Enter the %d number of elemets to store in the array \n",n);
    for (i=0; i < n ; i++){
        printf("element- %d:", i);
        scanf("%d", arr+i);
    }
    printf("The elemets you entered are : \n ");
    for (i=0; i<n ; i++){
        printf("element- %d : %d \n", i, *(arr+i));
    }
    
    
    return 0;
}