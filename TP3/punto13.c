/*
13) Desarrolle un programa que reciba como parámetros:
- un comando a ejecutar,
- la cantidad de veces que se desea ejecutar el comando y
- la cantidad de tiempo que debe pasar entre cada ejecución.
El programa debe imprimir su PID, PPID, PGID, SID y por cada vez que se deba ejecutar el
comando tiene que:
- crear un proceso hijo que se encargará de ejecutar el comando,
- esperar el tiempo que debe pasar entre cada ejecución,
- enviar una señal SIGKILL al proceso hijo. 


El resultado de la ejecución de los comandos se debe guardar en una tubería sin nombre. El
programa, luego de ejecutar el comando la cantidad de veces solicitada debe imprimir por pantalla
lo almacenado en la tubería sin nombre.
Formato de ejecución: ./programa comando veces tiempo
Ejemplo de ejecución: ./programa ps 5 10
Consideraciones:
- El programa debe validar la cantidad de parámetros recibidos, si la cantidad recibida es
incorrecta debe mostrar un mensaje de error y finalizar.
- Si las cantidades indicadas son menores o iguales a cero debe mostrar un mensaje de error y
finalizar.
- No se permite la utilización de la llamada al sistema system()

*/