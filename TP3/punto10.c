/*
10) Realice un programa que imprima su PID, PPID, PGID, SID y cree dos procesos hijos:
- El primer proceso hijo debe ejecutar la orden ps –ef y escribir el resultado de su ejecución en
una tubería sin nombre.
- El segundo proceso hijo debe ejecutar la orden wc -l tomando como entrada los datos
almacenados en la tubería.
- Una vez que crea todos los procesos hijos el proceso padre debe esperar por su finalización
indicando el PID del proceso que va terminando. Por último, debe enviarse a sí mismo una
señal SIGKILL.
Consideraciones:
- No se permite la utilización de la llamada al sistema system()
*/