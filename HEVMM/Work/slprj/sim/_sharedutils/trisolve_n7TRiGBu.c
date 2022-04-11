#include "rtwtypes.h"
#include "multiword_types.h"
#include "trisolve_n7TRiGBu.h"

void trisolve_n7TRiGBu(real32_T A, real32_T B[2])
{
  if (B[0] != 0.0F) {
    B[0] /= A;
  }

  if (B[1] != 0.0F) {
    B[1] /= A;
  }
}
