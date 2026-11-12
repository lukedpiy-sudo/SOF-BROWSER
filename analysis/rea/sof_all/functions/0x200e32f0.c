// rea decompile_all
// name: FUN_200e32f0
// address: 0x200e32f0
// body: available
// range: 0x200e32f0-0x200e33c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200e32f0(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(in_ECX + 4) != 0) && (*(char *)(*(int *)(in_ECX + 4) + -1) != '\0')) {
    FUN_2000a6c0(*(undefined4 *)(in_ECX + 8),0);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined1 *)(*(int *)(in_ECX + 4) + -1) = 0;
  }
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1 - *(int *)(in_ECX + 4);
  }
  if (param_2 != 0) {
    param_2 = param_2 - param_1;
  }
  if (*(uint *)(in_ECX + 8) < uVar3) {
    FUN_201077fc();
  }
  uVar2 = *(int *)(in_ECX + 8) - uVar3;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    if ((*(int *)(in_ECX + 4) != 0) && (*(char *)(*(int *)(in_ECX + 4) + -1) != '\0')) {
      FUN_2000a6c0(*(int *)(in_ECX + 8),0);
    }
    if (*(int *)(in_ECX + 4) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 4) + -1) = 0;
    }
    FUN_200fa360(*(int *)(in_ECX + 4) + uVar3,*(int *)(in_ECX + 4) + param_2 + uVar3,
                 (*(int *)(in_ECX + 8) - param_2) - uVar3);
    iVar4 = *(int *)(in_ECX + 8) - param_2;
    cVar1 = FUN_2000a6c0(iVar4,0);
    if (cVar1 != '\0') {
      *(int *)(in_ECX + 8) = iVar4;
      *(undefined1 *)(iVar4 + *(int *)(in_ECX + 4)) = 0;
    }
  }
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 4) + uVar3;
}

