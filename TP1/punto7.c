/*
7) Desarrolle un programa que reciba como parámetros:
- Un programa a ejecutar y
- Un valor numérico.
El programa debe verificar que el valor numérico sea mayor que cero, de no cumplirse esta
condición debe finalizar su ejecución.
Luego debe ejecutar 10 iteraciones que cumplan lo siguiente:
- Ejecutar el programa pasado como primer parámetro.
- Dormir el tiempo especificado como segundo parámetro.
*/

#include <stdio.h>
#include <stdlib.h>

#define iteraciones 10

int main(int argc, char *argv[]) {
    pid_t pid;
    int numero, i;
    numero = atoi(argv[2]);
    printf("Debe ingresar un número mayor a cero %d\n", numero);
    if (numero <= 0) {
        printf("Debe ingresar un número mayor a cero\n");
        return 1;

    } else {
        for (i = 0; i < iteraciones; i++) {
            pid = fork();
            if (pid == 0) {
                sleep(numero);
                execl(argv[1], argv[1], NULL);
                return 1;
            } else {
                wait(NULL);
            }
        }
    }

    return 0;
}

// int main(int argc, char *argv[]) {
//   pid_t pid;
//   int i, valor;
//   valor = atoi(argv[2]);
//     if (argc != 3) {
//       printf("Ingrese un programa a ejecutar y un numero natural\n");
//       exit(1);
//     }
//     if (valor <= 0) { //El programa debe verificar que el valor numérico sea mayor que cero, de no cumplirse esta condición debe finalizar su ejecución.
//       printf("Error: debe ingresar un numero natural mayor a cero\n");
//       exit(1);
//     } else {
//       for (i = 0; i < 10; i++) { //ejecutar 10 iteraciones que cumplan lo siguiente:
//         pid = fork();
//         if (pid == 0) { //Comprueba si es el hijo
//           sleep(valor); //Dormir el tiempo especificado como segundo parámetro
//           execl(argv[1], argv[1], NULL); //Ejecutar el programa pasado como primer parámetro.
//           exit(1);
//         } else {
//           wait(NULL);
//         }
//       }
//     }

//   exit(0);
// }