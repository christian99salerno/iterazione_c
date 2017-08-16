#include <stdio.h>

int main () {

int num = 0;
int binario = 0;
int val = 1;
int cambio = 0;
int numero_decimale=0;

do{

printf("Inserisci un numero binario: ");
scanf("%d", &binario);

}
while();

num = binario;

while (num != 0){

cambio = (num%10) * val;

numero_decimale+=cambio;

num/=10;

val = val * 2;

}

printf("%d(2) = %d(10)\n",binario, numero_decimale);

  return 0;
}
