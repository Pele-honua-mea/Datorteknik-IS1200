/**
@author: Pele Honua Mea
@date: 2022-02-21
@source: Written Exam in Computer Hardware Engineering (IS1200), KTH Royal Institute of Technology,
2020-06-05, Fundamentals, Module 1: C and Assembly Programming, a), proposed solution
@brief:
    ¤ function something has three parameters: a pointer foo that points to an array of integers,
    a parameter len that specifies the length of the array, and a value v. The function iterates over the array and
    multiplies each element in the array with value v.
@expectedOutput:
2,2,3,3,10
8,8,12,12,40
**/

#include <stdio.h>

void something(int *foo, int len, int v){
    int i;
    for(i = 0; i < len; i++){
        *foo = *foo * v;
        foo++;
    }
}

int main(){
    int k1[] = {2,2,3,3,10};
    int i, length;
    length = sizeof(k1)/sizeof(int);
    for(i = 0; i < length; i++){
        printf("%d", k1[i]);
        if(i != length-1){
            printf(",");
        }
    }
    printf("\n");
    something(k1, 5, 4);
    for(i = 0; i < length; i++){
            printf("%d", k1[i]);
            if(i != length-1){
                printf(",");
            }
    }
    return 0;

}
