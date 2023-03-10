/*
1) Realice un programa que cree 2 procesos hijos, donde:
- El primero debe imprimir su PID, PPID, SID y PGID, esperar 5 segundos y terminar.
- El segundo debe imprimir su PID y luego ejecutar el comando ls -l.
El proceso padre después de crear los dos procesos hijos debe finalizar. Responda:
- ¿Existen procesos zombies? Si la respuesta es afirmativa, indique cuáles.
- ¿Existen procesos huérfanos? Si la respuesta es afirmativa, indique cuáles.
Consideraciones:
- No se puede utilizar la llamada al sistema system(). 

*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
  pid_t pid1, pid2; // variables to store child process IDs
  int status; // variable to store child process exit status

  // create the first child process
  pid1 = fork();
  if (pid1 == -1) { // error occurred
    perror("fork");
    exit(1);
  }
  else if (pid1 == 0) { // first child process
    printf("First child: PID = %d, PPID = %d, SID = %d, PGID = %d\n", getpid(), getppid(), getsid(0), getpgrp());
    sleep(5); // wait for 5 seconds
    exit(0); // terminate normally
  }

  // create the second child process
  pid2 = fork();
  if (pid2 == -1) { // error occurred
    perror("fork");
    exit(1);
  }
  else if (pid2 == 0) { // second child process
    printf("Second child: PID = %d\n", getpid());
    execlp("ls", "ls", "-l", NULL); // execute the ls -l command
    perror("execlp"); // this line should not be reached unless an error occurred
    exit(1); // terminate with an error code
  }

  // parent process
  printf("Parent: PID = %d\n", getpid());
  
  waitpid(pid1, &status, WUNTRACED | WCONTINUED); // wait for the first child to finish and get its status
  
  
   if (WIFEXITED(status)) {
      printf("First child exited normally with status %d\n", WEXITSTATUS(status));
   }
   else if (WIFSIGNALED(status)) {
      printf("First child was killed by signal %d\n", WTERMSIG(status));
   }
   else if (WIFSTOPPED(status)) {
      printf("First child was stopped by signal %d\n", WSTOPSIG(status));
   }
   else if (WIFCONTINUED(status)) {
      printf("First child was continued\n");
   }

waitpid(pid2, &status, WUNTRACED | WCONTINUED); // wait for the second child to finish and get its status
  
if (WIFEXITED(status)) {
      printf("Second child exited normally with status %d\n", WEXITSTATUS(status));
   }
   else if (WIFSIGNALED(status)) {
      printf("Second child was killed by signal %d\n", WTERMSIG(status));
   }
   else if (WIFSTOPPED(status)) {
      printf("Second child was stopped by signal %d\n", WSTOPSIG(status));
   }
   else if (WIFCONTINUED(status)) {
      printf("Second child was continued\n");
   }

exit(0); // terminate normally

}