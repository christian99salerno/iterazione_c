#include <stdio.h>

int main () 
{

int num = 0;

int a,b,c,d;

do{

printf("Numero da crittografare: ");
scanf("%d",&num);

if (num < 1000 || num > 9999)
printf("Reinserisci il numero con 4 cifre\n");
}
while (num < 1000 || num > 9999);
 
 d = num%10; /*estrazione 4° cifra*/
 d = (d+7)%10; /*modifica*/
 num/=10; /*viene rimossa la 4° cifra*/

 c = num%10; /*estrazione 3° cifra*/
 c = (c+7)%10; /*modifica*/
 num/=10; /*viene rimossa la 3° cifra*/

 b = num%10; /*estrazione 2° cifra*/
 b = (b+7)%10; /*modifica*/
 num/=10; /*viene rimossa la 2° cifra*/

 a = num%10; /*estrazione 1° cifra*/
 a = (a+7)%10; /*modifica*/
 num/=10; /*viene rimossa la 1° cifra*/

 /*num = 0*/
 
 /*riordinazione del numero con le nuove cifre*/
 
 num = ((c*10+d)*10+a)*10+b;

 printf("Numero crittografato: %d\n",num);

  return 0;
}
