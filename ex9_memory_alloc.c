// EX9 Write a program in C to find the largest element using Dynamic Memory Allocation.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
    float *element;
     printf("Eneter the total number of elemets from  1 to 100\n");
     scanf("%d", &n);
     
     element=(float *)calloc(n, sizeof(float));
     
     if (element==NULL){
         printf("No memeory is allocated ");
         exit(0);
     }
     
     for (i=0; i<n ; ++i){
         printf("Number %d :", i+1);
         scanf("%f", element+i); //'n' numbers now are stored dynamically in the allocated memeory
     }
    for (i=1; i<n ; ++i){
        if (*element < *(element +i)){
            *element=*(element+i);
        }
    } 
    printf("\n the largest number is %f",*element );
    return 0;
    
     
}