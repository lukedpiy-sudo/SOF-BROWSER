// rea decompile_all
// name: FUN_2002ea80
// address: 0x2002ea80
// body: available
// range: 0x2002ea80-0x2002ec49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002ea80(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  if ((int *)in_ECX[9] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2002ea93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)in_ECX[9] + 0xc))();
    return;
  }
  iVar3 = in_ECX[8];
  if (param_1 == 0x3ea) {
    if (3 < iVar3) {
      iVar3 = (int)(iVar3 + -4 + (iVar3 + -4 >> 0x1f & 3U)) >> 2;
      if (in_ECX[0x1a] == iVar3) {
        in_ECX[0x1a] = -1;
      }
      else {
        in_ECX[0x1a] = iVar3;
      }
    }
  }
  else if (param_1 == 0x3e9) {
    if (3 < iVar3) {
      iVar4 = 0;
      for (piVar1 = *(int **)in_ECX[4]; piVar1 != (int *)in_ECX[4]; piVar1 = (int *)*piVar1) {
        if (iVar4 == (int)(iVar3 + -4 + (iVar3 + -4 >> 0x1f & 3U)) >> 2) {
          *(int *)piVar1[1] = *piVar1;
          *(int *)(*piVar1 + 4) = piVar1[1];
          FUN_200f9f75(piVar1);
          in_ECX[5] = in_ECX[5] + -1;
          break;
        }
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (param_1 == 1000) {
    if (iVar3 < 0xc) {
      in_ECX[8] = 0xc;
    }
    else {
      in_ECX[8] = ((0x1b < iVar3) - 1 & 0x1b) + 1;
    }
  }
  else if (param_1 == 999) {
    if (iVar3 < 0xc) {
      in_ECX[8] = 0x1c;
    }
    else {
      in_ECX[8] = ((0x1b < iVar3) - 1 & 0xfffffff5) + 0xc;
    }
  }
  else {
    iVar3 = iVar3 + param_1;
    in_ECX[8] = iVar3;
    if (iVar3 < 0) {
      do {
        iVar3 = iVar3 + 0x2c;
      } while (iVar3 < 0);
      in_ECX[8] = iVar3;
    }
    iVar3 = in_ECX[8];
    if (0x2b < iVar3) {
      do {
        iVar3 = iVar3 + -0x2c;
      } while (0x2b < iVar3);
      in_ECX[8] = iVar3;
    }
    if (param_1 == 0) {
      iVar3 = 1;
      goto LAB_2002eb58;
    }
  }
  iVar3 = __ftol();
LAB_2002eb58:
  while( true ) {
    iVar4 = in_ECX[8];
    bVar2 = false;
    if ((iVar4 == 2) && (*in_ECX != 1)) {
      bVar2 = true;
    }
    if ((iVar4 == 3) && (*in_ECX != 1)) {
      bVar2 = true;
    }
    if (in_ECX[5] < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      bVar2 = true;
    }
    if (((in_ECX[5] != 10) || (iVar4 != 0)) && (!bVar2)) break;
    iVar4 = iVar4 + iVar3;
    in_ECX[8] = iVar4;
    if (iVar4 < 0) {
      do {
        iVar4 = iVar4 + 0x2c;
      } while (iVar4 < 0);
      in_ECX[8] = iVar4;
    }
    iVar4 = in_ECX[8];
    if (0x2b < iVar4) {
      do {
        iVar4 = iVar4 + -0x2c;
      } while (0x2b < iVar4);
      in_ECX[8] = iVar4;
    }
  }
  return;
}

