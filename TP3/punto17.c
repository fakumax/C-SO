/*
17) (Parcial 2017) Desarrolle un programa que reciba como parámetros: por lo menos un nombre de
archivo, caso contrario debe finalizar mostrando un mensaje de error.
Al inicio el programa debe ignorar la señal SIGINT e imprimir su PID, PPID, SID y PGID. Por
cada archivo debe obtener las primeras 10 lineas del mismo, para ello debe invocar al programa:
head -n 10 ARCHIVO. Considere que la obtención de datos de los archivos pasados como
parámetros debe ser concurrente.
El proceso padre debe esperar por la obtención de datos de todos los archivos y una vez que sucede
esto debe ordenar cada linea obtenida de todos los archivos descartando los duplicados, para ello
debe invocar al comando sort -u. Implemente la comunicación entre el padre y los hijos usando
una tubería sin nombre.
Ejemplo de ejecución: ./programa archivo1 archivo2 archivo3 …
*/