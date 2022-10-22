#include <pthread.h>
#include <stdio.h>

void *hilo(void *arg) {
    int i;
    i = (*(int *)arg);
    printf("Hilo %d. ID: %lu .\n", i, pthread_self());
    pthread_exit(NULL);
}

int main(void) {
    pthread_t hilo1, hilo2;
    int i = 0;
    pthread_create(&hilo1, NULL, hilo, (void *)&i);
    i++;
    pthread_create(&hilo2, NULL, hilo, (void *)&i);
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);
    printf("Finaliza el hilo principal\n");
    return 0;
}
