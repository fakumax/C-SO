/**
 11) Realice un programa que imprima su PID, PPID, PGID y cree tres procesos hijos que colaboran
para realizar las siguientes tareas:
- El primer proceso hijo ejecuta la orden grep palabra fichero1. Escribiendo el resultado de su
ejecución en una tubería.
- El segundo proceso hijo ejecuta la orden grep palabra fichero2. Escribiendo el resultado de su
ejecución en la misma tubería utilizada por el primer proceso hijo.
- El tercer proceso hijo utilizando la orden wc -l, tomará como entrada los datos almacenados en
la tubería.
- Una vez que crea todos los procesos hijos, el proceso padre indicará el inicio de la ejecución
de sus hijos enviándoles a cada uno una señal SIGUSR1.
Ejemplo de ejecución: ./programa palabra fichero1 fichero2
Consideraciones:
- No se permite la utilización de la llamada al sistema system().
- Validar la cantidad de parámetros enviados al programa, si no coinciden con lo solicitado
mostrar un error y terminar.
*/