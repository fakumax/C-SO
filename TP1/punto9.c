/*

9) Lea del capítulo 6.7 del libro de Kerrrisk sobre el manejo de las variables de entorno. Responda:
a) Como debe cambiar la cabecera de main() para acceder a las variables de entorno del proceso.
Qué problema existe con esta forma de acceder a las varibles de entorno.
b) Estudie el uso de getenv(), putenv(), setenv(), unsetenv() y clearenv().
c) Para hacer uso de estas funciones implemente un programa que después de limpiar el entorno,
agrega las definiciones de entorno proporcionadas como argumentos de línea de comandos y
finalmente, imprime la lista de entorno actual.Ejemplo:
$ ./modificar_env "GREET = Guten Tag" SHELL=/bin/bash BYE=Ciao
d) Implemente un programa que imprima la lista de entorno, quite del entorno las variables
pasadas como argumentos de línea de comandos y vuelva a imprimir la lista de entorno. Ejemplo:
$ ./quitar_env SHELL HOME PATH
-----------------------------

*/

