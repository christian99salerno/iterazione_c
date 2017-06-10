#include <stdio.h>

int main () {
 

int num = 0;

int bit = 0;

do {

  printf("Inserisci un numero binario ");
  scanf("%d", &num);

  bit = 1;

  while (num!=0){
  if (num%10 != 1 || num%10 != 0){
    bit = 0;
  }
    num/=10;
   }
  if (bit==0)
    printf("Il numero deve essere binario\n");
}
while(bit==0);

if (bit == 1)
  printf("Il numero e' binario\n");
  
  return 0;
}
