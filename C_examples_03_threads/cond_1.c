#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS 3

pthread_mutex_t mut; 	
pthread_cond_t cond; 	
int actual = NUM_THREADS-1;

void *imprimir (void *);

int main(void) {
	pthread_t threads[NUM_THREADS];
	int id_threads[NUM_THREADS];
	int t;
	
	pthread_mutex_init(&mut, NULL);
	pthread_cond_init(&cond, NULL);
	for (t = 0; t < NUM_THREADS; t++) {
		id_threads[t] = t;
		printf("Creando %d\n", t); 
		pthread_create(&threads[t], NULL, imprimir, (void *) &id_threads[t]);
	}
	
	for (t = 0; t < NUM_THREADS; t++) 
		pthread_join(threads[t], NULL);
	
	pthread_mutex_destroy(&mut);
	pthread_cond_destroy(&cond);
	return 0;
}

void *imprimir (void *threadid) {
	int id = (*(int *) threadid);
	printf("Hilo que imprime %d va a solicitar lock\n", id);
	pthread_mutex_lock(&mut);
	printf("Hilo que imprime %d entra en lock\n", id);
	while (actual > id) {
		printf("Hilo que imprime %d entra en condicional\n", id);
		pthread_cond_wait(&cond, &mut);
		printf("Hilo que imprime %d sale de condicional\n", id);
	}
	printf("Valor: %d\n", id);
	actual--;
	pthread_cond_broadcast(&cond);
	printf("Hilo que imprime %d manda broadcast\n", id);
	pthread_mutex_unlock(&mut);
	printf("Hilo que imprime %d sale de lock\n", id);
	pthread_exit(NULL);
} 
