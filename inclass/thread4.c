// gcc -pthread thread4.c 
// ./a.out
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

typedef struct arguments{
    int a;
    int b;
} arg_t;

void *myThread(void *args){
    arg_t *x = (arg_t*) args;
    sleep(1);
    printf("a = %d, b = %d\n", x->a, x->b);
    return (void *)(intptr_t)(x->a + x->b);
}

int main(){
    pthread_t thread_id;
    arg_t x = {2,10};
    printf("Before Thread\n");
    pthread_create(&thread_id, NULL, myThread, &x);
    int result;
    pthread_join(thread_id, (void **) &result);
    printf("After Thread\n");
    printf("returned value=%d \n", result);
    exit(0);
}

