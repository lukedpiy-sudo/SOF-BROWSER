// rea decompile_all
// name: FUN_200d3830
// address: 0x200d3830
// body: available
// range: 0x200d3830-0x200d393e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200d3830(void)

{
  uint uVar1;
  uint uVar2;
  char *_Str2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    uVar2 = *(uint *)(in_ECX + 0xa8);
    if (uVar2 != 0) {
      uVar1 = __ftol();
      return (uint)((uVar2 & uVar1) != 0);
    }
    if ((*(int *)(in_ECX + 0xc0) == 0) ||
       (*(int *)(in_ECX + 0xc4) - *(int *)(in_ECX + 0xc0) >> 4 == 0)) {
      uVar2 = __ftol();
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      if ((*(int *)(in_ECX + 0xb0) != 0) &&
         (uVar2 < (uint)(*(int *)(in_ECX + 0xb4) - *(int *)(in_ECX + 0xb0) >> 4))) {
        return uVar2;
      }
      if (*(int *)(in_ECX + 0xb0) != 0) {
        return (*(int *)(in_ECX + 0xb4) - *(int *)(in_ECX + 0xb0) >> 4) - 1;
      }
      return 0xffffffff;
    }
    iVar4 = 0;
    for (uVar2 = 0;
        (((*(int *)(in_ECX + 0xb0) != 0 &&
          (uVar2 < (uint)(*(int *)(in_ECX + 0xb4) - *(int *)(in_ECX + 0xb0) >> 4))) &&
         (iVar3 = *(int *)(in_ECX + 0xc0), iVar3 != 0)) &&
        (uVar2 < (uint)(*(int *)(in_ECX + 0xc4) - iVar3 >> 4))); uVar2 = uVar2 + 1) {
      _Str2 = *(char **)(iVar3 + iVar4 + 4);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      iVar3 = __strcmpi(*(char **)(*(int *)(in_ECX + 0x50) + 4),_Str2);
      if (iVar3 == 0) {
        return uVar2;
      }
      iVar4 = iVar4 + 0x10;
    }
  }
  return 0;
}

