/**
@author: Pele Honua Mea
@date: 2022-02-21
@source: Written Exam in Computer Hardware Engineering (IS1200), KTH Royal Institute of Technology,
2020-01-13, Fundamentals, Module 1: C and Assembly Programming, a), proposed solution
@brief:
    ¤ function sum sums up the values found using pointer p1, where pointer p2 points to
    the array of indices used in the summation. The process continues for three loop iterations.
@expectedOutput:
The resulting sum is: 14
**/

#include <stdio.h>
int a[] = {7,10,3,5,12,8,17,-8,4,5};
int x[] = {8,2,0};
int sum(int *p1, int *p2, int len){
    int i = 0;
    int s = 0;
    while(i < len){
        s += *(*p2 + p1);
        i++;
        p2++;
    }
    return s;
}

int main(){
    int v = sum(a,x,3);
    printf("The resulting sum is: %d", v);
    return 0;
}
