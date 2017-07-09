#include <stdio.h>

int main () {
 
  int num = 1;
  char segno;
  

  int i = 0;
  int j;

  printf("Disegna un quadrato con ");
  scanf("%c", &segno);
  
  do{

  printf("Inserisci il lato (min 1, max 20): ");
  scanf("%d", &num);
  
  if(num < 1 || num > 20)
    printf("Valore fuori dai limiti!\n");

  }
  
  while(num < 1 || num > 20);
 
  

  while(i<num){
    j=0;
    while(j<num){
      printf("%c",segno);
      j++;
    }
    printf("\n");
    i++;
  }  

  return 0;
}
