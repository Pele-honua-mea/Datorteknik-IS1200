/**
@author: Pele Honua Mea
@date: 2022-05-07
@brief:
    ¤ function foo has two pointers (a1, a2) pointing to two arrays. For each index in the two arrays, the function sums the
    values together and the sum is then multiplied by 2 and written to a2.
@expectedOutput:
-146 -238 164
**/

#include<stdio.h>
void foo(const int *a1, int *a2, int len){
    int i = 0;
    for(i = 0; i < len; i++){
        *a2 = (*a2 + *a1)*2;
        a2++;
        a1++;
    }
}

int main(){
    int a1[] = {-54, -45, 58};
    int a2[] = {-19, -74, 24};
    int i, length;
    length = sizeof(a2)/sizeof(int);
    foo(a1, a2, 3);
    for(i = 0; i < length; i++){
        printf("%d ", a2[i]);
    }
    return 0;
}
