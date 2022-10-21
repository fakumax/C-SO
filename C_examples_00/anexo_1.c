/* Attributos de un proceso 
   Ejecutar 
   ./anexo_1
   id
   sudo ./anexo_1
   sudo id
   
   Buscar usuarios usando: awk -v val=ID -F ":" '$3==val{print $1}' /etc/passwd
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    printf("Datos del Proceso:\n\n");
    printf("PID proceso: %d\n", getpid());
    printf("PID proceso padre: %d\n", getppid());
    printf("Identificador usuario real: %d\n", getuid());
    printf("Identificador usuario efectivo: %d\n", geteuid());
    printf("Identificador grupo del usuario real: %d\n", getgid());
    printf("Identificador grupo del usuario efectivo: %d\n", getegid());
    return 0;
}
