#include "ffi_platypus.h"
#include <stdio.h>

int
main(int argc, char *argv[])
{
  ffi_cif cif;
  ffi_type *args[0];
  ffi_abi abi;

  abi = TRY_FFI_ABI;
  
  if(ffi_prep_cif(&cif, abi, 0, &ffi_type_void, args) == FFI_OK)
  {
    printf("|value=%d|\n", abi);
    return 0;
  }

  return 2;
}
