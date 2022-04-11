#include "rtwtypes.h"
#include "multiword_types.h"
#include "BINARYSEARCH_real_T.h"

void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    *piLeft = iHi;
  } else {
    uint32_T i;
    while (( *piRght - *piLeft ) > 1U ) {
      i = (*piLeft + *piRght) >> 1;
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}
