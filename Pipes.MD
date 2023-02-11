                                             Pipes en lenguaje C
                                             
Las tuberías (pipes en inglés) son un mecanismo de comunicación entre procesos en el sistema operativo. 
Permiten que los procesos se comuniquen entre sí enviando y recibiendo datos a través de un canal virtual.
En C, puedes usar las funciones pipe() y dup2() para crear y utilizar tuberías. 

Aquí hay un ejemplo básico de cómo usar una tubería en C:

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
En este ejemplo, la función pipe() crea una nueva tubería y guarda los descriptores.- 
De los archivo correspondientes en el arreglo fd. 
Luego, usamos la función write() para escribir,- 
datos en la tubería a través del descriptor de archivo fd[1], 
y la función read() para leer datos de la tubería a través del descriptor de archivo fd[0].

