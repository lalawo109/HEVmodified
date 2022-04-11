#include "rtwtypes.h"
#include "multiword_types.h"
#include "xdotc_L9OWMrp6.h"

real32_T xdotc_L9OWMrp6(const real32_T x[4], const real32_T y[4])
{
  real32_T d;
  d = x[0] * y[2];
  d += x[1] * y[3];
  return d;
}
