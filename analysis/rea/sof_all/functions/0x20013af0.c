// rea decompile_all
// name: FUN_20013af0
// address: 0x20013af0
// body: available
// range: 0x20013af0-0x20013b61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20013af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  
  DAT_2022fef8 = param_1;
  DAT_2022ff00 = param_2;
  DAT_2022593c = param_3;
  _strncpy(&DAT_2022ff10,param_4,0x3ff);
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  _DAT_20225e7c = 0;
  DAT_2022feec = 0;
  _DAT_20225e74 =
       (float)((float10)(~uVar2 - 1) * (float10)0.1 + (float10)*(float *)(DAT_20225980 + 0x18));
  return;
}

