#include <stdio.h>

/*#include <string.h>*/


int main ()
{

  char str[] = "Hello-World!";
  int i=0;

  /*int size_str = strlen(str);
  printf("%d\n", size_str);*/

while(str[i]!='\0'){
printf("%c\n", str[i]);
i++;

}

  return 0;
}
