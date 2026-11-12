// rea decompile_all
// name: FUN_200c9f80
// address: 0x200c9f80
// body: available
// range: 0x200c9f80-0x200c9fd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c9f80(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  iVar1 = Cvar_Get(param_1,&DAT_2015ee44,0,0);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if ((uVar2 & 0x100) == 0) {
    if ((uVar2 & 0x200) == 0) {
      uVar2 = (uint)(byte)((~(byte)(uVar2 >> 8) & 4 | 8) >> 2);
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (*(int *)(in_ECX + 0x7c + uVar2 * 4) != 0) {
    FUN_200e0f10(param_1);
  }
  return;
}

