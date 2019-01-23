// Pointers for dynamic arrays
// Function read_array takes an integer argument n, asks the user to enter n integers and stores them in an array,
// finally it returns the array. 

#include <stdio.h>
#include <stdlib.h>


int* read_array(int n){
    int *A = malloc(n * sizeof(int));
    for(int i = 0; i<n; i++){
        printf("A[%d]:", i);
        scanf("%d", &A[i]);
    }
    return A;
}

int main(){
    int* A = read_array(5);
    printf("\nThe array initialized with:\n");
    for(int i = 0; i<5; i++){
        printf("A[%d]: %d\n", i, A[i]);
    }
    free(A);
    return 0;
}