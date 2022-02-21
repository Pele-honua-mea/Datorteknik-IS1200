/**
@author: Pele Honua Mea
@date: 2022-02-21
@brief:
    ¤ the program extracts the bits with index 17 to 13 from x and places them as the least significant bits in z, and
    extracts the least 3 significant bits of y and places them in the bits with index 7 to 5 in z. No other bits of z
    are changed, besides the 8 bits that were extracted from x and y. Variables x, y and z (before transformation) contain
    arbitrary values.
    ¤ function decToBin converts decimal number to binary number
@expectedOutput: depends on the arbitrary values of x, y and z (before transformation)

**/
#include<stdio.h>
#include <stdlib.h>

int lower = 0;
int upper = 131072; // only extracting bits 17-13 from x so no need for a higher limit

int decToBin(int n){
    int b, r;
    for(b = 31; b >= 0; b--){
        r = n >> b;
        if(r & 1){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");

}

int main(){
    int i;
    srand(time(NULL));
    int x = rand() % (upper - lower + 1) + lower;
    int y = rand() % (upper - lower + 1) + lower;
    int z = rand() % (upper - lower + 1) + lower;
    printf("Value of x: %d\nValue of y: %d\nValue of z: %d\n", x, y, z);

    printf("x in binary:       ");
    decToBin(x);
    printf("y in binary:       ");
    decToBin(y);
    printf("z in binary:       ");
    decToBin(z);
    z = (z & 0xFFFFFF00)|((x & 0x0003E000) >> 13)|((y & 0x7) << 5);
    printf("z after in binary: ");
    decToBin(z);

    return 0;
}
