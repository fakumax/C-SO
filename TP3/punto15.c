/*
15) (Recuperatorio 2016) Desarrolle un programa que reciba como parámetros un conjunto de
programas a ejecutar concurrentemente. Por cuestiones de rendimiento, cada programa a ejecutar
no puede superar los 600 segundos de ejecución, al llegar este tiempo se debe finalizar su
ejecución.
Se debe imprimir como va finalizando cada programa, indicando su PID, valor de retorno y si
terminó a causa de una señal o correctamente.
Consideraciones:
- El programa debe validar la cantidad de parámetros recibidos, si la cantidad recibida es
incorrecta (ningún programa a ejecutar) debe mostrar un mensaje de error y finalizar.
Ejemplo de ejecución:
./programa ls ps tree
*/