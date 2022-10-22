/*
20) Sobre la implementación de demonios, lea el capítulo 37 del libro de Kerrisk y el apartado
Daemons del capítulo 5 del libro de Love. Compare los pasos especificados en cada libro de cómo
crear demonios.
a) Ahora que tiene conocimiento sobre el uso de demonios, lea
https://www.freedesktop.org/software/systemd/man/daemon.html, a que conclusión llega. Cuantos
estilos de crear demonios hay, lo explicado en los libros de que estilo son.
b) Opcional Basado en el ejemplo de Love, realice un demonio que entre en un bucle infinito y
escriba en un log el siguiente tipo de mensaje: “Iteracion nro. ” , valor_iteracion y espere 60
segundos, a la décima iteración debe ejecutar break. Al salir debe cerrar el log e imprimir
“Programa terminado”. Para ello estudie el uso de openlog(), syslog() y closelog() tratadas en el
apartado 37.5 del libro de Kerrisk.
c) Opcional En una terminal mientras se ejecuta su programa ejecute: ps -xj | grep
nombre_programa
TTY indica la terminal que controla.
Verifique quien es el proceso padre. Verifique si PID es distinto de SID

*/