#include <stdio.h>

int main () 
{

  const double pi = 3.14159;

  double r;

  double perimetro = 0;
  double area = 0;
  
  do{

  printf("Digita il raggio del cerchio ");
  scanf("%lf", &r);
  
  if( r < 0 )
    printf("Numero negativo reinserisci il raggio\n");

  }

  while (r < 0);

  perimetro = 2*r * pi;
  area = (r * r) * pi;

  printf("La circonferenza misura %f\n", perimetro);
  printf("La sua superficie e' %f\n", area);

  return 0;
}
