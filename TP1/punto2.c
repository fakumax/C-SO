/*

 2) Escriba un programa que reciba una cantidad variable de nombres de archivo desde la línea de
comandos. Por cada nombre de archivo el programa debe crear un proceso hijo que:
- Imprima su PGID, PPID, PID y el nombre del archivo; y
- Use una de las funciones de la familia exec() para ejecutar: wc -l nombre_de_archivo.
Consideraciones:
- Los procesos hijos se deben ejecutar concurrentemente.
- El proceso padre debe indicar que proceso hijo va finalizando e indicando de que
manera finaliza (Normal o por una señal).
- Si no se pasa ningún nombre de archivo se debe mostrar un mensaje de error.
- No se puede utilizar la llamada al sistema system().

*/
int main(int argc, char *argv[]) {
    int i, cant;
    cant = atoi(argv[1]);
    for (i = 0; i <= cant; i++) {
        fork();
        printf("%d\n", i);
    }
}