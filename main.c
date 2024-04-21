#include <stdbool.h>
#include <stdio.h>
#include "parsexec.h"

static char input[100] = "mira alrededor";

static bool getInput(void)
{
   printf("\n--> ");
   return fgets(input, sizeof input, stdin) != NULL;
}

int main()
{
   printf("Bienvenido a la aventura de la cueva oscura \n");
   while (parseAndExecute(input) && getInput());
   printf("\nAdios!\n");
   return 0;
}
