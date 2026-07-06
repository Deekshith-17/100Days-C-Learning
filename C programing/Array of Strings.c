#include <stdio.h>

int main (){

   char langs [10][15] = {
      "PYTHON", "JAVASCRIPT", "PHP",
      "NODE JS", "HTML", "KOTLIN", "C++",
      "REACT JS", "RUST", "VBSCRIPT"
   };

   for (int i = 0; i < 10; i++){
      printf("%s\n", langs[i]);
   }
   
   return 0;
}