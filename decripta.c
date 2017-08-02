#include <stdio.h>

int main () 
{

int num = 0;

int a,b,c,d;

do{

printf("Numero da decrittografare: ");
scanf("%d",&num);

if (num < 1000 || num > 9999)
printf("Reinserisci il numero con 4 cifre\n");
}
while (num < 1000 || num > 9999);

 d = (num%10 - 7);
 num/=10;
 c = (num%10 - 7);
 num/=10;
 b = (num%10 - 7);
 num/=10;
 a = (num%10 - 7);
 num/=10;
 
 num = c;
 num = ((num*10+d)*10+a)*10+b;

 printf("Numero originale: %d\n",num);

  return 0;
}
