// gcc -pthread thread1.c 
// ./a.out
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *myThread(void *vargp){
    sleep(1);
    printf("Thread is running \n");
    return NULL;
}

int main(){
    pthread_t thread_id;
    printf("Before Thread\n");
    pthread_create(&thread_id, NULL, myThread, NULL);
    pthread_join(thread_id, NULL);
    printf("After Thread\n");
    exit(0);
}