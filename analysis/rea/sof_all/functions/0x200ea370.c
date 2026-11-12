// rea decompile_all
// name: FUN_200ea370
// address: 0x200ea370
// body: available
// range: 0x200ea370-0x200ea4a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200ea370(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (in_ECX[0x13] == 0) {
    piVar6 = (int *)*in_ECX;
    if (*(char *)((int)in_ECX + 0x89) == '\0') {
      iVar3 = *(int *)(*piVar6 + 0x9c) + piVar6[0x10];
      iVar4 = *(int *)(*piVar6 + 0xa0) + piVar6[0x11];
      iVar5 = piVar6[0x12];
      iVar2 = piVar6[0x13];
    }
    else {
      iVar3 = *(int *)(*piVar6 + 0x9c) + piVar6[0x10];
      iVar4 = *(int *)(*piVar6 + 0xa0) + piVar6[0x11];
      iVar5 = *(int *)(*piVar6 + 0xa4);
      iVar2 = *(int *)(*piVar6 + 0xa8);
    }
    (*DAT_204035fc)(iVar3,iVar4,iVar5,iVar2);
  }
  else {
    FUN_200c3ef0(in_ECX);
  }
  if ((float)in_ECX[0x24] != 0.0) {
    FUN_200c64f0();
    iVar5 = *in_ECX;
    FUN_200fcaca();
    iVar2 = __ftol();
    in_ECX[0x20] = iVar2;
    if (iVar2 < 0) {
      iVar2 = FUN_200c64f0();
      in_ECX[0x20] = in_ECX[0x20] + (iVar2 * 2 - *(int *)(iVar5 + 0x4c)) + in_ECX[0x1f];
    }
  }
  piVar6 = *(int **)in_ECX[0x27];
  if (piVar6 != (int *)in_ECX[0x27]) {
    do {
      (**(code **)(*(int *)piVar6[2] + 0x34))();
      cVar1 = (**(code **)(*(int *)piVar6[2] + 0x30))();
      if (cVar1 != '\0') {
        (**(code **)(*(int *)piVar6[2] + 0x1c))();
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)in_ECX[0x27]);
  }
                    /* WARNING: Could not recover jumptable at 0x200ea4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_20403600)();
  return;
}

