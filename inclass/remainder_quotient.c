// Calculate the remainder and the quocient of a and b

#include <stdio.h>
#include <stdlib.h>

void remainder_0(int a, int b, int *r, int *q){ //r and q are outputs
    *r = a % b;
    *q = a / b; 
}

int main(){
    int r, q;
    remainder_0(31, 7, &r, &q );
    printf("31 %% 7 = %d\n", r);
    printf("31 / 7 = %d\n", q);
    return 0;
}