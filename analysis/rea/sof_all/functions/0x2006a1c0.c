// rea decompile_all
// name: FUN_2006a1c0
// address: 0x2006a1c0
// body: available
// range: 0x2006a1c0-0x2006a239 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2006a1c0(char *param_1)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  int in_ECX;
  int local_8;
  int local_4;
  
  param_1 = *(char **)((int)param_1 + 4);
  if (param_1 == (char *)0x0) {
    param_1 = "";
  }
  local_8 = FUN_20075350(&param_1);
  if (local_8 != *(int *)(in_ECX + 0x24)) {
    iVar1 = __strcmpi(param_1,*(char **)(local_8 + 0xc));
    if (iVar1 != -1) {
      piVar2 = &local_8;
      goto LAB_2006a21c;
    }
  }
  piVar2 = &local_4;
  local_4 = *(int *)(in_ECX + 0x24);
LAB_2006a21c:
  iVar1 = *piVar2;
  uVar3 = (ushort)((uint)iVar1 >> 0x10);
  if (iVar1 != *(int *)(in_ECX + 0x24)) {
    return CONCAT22(uVar3,*(undefined2 *)(iVar1 + 0x10));
  }
  return (uint)uVar3 << 0x10;
}

