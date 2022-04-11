#include "rtwtypes.h"
#include "multiword_types.h"
#include "xgemv_r0VDt5Ig.h"

void xgemv_r0VDt5Ig(int32_T m, int32_T n, const real32_T A[4], int32_T ia0,
                    const real32_T x[4], int32_T ix0, real32_T y[2])
{
  int32_T b;
  int32_T b_iy;
  int32_T d;
  int32_T ia;
  int32_T iac;
  int32_T ix;
  real32_T c;
  if ((m != 0) && (n != 0)) {
    for (b_iy = 0; b_iy < n; b_iy++) {
      y[b_iy] = 0.0F;
    }

    b_iy = 0;
    b = ((n - 1) << 1) + ia0;
    for (iac = ia0; iac <= b; iac += 2) {
      ix = ix0;
      c = 0.0F;
      d = (iac + m) - 1;
      for (ia = iac; ia <= d; ia++) {
        c += A[ia - 1] * x[ix - 1];
        ix++;
      }

      y[b_iy] += c;
      b_iy++;
    }
  }
}
