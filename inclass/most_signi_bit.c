#include <stdio.h>

int MSB(unsigned char x){
    unsigned char mask = 0x80;
    printf("x is %d\n", x);
    printf("mask is %d\n", mask);
    printf("MSB is %d\n", x & mask);
    return (x & mask)!= 0;
}

void print_bin(unsigned char number){
    for(int i = 0; i < 8; i++){
        // printf("%dhhh", MSB(number));
        MSB(number);
        number = number << 1; //shift left by one bit
    }
}

int main(){
    print_bin(53);
    // printf("\n");
    // print_bin(0x80);
}