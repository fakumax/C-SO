/*
16) (Parcial 2016) Desarrolle un programa que reciba como parámetros: un nombre de directorio y un
conjunto de sitios web que quieren descargarse (por lo menos 1 sitio).
Al inicio el programa debe imprimir su PID y por cada sitio a descargar debe: Imprimir el nombre
del sitio que va a descargar y ejecutar el comando: wget -r --no-parent SITIO -P
DIRECTORIO
Además, se debe informar que solicitud de descarga va terminando, imprimiendo el PID del proceso
encargado de la descarga y el valor devuelto por el proceso al finalizar.
Consideraciones:
- El programa debe validar la cantidad de parámetros recibidos, si la cantidad recibida es
incorrecta debe mostrar un mensaje de error y finalizar.
- Las descargas deben ejecutarse concurrentemente.
- wget puede que no exista en todos los equipos donde va a correr este programa. Controle este
problema.
Ejemplo de ejecución:
./programa ./directorio www.pl-enthusiast.net www.cs.cmu.edu

*/