#include <stdio.h>

int main ()
{

int i;

printf("\n");

printf("a)");
/*1,2,3,4,5,6,7,8*/
for (i=1;i<9;i++){
  printf("%d,", i);
}
  printf("\n\n");

printf("b)");
/*3,8,13,18,23*/
for (i=3;i<24;i+=5){
  printf("%d,", i);
}
  printf("\n\n");

printf("c)");
/*20,14,8,2,-4,-10*/
for (i=20;i>-11;i-=6){
  printf("%d,", i);
}
  printf("\n\n");
  
printf("d)");
/*19,27,35,43,51*/
for (i=19;i<52;i+=8){
  printf("%d,", i);
}
  printf("\n\n");

   return 0;
}
