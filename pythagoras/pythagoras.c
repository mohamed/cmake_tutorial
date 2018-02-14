#include <math.h>
#include <assert.h>

double pythagoras(const double a, const double b)
{
  double c;
  assert(a > 0.0 && b > 0.0);
  c = sqrt(pow(a, 2.0) + pow(b, 2.0));
  return c;
}
