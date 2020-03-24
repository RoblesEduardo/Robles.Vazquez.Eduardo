#include <stdio.h>

int main(void)
{
  int i;
  int x;
  printf("Ingrese un numero para aumentarlo 10 veces de 2 en 2\n");
  scanf("%d", &x);

  for(i=1;i<11;i++)
  {
    x = x + 2;
    printf("Su numero es: %d\n",x);
  }
  return 0;
}
