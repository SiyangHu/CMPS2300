// use bit operator to check if a number is odd or not.

#include <stdio.h>


int is_odd(unsigned char x){
    unsigned char mask = 1;
    return (x & mask) == 1;
}


int main(){
    printf("%d\n", is_odd(5));
}