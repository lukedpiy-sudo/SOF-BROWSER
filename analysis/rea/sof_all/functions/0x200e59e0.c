// rea decompile_all
// name: FUN_200e59e0
// address: 0x200e59e0
// body: available
// range: 0x200e59e0-0x200e5b30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200e59e0(int param_1)

{
  char *pcVar1;
  int iVar2;
  int in_ECX;
  char *pcVar3;
  
  switch(*(undefined4 *)(DAT_20406554 + 0x34)) {
  case 8:
    pcVar3 = *(char **)(param_1 + 0x18);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    pcVar1 = *(char **)(in_ECX + 0x18);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    iVar2 = __strcmpi(pcVar1,pcVar3);
    return iVar2;
  case 9:
    pcVar3 = *(char **)(in_ECX + 0x18);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    pcVar1 = *(char **)(param_1 + 0x18);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    iVar2 = __strcmpi(pcVar1,pcVar3);
    return iVar2;
  case 10:
    return *(int *)(in_ECX + 0x70) - *(int *)(param_1 + 0x70);
  case 0xb:
    return *(int *)(param_1 + 0x70) - *(int *)(in_ECX + 0x70);
  case 0xc:
    break;
  case 0xd:
    pcVar3 = *(char **)(in_ECX + 0x50);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    pcVar1 = *(char **)(param_1 + 0x50);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    iVar2 = __strcmpi(pcVar1,pcVar3);
    return iVar2;
  case 0xe:
    pcVar3 = *(char **)(param_1 + 0x28);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    pcVar1 = *(char **)(in_ECX + 0x28);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    iVar2 = __strcmpi(pcVar1,pcVar3);
    return iVar2;
  case 0xf:
    pcVar3 = *(char **)(in_ECX + 0x28);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    pcVar1 = *(char **)(param_1 + 0x28);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    iVar2 = __strcmpi(pcVar1,pcVar3);
    return iVar2;
  case 0x10:
    return *(int *)(in_ECX + 0x44) - *(int *)(param_1 + 0x44);
  case 0x11:
    return *(int *)(param_1 + 0x44) - *(int *)(in_ECX + 0x44);
  default:
    return 1;
  }
  pcVar3 = *(char **)(param_1 + 0x50);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  pcVar1 = *(char **)(in_ECX + 0x50);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,pcVar3);
  return iVar2;
}

