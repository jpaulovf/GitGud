#include <stdio.h>

int main(int argc, char *argv[]){
   
   // Checking number of args
   if (argc != 2){
      printf("Error: number of ags must be 1!\n");
      printf("Usage: %s <your_name>\n", argv[0]);
      return -1;
   }

   printf("%s Sandwich!\n", argv[1]);

   return 0;

}
