// gcc -pthread thread2.c 
// ./a.out
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *myThread(void *args){
    int n = (intptr_t) args;
    sleep(1);
    printf("Thread %d is running \n", n);
    return NULL;
}

int main(){
    pthread_t thread_id;
    printf("Before Thread \n");
    pthread_create(&thread_id, NULL, myThread, (void*)1);
    pthread_create(&thread_id, NULL, myThread, (void*)2);
    pthread_join(thread_id, NULL);
    printf("After Thread\n");
    exit(0);
}