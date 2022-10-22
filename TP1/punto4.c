/*
4) Desarrolle un programa que reciba dos parámetros a través de la línea de comandos, el primero
debe indicar el tipo de operación y el segundo debe ser un valor entero (N) que indica la cantidad
de procesos a crear.
El tipo de operación indica la forma de crear los procesos: si es “a” el programa debe crear un hijo,
el cual a su vez creará otro, y así sucesivamente, de modo que cada uno desciende del anteriormente
creado, hasta llegar a crear N procesos; si es “b” el programa debe crear los N procesos, todos con
un padre en común.
Cada hijo debe mostrar su SID, PGID, PPID, PID y terminar.
Se debe validar la cantidad de parámetros enviados al programa, si no coinciden con lo solicitado se
debe mostrar un mensaje de error y terminar. 
*/