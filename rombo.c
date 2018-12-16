#include <stdio.h>

int main ()
{

int i;
int j;
int num = 0;
int carattere = '*';
int c = 1;
int m = 0;
int space = 0;
int z;

do{
	printf("Numero di righe (dispari 1-19): ");
	scanf("%d",&num);

	 }
	while(num%2==0 || num<1 || num>19);

space = num/2;

for(i=1; i<=num; i++){
  for(z=1; z<=space; z++){
    printf(" ");
  }
  for(j=1; j<=c; j++){
    putchar(carattere);
    /*printf("%d",j);*/
  }
  printf("\n");

if(c>=1 && c<num && m!=1){
   c+=2;
   space--;
 }

else{
    c-=2;
    space++;
 }

if(c == num){
   m=1;
  }

}

	return 0;
}
