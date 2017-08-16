#include <stdio.h>

int main () 
{

int sum = 0;
int pro = 1;

int i;

for (i=2;i<31;i++){
  if(i%2==0){
    sum+=i;
  }
}
for (i=1;i<16;i++){
  if(i%2!=0){
    pro*=i;
  }
}

printf("La somma dei pari e' %d\n",sum);
printf("Il prodotto dei dispari e' %d\n",pro);

  return 0;
}
