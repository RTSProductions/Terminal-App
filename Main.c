#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main ()
{
   char Admin[50];

   printf("Enter name: ");
   scanf("%s", Admin);

   char cmd[50];

   printf("For a list of commands please type: 'cmds'.\n");

   bool done = false;

   while (!(done))
   {
      printf("Enter command: ");
      scanf("%s", cmd);
      char string[100];
      strcpy(string, cmd);

      if (0 == strcmp(string, "cmds"))
      {
            printf("end, \nmath, \n");
      }
      else if (0 == strcmp(string, "end"))
      {
            done = true;
      }
   }

   printf("Entered Name: %s\n", Admin);

   return(0);
}