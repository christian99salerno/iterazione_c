#include <stdio.h>

int main ()

{

  int i;
  int vet[10];

  for(i=0; i<=9; i++){
    printf("indirizzo di num[%d]: %p\n", i, (void*)&vet[i] );
}

return 0;

}
