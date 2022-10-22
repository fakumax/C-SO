/*
14) Realice un programa que solicite al usuario un valor n y cree un proceso hijo el cual:
- si n es positivo y par: va a ejecutar un bucle infinito en el que imprimirá “Soy el proceso PID”.
- si n es positivo e impar: deberá manejar la señal SIGUSR1 (el manejador debe imprimir el PID
del proceso) y quedará esperando por una señal.
Pasado el tiempo especificado por n, el proceso padre debe enviarle al proceso hijo una señal
SIGUSR1 y pasado 5 segundos enviarse una señal SIGKILL a sí mismo. 
*/