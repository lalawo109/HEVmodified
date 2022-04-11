#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_YC54Gy7j.h"

void xscal_YC54Gy7j(real32_T a, real32_T x[4], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 1; k++) {
    x[k - 1] *= a;
  }
}
