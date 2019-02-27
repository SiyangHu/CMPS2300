// gcc -pthread thread3.c 
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
    return NULL;
}

int main(){
    pthread_t thread_id;
    arg_t x = {2,10};
    printf("Before Thread\n");
    pthread_create(&thread_id, NULL, myThread, &x);
    pthread_join(thread_id, NULL);
    printf("After Thread\n");
    exit(0);
}