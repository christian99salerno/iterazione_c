#include <stdio.h>

int main () 
{

int num = 0;

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;

do{
  
  printf("Inserisci un numero ");
  scanf("%d", &num);

  if(num<10000 || num > 99999)
    printf("Il numero deve avere 5 cifre\n");
}
while (num < 10000 || num > 99999);

a = num%10;
num/=10;
b = num%10;
num/=10;
c = num%10;
num/=10;
d = num%10;
num/=10;
e = num;

if(e == a && d == b)
   printf("Il numero e' palindromo\n");

else
   printf("Il numero non e' palindromo\n");
  
return 0;
}

