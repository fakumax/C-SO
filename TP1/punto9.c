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

int main(void) {
int estado;
if (fork() == 0) {
sleep(1);
printf("Seré un proceso zombie.\n");
} else {
wait(&estado);
}
exit(0);
}
-----------------------------
*/
