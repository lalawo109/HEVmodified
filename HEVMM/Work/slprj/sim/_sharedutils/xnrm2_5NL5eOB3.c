#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xnrm2_5NL5eOB3.h"

real32_T xnrm2_5NL5eOB3(const real32_T x[4])
{
  real32_T absxk;
  real32_T scale;
  real32_T t;
  real32_T y;
  scale = 1.29246971E-26F;
  absxk = muSingleScalarAbs(x[0]);
  if (absxk > 1.29246971E-26F) {
    y = 1.0F;
    scale = absxk;
  } else {
    t = absxk / 1.29246971E-26F;
    y = t * t;
  }

  absxk = muSingleScalarAbs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0F;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * muSingleScalarSqrt(y);
}
