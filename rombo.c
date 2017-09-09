#include <stdio.h>

int main ()
{

int num = 0;
int carattere = "*";


do{
	printf("Numero di righe (dispari 1-19): ");
	scanf("%d",&num);

        if(num%2==0 || num<2 || num>18){
		printf("Inserisci un num dispari 1<num<19: ");
	}
	 }
	while(num%2==0 || num<2 || num>18);




	return 0;
}
