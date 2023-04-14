#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  char code[30];
  int i;
  int shift;
  printf("Enter the Encrypted Code (STOP to quit): ");
  scanf("%s", &code);
  int length = strlen(code);

  while(strcmp(code, "STOP") != 0){
    for(shift = -5; shift <= 5; shift++){
      printf("For a shift of   %d, the decyrpted code is: ", shift);
      for(i = 0; i < length; i++){
        char c = code[i] + shift;
        printf("%c", c);
      }
      printf("\n");
    } 
    printf("\n");
    printf("Enter the Encrypted Code (STOP to quit): ");
    scanf("%s", &code);
    length = strlen(code); 
  }
  printf("\n");
return 0;
}
