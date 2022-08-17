 #include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
 
   pid_t id_proceso_padre;
   pid_t id_proceso_hijo;

   puts("\n==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO USUARIO, PADRE E HIJO====\n");
 
   id_proceso_padre = getppid();
   id_proceso_hijo = getpid();


 
   printf("Identificador del proceso usuario: %s \n e padre : %d \n e hijo: %d \n", getlogin(), id_proceso_padre,id_proceso_hijo);
 
   return 0;
 
}