// rea decompile_all
// name: FUN_200fed04
// address: 0x200fed04
// body: available
// range: 0x200fed04-0x200fed64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


SIZE_T FUN_200fed04(LPCVOID param_1)

{
  int iVar1;
  byte *pbVar2;
  SIZE_T SVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  if (DAT_20408b68 == 3) {
    iVar1 = FUN_200fd0b3(param_1);
    if (iVar1 != 0) {
      return *(int *)((int)param_1 + -4) - 9;
    }
  }
  else if ((DAT_20408b68 == 2) &&
          (pbVar2 = (byte *)FUN_200fde0e(param_1,local_c,local_8), pbVar2 != (byte *)0x0)) {
    return (uint)*pbVar2 << 4;
  }
  SVar3 = HeapSize(DAT_20408b64,0,param_1);
  return SVar3;
}

