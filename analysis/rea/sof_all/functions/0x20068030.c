// rea decompile_all
// name: FUN_20068030
// address: 0x20068030
// body: available
// range: 0x20068030-0x200681c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20068030(undefined4 param_1)

{
  char *in_ECX;
  int iVar1;
  
  FUN_20069340(param_1,*in_ECX);
  if (*in_ECX == '\0') {
    if (*(int *)(in_ECX + 0x14) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14)) / 0xc;
    }
    FUN_200692e0(param_1,iVar1);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x14),iVar1 * 0xc);
  }
  else {
    FUN_20069280(param_1,in_ECX + 4,0xc);
  }
  FUN_20069340(param_1,in_ECX[0x20]);
  if (in_ECX[0x20] == '\0') {
    if (*(int *)(in_ECX + 0x34) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34)) / 0xc;
    }
    FUN_200692e0(param_1,iVar1);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x34),iVar1 * 0xc);
  }
  else {
    FUN_20069280(param_1,in_ECX + 0x24,0xc);
  }
  FUN_20069340(param_1,in_ECX[0x40]);
  if (in_ECX[0x40] == '\0') {
    if (*(int *)(in_ECX + 0x54) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x54)) / 0xc;
    }
    FUN_200692e0(param_1,iVar1);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x54),iVar1 * 0xc);
  }
  else {
    FUN_20069280(param_1,in_ECX + 0x44,0xc);
  }
  FUN_20069340(param_1,in_ECX[0x60]);
  if (in_ECX[0x60] != '\0') {
    FUN_20069280(param_1,in_ECX + 100,0xc);
    return;
  }
  if (*(int *)(in_ECX + 0x74) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 0x78) - *(int *)(in_ECX + 0x74)) / 0xc;
  }
  FUN_200692e0(param_1,iVar1);
  FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x74),iVar1 * 0xc);
  return;
}

