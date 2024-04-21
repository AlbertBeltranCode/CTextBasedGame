#include <stdbool.h>
#include <stdio.h>
#include <string.h>


bool parseAndExecute(char *input)
{
   char *verb = strtok(input, " \n");
   char *noun = strtok(NULL, " \n");
   if (verb != NULL)
   {
      if (strcmp(verb, "salir") == 0)
      {
         return false;
      }
      else if (strcmp(verb, "mira") == 0)
      {
         printf("Esta muy oscuro ahi.\n");
      }
      else if (strcmp(verb, "ves") == 0)
      {
         printf("Esta demasiado oscuro para ir por ahi.\n");
      }
      else
      {
         printf("No se como '%s'.\n", verb);
      }
   }
   return true;
}
