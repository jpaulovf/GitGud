#include <stdio.h>

int main(int argc, char *argv[]){
   
   // Checking number of args
   if (argc != 3){
      printf("Error: number of ags must be 2!\n");
      printf("Usage: %s <your_name> <your_flavor>\n", argv[0]);
      return -1;
   }

   printf("%s %s Sandwich!\n", argv[1], argv[2]);

   return 0;

}
