/**
@author: Pele Honua Mea
@date: 2022-02-17
@brief:
    ¤ function square_reverse takes elements from the array that x points to, squares them and
    writes them in reversed order to the array that y points to.
@expectedOutput:
10000.000000 400.000000 121.000000
**/
#include<stdio.h>
void square_reverse(const double *x, double *y, int len){
    int i;
    for(i = 0; i < len; i++){
        *(y + len - i - 1) = pow(*x, 2);
        x++;
    }
}
int main(){
    double in[] = {11.0, 20.0, 100.0};
    double out[3];
    square_reverse(in, out, 3);
    int i, length;
    length = sizeof(out)/sizeof(double);
    for(i = 0; i < length; i++){
        printf("%f ", out[i]);
    }
    return 0;
}
