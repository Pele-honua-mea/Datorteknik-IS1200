/**
@author: Pele Honua Mea
@date: 2021-07-01
@brief:
    ¤ function length counts the number of characters in the string pointed to by
    parameter s, but excluding character 'a'.
@expectedOutput:
Total number of chars: 11
**/
#include<stdio.h>
int length(const char *s){
    const char *p;
    p = s;
    int count = 0;
    while(*p!='\0'){
        if(*p!='a'){
            count++;
        }
        p++;
    }
    return count;
}

int main(){
    char a [] = "a temperature";
    int res = length(a);
    printf("Total number of chars: %d", res);
}


