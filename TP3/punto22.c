/*
22) (Parcial 2018) Realice un programa en C, de forma que se genere un proceso padre con cuatro
hijos y que realice las siguientes tareas:
1. El primer hijo debe escribir su PID, PPID, PGID y SID.
2. El segundo hijo debe mostrar su PID y PPID, luego mandar a una tubería el resultado de
ejecutar el comando “ls <directorio>” siendo directorio el primer argumento del programa.
3. El tercer hijo debe leer de la tubería y mostrar por pantalla lo que ha leído de ella. Previamente
debe mostrar por pantalla “- Listado de <directorio>:”.
4. El cuarto hijo debe mandar la señal SIGUSR1 al proceso padre. El padre debe capturar la
señal y dentro del manejador de la señal, mostrar el valor de su variable de entorno PWD.
Ejemplo de ejecución: ./proceso directorio
Notas:
- No debe dejar procesos huérfanos.
- Debe tratar correctamente los argumentos de entrada.
- No se permite usar la llamada system(). 
*/