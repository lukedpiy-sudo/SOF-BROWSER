// rea decompile_all
// name: FUN_200a10a0
// address: 0x200a10a0
// body: available
// range: 0x200a10a0-0x200a10f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_200a10a0(float *param_1)

{
  int in_ECX;
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((*(byte *)(in_ECX + 0x40) & 1) == 0) || (((uint)param_1[0x10] & 1) == 0)) {
    iVar4 = 0;
    iVar3 = in_ECX - (int)param_1;
    do {
      iVar2 = 0;
      pfVar1 = param_1;
      do {
        if (0.0001 < ABS(*(float *)((int)pfVar1 + iVar3) - *pfVar1)) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        pfVar1 = pfVar1 + 1;
      } while (iVar2 < 3);
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 4;
    } while (iVar4 < 4);
  }
  return 1;
}

