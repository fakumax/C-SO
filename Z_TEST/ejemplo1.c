#include <stdio.h>
#include <unistd.h>

int main(void) {
  int pid = fork(); // Creamos un nuevo proceso
  if (pid == 0) { // Estamos en el proceso hijo
    printf("Hola, soy el hijo con PID %d\n", getpid());
  } else if (pid > 0) { // Estamos en el proceso padre
    printf("Hola, soy el padre con PID %d y mi hijo tiene PID %d\n", getpid(), pid);
  } else { // Hubo un error al crear el nuevo proceso
    perror("fork");
    return -1;
  }
  return 0;
}