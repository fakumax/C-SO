#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t m; 	
int balance = 1000;

void *extraer (void *);

int main (void) {
	pthread_t hilo1, hilo2;

	pthread_mutex_init(&m, NULL);
	int i = 800;
	pthread_create(&hilo1, NULL, extraer, (void*) &i);
	pthread_create(&hilo2, NULL, extraer, (void*) &i);
	pthread_join(hilo1,NULL);
	pthread_join(hilo2,NULL);
	printf("Saldo $: %d\n", balance); 
	pthread_mutex_destroy(&m);
	return 0;
}

void *extraer (void *arg) {
	pthread_mutex_lock(&m);
	int cantidad = (*(int *) arg);
	if (balance >= cantidad) {
		sleep(2);
		balance = balance - cantidad;
		printf("Hilo %ld. Dinero entregado $: %d\n", pthread_self(), cantidad);
	} else
		printf("Hilo %ld. Saldo insuficiente\n", pthread_self());
	pthread_mutex_unlock(&m);
	pthread_exit(NULL);
} 
