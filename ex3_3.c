#include <stdio.h>

#define MAXLENGTH 300

int get_str(char str[],int limit) //to read the input
{
    int c,i;
    while(i<limit-1 && (c=getchar())!=EOF){
        str[i++]=c;

    }
    str[i]="\0";
    return i;
}

//i cannot continue this code, please give me some hints and tips