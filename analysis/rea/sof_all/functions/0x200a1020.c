// rea decompile_all
// name: FUN_200a1020
// address: 0x200a1020
// body: available
// range: 0x200a1020-0x200a1093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a1020(int param_1,float *param_2,float param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  if (((*(byte *)(param_1 + 0x40) & 1) != 0) && (((uint)param_2[0x10] & 1) != 0)) {
    puVar2 = in_ECX;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    iVar4 = 4;
    puVar2 = in_ECX;
    do {
      *puVar2 = 0x3f800000;
      puVar2 = puVar2 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    in_ECX[0x10] = 1;
    return;
  }
  iVar4 = 0x10;
  pfVar3 = param_2;
  do {
    pfVar1 = (float *)(((int)in_ECX - (int)param_2) + (int)pfVar3);
    iVar4 = iVar4 + -1;
    *pfVar1 = (*(float *)((param_1 - (int)in_ECX) + (int)pfVar1) - *pfVar3) * param_3 + *pfVar3;
    pfVar3 = pfVar3 + 1;
  } while (iVar4 != 0);
  in_ECX[0x10] = 0;
  return;
}

