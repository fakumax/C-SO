#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM 10000

int valor = 0;

void *hilo_1 (void *arg) {
	int i;
	for (i = 0; i <= 5; i++) {
		valor = valor + 1;
	}
	return 0;
}

int main(void) {
	pthread_t hilos[NUM];
	int i;
	for (i = 0; i < NUM; i++)
		pthread_create(&hilos[i], NULL, hilo_1, NULL);

	for (i = 0; i < NUM; i++)
		pthread_join(hilos[i], NULL); 

	printf("Valor = %d\n", valor);
	printf("Finaliza el hilo principal\n"); 
	return 0;
}