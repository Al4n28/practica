#include <math.h>
int Equality(float a, float b, float epsilon)
{
  if (fabs(a-b) < epsilon) return 1;
  return 0;
}