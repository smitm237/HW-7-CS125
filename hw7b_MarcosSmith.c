#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  char code[30];
  int i;
  int shift;
  printf("Enter the Encrypted Code: ");
  fgets(code, 30, stdin);
  int length = strlen(code);

  while(strcmp(code, "STOP\n") != 0){
    for(shift = -5; shift <= 5; shift++){
      printf("\nFor a shift of   %d, the decyrpted code is: ", shift);
      for(i = 0; i < length; i++){
        char c = code[i] + shift;
        printf("%c", c);
      }
    } 
    printf("\n");
    printf("Enter the Encrypted Code: ");
    fgets(code, 30, stdin);
    int length = strlen(code); 
  }
  printf("\n");
return 0;
}
