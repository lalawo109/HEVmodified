#include "rtwtypes.h"
#include "multiword_types.h"
#include "xswap_sOCliIB6.h"

void xswap_sOCliIB6(real32_T x[4], int32_T ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  real32_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
  temp = x[ix + 1];
  x[ix + 1] = x[iy + 1];
  x[iy + 1] = temp;
}
