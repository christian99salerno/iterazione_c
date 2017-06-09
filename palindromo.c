#include <stdio.h>

int main () 
{

int num = 0;

int c = 0;
int d = 0;
int e = 0;
int f = 0;

do{
  
  printf("Inserisci un numero ");
  scanf("%d", &num);

  if(num<10000 && num >= 100000)
    printf("Inserisci un num di 5 cifre\n");
}

while (num < 10000 && num >= 100000);

c = num%10;
num/=10;
d = num%10;
num/=100;
e = num%10;
num/=10;
f = num;

if(e == d && f == c)
   printf("Il numero e' palindromo\n");

else
   printf("Il numero non e' palindromo\n");
  
return 0;
}

