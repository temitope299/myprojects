#include <stdio.h>
#define FREEZINGP 32.0
#define SCALEF 5.0f/9.0
int main(void)
{
  int fah,celsius;

  printf("enter fah: ");
  scanf("%d" ,&fah);

  celsius = (fah - FREEZINGP) * SCALEF;
  printf("%d", &celsius);

  return 0;
  


 }
