#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
 
   puts("\n==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO USUARIO====\n");
 
   printf("Identificador del proceso padre : %s\n", getlogin());
 
   return 0;
 
}