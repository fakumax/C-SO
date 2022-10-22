/*
12) Implemente un programa que cree un proceso hijo. El proceso hijo debe:
- ejecutar un bucle infinito en el que imprimen su PID una vez por segundo y
- manejar la señal SIGUSR1 (El manejador imprime el PPID del proceso).
El proceso padre debe realizar las siguientes acciones:
- esperar por tres segundos y suspender al proceso hijo,
- esperar por tres segundos y hacer continuar al proceso hijo,
- esperar cinco segundos y enviar una señal SIGUSR1 al proceso hijo y
- esperar diez segundos y enviar una señal SIGKILL al proceso hijo. 
*/