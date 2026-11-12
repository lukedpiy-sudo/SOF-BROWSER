// rea decompile_all
// name: FUN_200a14c0
// address: 0x200a14c0
// body: available
// range: 0x200a14c0-0x200a152a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a14c0(undefined4 *param_1,undefined4 *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *in_ECX;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  if (((uint)in_ECX[0x10] & 1) != 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    return;
  }
  iVar5 = 3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar6 = (int)param_1 - (int)in_ECX;
  do {
    iVar3 = 0;
    pfVar4 = in_ECX;
    do {
      pfVar1 = (float *)(param_2 + iVar3);
      fVar2 = *pfVar4;
      iVar3 = iVar3 + 1;
      pfVar4 = pfVar4 + 4;
      *(float *)(iVar6 + (int)in_ECX) = *pfVar1 * fVar2 + *(float *)(iVar6 + (int)in_ECX);
    } while (iVar3 < 3);
    in_ECX = in_ECX + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

