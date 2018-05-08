#include <stdio.h>
#include "foobar.h"

int main(int argc, char *argv[]){
  
   int i;
 
   // Checking number of args
   if (argc != 2){
      printf("Error: number of ags must be 1!\n");
      printf("Usage: %s <your_name>\n", argv[0]);
      return -1;
   }

   printf("%s Sandwich!\n", argv[1]);

   // Printing "FOO BAR" NUMBER_OF_THINGS times
   for (i=0; i<NUMBER_OF_THINGS; i++){
      foo_bar();
   }

   return 0;

}
