#include "rtwtypes.h"
#include "multiword_types.h"
#include "xrot_VJS4xnBw.h"

void xrot_VJS4xnBw(real32_T x[4], int32_T ix0, int32_T iy0, real32_T c, real32_T
                   s)
{
  int32_T ix;
  int32_T iy;
  real32_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
  temp = x[ix + 1] * c + x[iy + 1] * s;
  x[iy + 1] = x[iy + 1] * c - x[ix + 1] * s;
  x[ix + 1] = temp;
}
