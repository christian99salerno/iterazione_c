#include <stdio.h>

int main () 
{

int num = 0;

int a,b,c,d;

int t1,t2;

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
 
 /*la 1° cifra = alla 3° e la 3° = alla 1°*/
 t1 = a;
 a = c; 
 c = t1;
 
 /*la 2° cifra = alla 4° e la 4° = alla 2°*/
 t2 = b;
 b = d;
 d = t2;

 num = a; 
 num = ((num*10+b)*10+c)*10+d;

 printf("Numero crittografato: %d\n",num);

  return 0;
}
