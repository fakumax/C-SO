/*
Comunicar dos procesos por medio de una tubería. El proceso escritor podrá recibir texto por la consola (usen scanf() o fgets()) y
signals. Este proceso iniciará y se quedará esperando que el usuario ingrese texto hasta que presione ENTER. En ese momento escribirá en
la tubería los datos leidos. En cualquier momento el proceso podrá recibir las signals SIGUSR1 y SIGUSR2. En dicho caso deberá escribir en
la tubería el siguiente mensaje: SIGN:1 o SIGN:2
El proceso lector deberá imprimir el contenido de la tubería. Este proceso leerá los datos de la tubería e imprimirlos por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

#define MAX 100 // tamaño máximo del buffer

int fd[2]; // descriptor de la tubería

// función para manejar las señales SIGUSR1 y SIGUSR2
void signal_handler(int signum) {
  char msg[MAX]; // buffer para el mensaje
  sprintf(msg, "SIGN:%d\n", signum == SIGUSR1 ? 1 : 2); // formatear el mensaje según la señal recibida
  write(fd[1], msg, strlen(msg)); // escribir el mensaje en la tubería
}

int main() {
  pid_t pid; // variable para almacenar el ID del proceso hijo
  char buffer[MAX]; // buffer para leer y escribir datos

  if (pipe(fd) == -1) { // crear la tubería
    perror("pipe"); // error al crear la tubería
    exit(1); // terminar con un código de error
  }

  pid = fork(); // crear el proceso hijo
  if (pid == -1) { // error al crear el proceso hijo
    perror("fork"); 
    exit(1); 
  }
  else if (pid == 0) { // proceso hijo (lector)
    close(fd[1]); // cerrar el extremo de escritura de la tubería
    while (read(fd[0], buffer, MAX) > 0) { // leer datos de la tubería hasta que se cierre el otro extremo o haya un error
      printf("%s", buffer); // imprimir los datos leídos por pantalla
    }
    close(fd[0]); // cerrar el extremo de lectura de la tubería
    exit(0); // terminar normalmente
  }

else { // proceso padre (escritor)
    close(fd[0]); // cerrar el extremo de lectura de la tubería
    
signal(SIGUSR1, signal_handler); // establecer la función signal_handler como manejador de las señales SIGUSR1 y SIGUSR2
    
signal(SIGUSR2, signal_handler);
    
while (fgets(buffer, MAX, stdin)) { // leer texto de la consola hasta que se introduzca EOF o haya un error
      
write(fd[1], buffer, strlen(buffer)); // escribir el texto en la tubería
    
}
    
close(fd[1]); // cerrar el extremo de escritura de la tubería
    
exit(0); 
// terminar normalmente
  
}

}

/*Este programa usa las funciones pipe() y fork() para crear una tubería y un proceso hijo. El proceso padre se encarga de leer texto de la consola y escribirlo en la tubería. También usa las funciones signal() y write() para manejar las señales SIGUSR1 y SIGUSR2 y enviar mensajes a través de la tubería. El proceso hijo se encarga de leer los datos de la tubería y mostrarlos por pantalla usando las funciones read() y printf().*/