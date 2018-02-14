#include <stdio.h>
#include <stdlib.h>

#include "pythagoras.h"

int main()
{
  double a = 3, b = 4;
  double c;

  c = pythagoras(a, b);

  printf("(%.0f)^2 + (%.0f)^2 = (%.0f)^2\n", a, b, c);
  return EXIT_SUCCESS;
}
