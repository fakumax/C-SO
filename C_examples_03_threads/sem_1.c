#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS 2

sem_t semA, semB;

void * imprimeA(void *);
void * imprimeB(void *);

int main( int argc, char *argv[] ) {
	int i;
	pthread_t tid[NUM_THREADS];  

	sem_init(&semA, 0, 1);
	sem_init(&semB, 0, 0);
	pthread_create(&tid[0], NULL, imprimeA, NULL);
	pthread_create(&tid[1], NULL, imprimeB, NULL);
	for ( i = 0; i < NUM_THREADS; i++)
		pthread_join(tid[i], NULL);
	sem_destroy(&semA);
	sem_destroy(&semB);
	exit(0);
}

void * imprimeA(void * parm) {
	int i = 0, valorA, valorB;

	for (i = 0; i < 3; i++) {
		sem_wait(&semA);
		sem_getvalue(&semA, &valorA);
		sem_getvalue(&semB, &valorB);
		printf("A, %d, %d, %d\n", i, valorA, valorB);
		sem_post(&semB);
	}
	pthread_exit(NULL);
}

void * imprimeB(void * parm) {
	int i = 0, valorA, valorB;

	for (i = 0; i < 3; i++) {
		sem_wait(&semB);
		sem_getvalue(&semA, &valorA);
		sem_getvalue(&semB, &valorB);
		printf("B, %d %d, %d\n", i, valorA, valorB);
		sem_post(&semA);
	}
	pthread_exit(NULL);
} 
