// Write a boolean function isHex(st) that determines whether a given sequence of
// characters represents a vaild hexadecimal number. We’ll consider a sequence of
// characters to be a valid hex number if it is not empty and only contains digits and
// characters ”A” through ”F”.
// Write a program that asks the user to enter a character sequence and uses your
// function to perform the check. If the user enters a valid sequence, the program should
// just say ”Thank you!”. However, if the user enters something that’s not a valid hex
// number, the program should keep asking the user until they enter a valid number.
// For simplicity, you can assume that the number will be at most 20 characters long.


#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

bool isHex(){

    char st[20];
    char *hex_letter = "1234567890abcdef";
    bool result = false;
    
    while(!result){
        result = true;
        printf("Please enter the string that you would like to verify: ");
        scanf("%s", st);
        printf("%s\n", st);
        
        for(int i = 0; i < strlen(st); i++){
            st[i] = toupper(st[i]);
            if( st[i]< 48 || (st[i]>57 && st[i]<65) || st[i]>70){
                result = false;
            }
        }
        }
        printf("Thank you!");
        return result;
}

int main(){
isHex();
}