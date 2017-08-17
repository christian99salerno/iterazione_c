#include <stdio.h>

int main () {

int num = 0;
int num2 = 0;
int cont = 0;
int cont2 = 0;
int binario = 0;
int val = 1;
int cambio = 0;
int numero_decimale=0;

do{

printf("Inserisci un numero binario: ");
scanf("%d", &binario);

num = binario;
cont = 0;
cont2 = 0;

while(num!=0){
 if(num%10==1 || num%10==0){
 cont++;
 }
 num/=10;
 cont2++;
}

}
while(cont!=cont2);

num2 = binario;

while (num2 != 0){

cambio = (num2%10) * val;

numero_decimale+=cambio;

num2/=10;

val = val * 2;

}

printf("%d(2) = %d(10)\n",binario, numero_decimale);

  return 0;
}
