#include <stdio.h>

void doublePoint( int *num){
     *num=*num+*num;
     //not returning anthing bc VOID is the return type
}

int main(){
    int value;
    
    printf("Enter the number ");
    scanf("%d", &value);
    
    printf("Original value: %d \n", value);
    
    doublePoint(&value);/*When we pass &value to doublePoint, num now holds the address of value (it points to number in memory).*/
    printf("Doubled value %d\n", value);
    
    return 0;
    
}
