/*
Deben realizar un programa de control del espacio utilizado en disco para ello cada 2 minutos se debe mostrar la información devuelta por:
df-h /
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  while (1) { // loop infinito
    system("df -h /"); // ejecutar el comando df -h /
    sleep(120); // esperar 2 minutos (120 segundos)
  }
  return 0; // terminar normalmente
}