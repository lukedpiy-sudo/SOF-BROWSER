// rea decompile_all
// name: FUN_200ebf70
// address: 0x200ebf70
// body: available
// range: 0x200ebf70-0x200ec0de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ebf70(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0x21) {
    return;
  }
  if (*(float *)(DAT_2040656c + 0x18) == 0.0) {
    return;
  }
  if (DAT_20406580 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    if ((&DAT_20406570)[iVar1] == param_1) {
      FUN_200ed9d0(iVar1,1,0);
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  while (((&DAT_20406570)[iVar1] == 0x21 || (iVar2 = FUN_200eda20(iVar1), iVar2 != 0))) {
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      iVar1 = 0;
      while (iVar2 = DAT_20406580, (&DAT_20406570)[iVar1] != 0x21) {
        iVar1 = iVar1 + 1;
        if (3 < iVar1) {
          if (DAT_20406574 != 0x21) {
            iVar1 = FUN_200eda20(1);
            if ((iVar1 != 0) && (iVar1 = FUN_200eda70(1), iVar1 == 0)) {
              return;
            }
            if (DAT_20406574 != 0x21) {
              FUN_200edab0(1);
            }
          }
          DAT_20406574 = 0x21;
          iVar1 = FUN_200ec150(1,param_1,DAT_20406580);
          if (iVar1 == 0) {
            return;
          }
          DAT_20406574 = param_1;
          FUN_200ed9d0(1,1,0);
          return;
        }
      }
LAB_200ec0b9:
      iVar2 = FUN_200ec150(iVar1,param_1,iVar2);
      if (iVar2 == 0) {
        return;
      }
      (&DAT_20406570)[iVar1] = param_1;
      FUN_200ed9d0(iVar1,1,0);
      return;
    }
  }
  if ((&DAT_20406570)[iVar1] != 0x21) {
    iVar2 = FUN_200eda20(iVar1);
    if ((iVar2 != 0) && (iVar2 = FUN_200eda70(iVar1), iVar2 == 0)) {
      return;
    }
    if ((&DAT_20406570)[iVar1] != 0x21) {
      FUN_200edab0(iVar1);
    }
  }
  iVar2 = DAT_20406580;
  (&DAT_20406570)[iVar1] = 0x21;
  goto LAB_200ec0b9;
}

