/*
Comunicar dos procesos por medio de una tubería. El proceso escritor podrá recibir texto por la consola (usen scanf() o fgets()) y signals. 
Este proceso iniciará y se quedará esperando que el usuario ingrese texto hasta que presione ENTER. En ese momento escribirá en la tubería los datos leidos. 
En cualquier momento el proceso podrá recibir las signals SIGUSR1 y SIGUSR2. En dicho caso deberá escribir en la tubería el siguiente mensaje: SIGN:1 o SIGN:2

El proceso lector deberá imprimir el contenido de la tubería. Este proceso leerá los datos de la tubería e imprimirlos por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define READ_END    0    /* index pipe extremo escritura */
#define WRITE_END   1    /* index pipe extremo lectura */

enum {BUF_SIZE = 4096};
int tuberia[2];

void manejador(int signal){
    if (signal == SIGUSR1){
        close(tuberia[READ_END]);
        write(tuberia[WRITE_END], "SIGN:1", (strlen("SIGN:1")+1));
        close(tuberia[WRITE_END]);

    }
		
    if (signal == SIGUSR2){    
        close(tuberia[READ_END]);
        write(tuberia[WRITE_END], "SIGN:2", (strlen("SIGN:2")+1));
        close(tuberia[WRITE_END]);
    }
		
}

int main (int argc, char* argv[]){
    char cadena[100], buf[BUF_SIZE];
    signal(SIGUSR1, manejador);
    signal(SIGUSR2, manejador);
    printf("PID %d, PPID %d.\n", getpid(),getppid()); //imprimimos PID, PPID
    pipe(tuberia);

    if(fork() == 0){
        
        close(tuberia[READ_END]);
        scanf("%s",cadena);
        write(tuberia[WRITE_END], cadena, (strlen(cadena)+1));
        close(tuberia[WRITE_END]);
        exit(1);
        
    }
    if(fork() == 0){
        read(tuberia[READ_END], buf, BUF_SIZE);
        printf("%s \n", buf);
    }   
    
    wait(NULL);   
    exit(0);

}