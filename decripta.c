#include <stdio.h>

int main () 
{

int num = 0;

int a,b,c,d;

do{

printf("Numero criptato: ");
scanf("%d",&num);

if (num < 0 || num > 9999)
printf("Reinserisci il numero con 4 cifre\n");
}
while (num < 0 || num > 9999);

 d = num%10; 
 d = ((d+10)-7)%10; 
 num/=10; 

 c = num%10;
 c = ((c+10)-7)%10;
 num/=10; 

 b = num%10;
 b = ((b+10)-7)%10;
 num/=10; 

 a = num%10;
 a = ((a+10)-7)%10;
 num/=10;

 /*num = 0*/
 
 num = ((c*10+d)*10+a)*10+b;

 printf("Numero originale: %d\n",num);

  return 0;
}
