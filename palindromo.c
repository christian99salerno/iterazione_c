#include <stdio.h>

int main () 
{

int num = 0;

int c = 0;
int d = 0;

do{
  
  printf("Inserisci un numero ");
  scanf("%d", &num);

  if(num<10000)
    printf("Inserisci un num di 5 cifre\n");
}

while (num < 10000);

c = num%10;
num/=10;
d = num%10;
num/=10;
  
if(num/10 == c)
   printf("Il numero e' palindromo\n");

else
   printf("Il numero non e' palindromo\n");
  
return 0;
}

