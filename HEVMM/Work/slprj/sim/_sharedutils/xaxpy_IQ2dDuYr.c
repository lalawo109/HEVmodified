#include "rtwtypes.h"
#include "multiword_types.h"
#include "xaxpy_IQ2dDuYr.h"

void xaxpy_IQ2dDuYr(real32_T a, real32_T y[4])
{
  if (!(a == 0.0F)) {
    y[2] += a * y[0];
    y[3] += a * y[1];
  }
}
