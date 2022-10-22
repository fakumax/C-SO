/*
18) (Recuperatorio Parte 1 2017) Desarrolle un programa que reciba como parámetros una palabra y
un conjunto de programas a ejecutar secuencialmente. El resultado de cada ejecución debe
guardarse en una tubería sin nombre para que luego el padre ejecute el comando grep palabra
(con el objeto de imprimir las lineas donde aparece la palabra buscada en el resultado de la
ejecución de los programas pasados como parámetro). El proceso padre debe indicar que proceso
hijo va finalizando, qué valor ha retornado y si termino correctamente o a causa de una señal.
Consideraciones:
- El programa debe validar la cantidad de parámetros recibidos, si la cantidad recibida es
incorrecta (por lo menos de recibir la palabra y un programa) debe mostrar un mensaje de error
y finalizar.
Ejemplo de ejecución: ./programa hola ls ps tree
*/