/**
@author: Pele Honua Mea
@date: 2022-02-16
@brief:
    ¤ function adder - adds together two integer values that
    the pointers x and y point to, and writes the result where z points to.
    ¤ function foo - calls for adder function to add together a and k, and
    then returns the resulting value.
@expectedOutput:
11
32
**/
#include <stdio.h>
void adder(const int *x, const int *y, int *z){
    *z = *x+*y;
}

int foo(int a){
    const int k = 10;
    int sum;
    adder(&a, &k, &sum);
    return sum;
}
int main(){
    int b = 7;
    int c = 4;
    int res;
    adder(&b, &c, &res);
    printf("%d\n", res);
    int r = foo(22);
    printf("%d", r);
    return 0;
}

