#include <stdio.h> /*where printf,scanf are */
#include <stdkub.h> /*where malloc, calloc and free are */

//c has to know a value
void printarray(int a[][5], int numrows){
  int i,j;
  
  printf("[\n");
  for (i = 0; i< numrows;i++){
   for (j = 0; j< ???; j++){
     printf("%2d ", a[i][j]);
   }
   printf("]\n");
  }
  printf("]\n");
}

int main(int numArguments, char *arguments[]){
  int i;
  int a[][5] = {{5,6,7,8,9},{15,16,17,18,19},{26,27};
  //what if it does not have 5 for the third one? it allocates 0
  printf("Hello world \n");
  printarray(a, 3);
  
}
