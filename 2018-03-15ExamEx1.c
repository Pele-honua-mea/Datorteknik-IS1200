/**
@author: Pele Honua Mea
@date: 2022-02-22
@source: Written Exam in Computer Hardware Engineering (IS1200), KTH Royal Institute of Technology,
2018-03-15, Fundamentals, Module 1: C and Assembly Programming, a), proposed solution
@brief:
    ¤ function foo has two parameters: pointer p1 that points to the array a and pointer p2 that points to the array b. It sums
    the values from array b with 100 and the current index value and places the result in the array that p1 points to.
@expectedOutput:
0,0,5,5,10,10
100,101,107,108,114,115
**/

int i = 0;
int a[6];
int b[] = {0,0,5,5,10,10};

void foo(int *p1, int *p2){
    while(i < 6){
        *p1 = *p2 + 100 + i;
        p1++;
        i++;
        p2++;
    }
}

int main(){
    int i, length;
    length = sizeof(a)/sizeof(int);
    for(i = 0; i < length; i++){
        printf("%d", b[i]);
        if(i != length -1)
            printf(",");
    }
    printf("\n");
    foo(a,b);
    for(i = 0; i < length; i++){
            printf("%d", a[i]);
            if(i != length -1)
                printf(",");
    }
    return 0;
}
