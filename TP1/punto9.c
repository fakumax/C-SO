/*

9) Cada uno de los siguientes programas imprime una declaración. Es necesario marcar Verdadero o
Falso para cada programa, de acuerdo con si la declaración impresa por el programa es verdadera o
falsa.

------VERDADERO O FALSO------

int main(void) {
if (fork() == 0) {
sleep(1);
printf("Seré un proceso zombie.\n");
}
exit(0);
}
-----------------------------
------VERDADERO O FALSO------

int main(void) {
int i = 5;
if (fork() != 0) {
i += 5;
sleep(2);
} else {
sleep(1);
printf("En mi proceso, i es igual a 5.");
}
return 0;
}
-----------------------------
------VERDADERO O FALSO------

9) Lea del capítulo 6.7 del libro de Kerrrisk sobre el manejo de las variables de entorno. Responda:
a) Como debe cambiar la cabecera de main() para acceder a las variables de entorno del proceso.
Qué problema existe con esta forma de acceder a las varibles de entorno.
b) Estudie el uso de getenv(), putenv(), setenv(), unsetenv() y clearenv().
c) Para hacer uso de estas funciones implemente un programa que después de limpiar el entorno,
agrega las definiciones de entorno proporcionadas como argumentos de línea de comandos y
finalmente, imprime la lista de entorno actual.Ejemplo:
$ ./modificar_env "GREET = Guten Tag" SHELL=/bin/bash BYE=Ciao
d) Implemente un programa que imprima la lista de entorno, quite del entorno las variables
pasadas como argumentos de línea de comandos y vuelva a imprimir la lista de entorno. Ejemplo:
$ ./quitar_env SHELL HOME PATH
-----------------------------
*/
