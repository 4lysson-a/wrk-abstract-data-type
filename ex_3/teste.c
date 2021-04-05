#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("clear");
  
  int x = -42;
  int length = snprintf(NULL, 0, "%d", x);
  char *str = malloc(length + 1);
  snprintf(str, length + 1, "%d\n", x);

  printf("%s\n", str);
}