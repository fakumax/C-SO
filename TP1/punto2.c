/*
2) Dado el siguiente programa, denominado cp1:

int main(int argc, char *argv[])
{
    int i, cant;
    cant = atoi(argv[1]);
    for (i = 0; i <= cant; i++)
    {
        fork();
        printf("%d\n", i);
    }
}

Desarrolle:
a) Considerando que las llamadas no fallan, dibuje un esquema que muestre la jerarquía de
procesos si el usuario ejecuta:
./cp1 3
b) Escriba el código necesario para que todos los procesos que se crean cuando se invoca a fork()
tengan un mismo padre, considere que cada hijo debe imprimir el valor de la variable i y terminar.
Indique con (*) la ubicación de dicho código.
c) Dada la modificación realizada en el punto 2.b, indique cuántos procesos hijos se crean si el
usuario ejecuta:
./cp1 4
d) Tomando en cuenta la modificación realizada en el punto 2.b, escriba el código necesario para
que el proceso padre luego de haber creado a todos los procesos hijos espere por ellos e imprima
que proceso va terminando. Indique con (*) la ubicación de dicho código.
*/
int main(int argc, char *argv[])
{
    int i, cant;
    cant = atoi(argv[1]);
    for (i = 0; i <= cant; i++)
    {
        fork();
        printf("%d\n", i);
    }
}