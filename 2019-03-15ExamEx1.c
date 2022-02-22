/**
@author: Pele Honua Mea
@date: 2022-02-22
@source: Written Exam in Computer Hardware Engineering (IS1200), KTH Royal Institute of Technology,
2019-03-15, Fundamentals, Module 1: C and Assembly Programming, b), proposed solution
@brief:
    ¤ function foo has one parameter: a pointer p that points to an array. The elements of the array are increased by 2. We
    assume that the array is always null terminated.
    ¤ function bar updates the values of the array lst.
@expectedOutput:
7,8,10,0
9,10,12,0
**/

#include <stdio.h>

int lst[] = {7,8,10,0};
void foo(int *p){
    while(*p != 0){
        *p = *p + 2;
        p++;
    }
}

void bar(){
    int *b = lst;
    foo(b);

}

int main(){
    int i, length;
    length = sizeof(lst)/sizeof(int);
    for(i = 0; i < length; i++){
        printf("%d", lst[i]);
        if(i != length -1)
            printf(",");
    }
    printf("\n");
    bar();
    for(i = 0; i < length; i++){
            printf("%d", lst[i]);
            if(i != length -1)
                printf(",");
    }
    return 0;
}
