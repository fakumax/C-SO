#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *hilo (void *arg) {
	int i = *((int*) arg);
	printf("Hilo %d. ID: %lu .\n", i, pthread_self());
	sleep(5 * (i + 1));
	pthread_exit(NULL);
}

int main(void) {
	pthread_t hilo1, hilo2;
	int i[2] = {0, 1};
	pthread_create(&hilo1, NULL, hilo, (void*) &i[0]);
	pthread_create(&hilo2, NULL, hilo, (void*) &i[1]);
	printf("Hilo principal esperando por hilo1\n");
	pthread_join(hilo1, NULL); 
	printf("Hilo principal esperando por hilo2\n");
	pthread_join(hilo2, NULL);
	printf("Finaliza el hilo principal\n"); 
	return 0;
} 
