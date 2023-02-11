#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
   int fd[2];  // aquí guardaremos los descriptores de archivo de la tubería
   char buf[30];  // aquí guardaremos los datos que se intercambian por la tubería

   if (pipe(fd) == -1) {  // creamos la tubería
      perror("pipe");
      exit(EXIT_FAILURE);
   }

   printf("Escritura en el descriptor de archivo: %d\n", fd[1]);
   printf("Lectura en el descriptor de archivo: %d\n", fd[0]);

   write(fd[1], "Hola mundo!", 12);  // escribimos en la tubería
   read(fd[0], buf, 12);  // leemos desde la tubería
   buf[12] = '\0';
   printf("Mensaje recibido: %s\n", buf);  // imprimimos el mensaje recibido

   return 0;
}
