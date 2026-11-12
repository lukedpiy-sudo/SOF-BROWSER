// rea decompile_all
// name: FUN_20026370
// address: 0x20026370
// body: available
// range: 0x20026370-0x200263d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20026370(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0xf8349720;
  bVar3 = false;
  iVar1 = FUN_200faa9a(param_1,&DAT_201311d4);
  if (iVar1 != 0) {
    uVar2 = FUN_200fb439(iVar1);
    while (uVar2 != 0xffffffff) {
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 * 2 | 1;
      }
      else {
        uVar4 = uVar4 * 2;
      }
      if (bVar3) {
        uVar4 = uVar4 ^ uVar2;
      }
      else {
        uVar4 = uVar4 + uVar2;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      uVar2 = FUN_200fb439(iVar1);
    }
    FUN_200fa9ae(iVar1);
  }
  return uVar4;
}

