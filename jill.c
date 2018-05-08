#include <stdio.h>
#include "foobar.h"

int main(int argc, char *argv[]){
  
   int i;
 
   // Checking number of args
   if (argc != 3){
      printf("Error: number of ags must be 2!\n");
      printf("Usage: %s <your_name> <your_flavor>\n", argv[0]);
      return -1;
   }

   printf("%s %s Sandwich!\n", argv[1], argv[2]);

   // Printing "FOO BAR" NUMBER_OF_THINGS times
   for (i=0; i<NUMBER_OF_THINGS; i++){
      foo_bar();
   }

   return 0;

}
