/**
@author: Pele Honua Mea
@date: 2022-02-21
@source: Written Exam in Computer Hardware Engineering (IS1200), KTH Royal Institute of Technology,
2020-03-11, Fundamentals, Module 1: C and Assembly Programming, b), proposed solution
@brief:
    ¤ function foo has two parameters: an integer pointer, and an integer value. The function iterates over
    an integer array, and increments each element with the value given in the second argument. We assume that
    the array is always null terminated.
@expectedOutput:
4,10,100,23,99,0
14,20,110,33,109,0
**/

#include <stdio.h>
void foo(int *p, int n){
    while(*p != 0){
        *p = *p + n;
        p++;
    }
}

int main(){
    int a[] = {4,10,100,23,99,0};
    int i, length;
    length = sizeof(a)/sizeof(int);
    for(i = 0; i < length; i++){
        printf("%d", a[i]);
        if(i != length - 1){
            printf(",");
        }
    }
    printf("\n");
    foo(a,10);
    for(i = 0; i < length; i++){
        printf("%d", a[i]);
        if(i != length - 1){
            printf(",");
        }
    }
    return 0;
}
