// rea decompile_all
// name: FUN_20097700
// address: 0x20097700
// body: available
// range: 0x20097700-0x20097923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20097700(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  FUN_200692e0(param_1,3);
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 4));
  if (*(char *)(in_ECX + 4) == '\0') {
    if (*(int *)(in_ECX + 0x18) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x18)) / 0xc;
    }
    FUN_200692e0(param_1,iVar1);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x18),iVar1 * 0xc);
  }
  else {
    FUN_20069280(param_1,in_ECX + 8,0xc);
  }
  FUN_2009a640(param_1);
  FUN_200c2b90(param_1);
  FUN_200c2b90(param_1);
  FUN_200c2b90(param_1);
  FUN_200c2b90(param_1);
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0xc0));
  if (*(char *)(in_ECX + 0xc0) == '\0') {
    if (*(int *)(in_ECX + 0xd4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 0xd8) - *(int *)(in_ECX + 0xd4)) / 0xc;
    }
    FUN_200692e0(param_1,iVar1);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0xd4),iVar1 * 0xc);
  }
  else {
    FUN_20069280(param_1,in_ECX + 0xc4,0xc);
  }
  FUN_200c2b90(param_1);
  FUN_200c2b90(param_1);
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x110));
  if (*(char *)(in_ECX + 0x110) == '\0') {
    if (*(int *)(in_ECX + 0x124) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 0x128) - *(int *)(in_ECX + 0x124)) / 0xc;
    }
    FUN_200692e0(param_1,iVar1);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x124),iVar1 * 0xc);
  }
  else {
    FUN_20069280(param_1,in_ECX + 0x114,0xc);
  }
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x130));
  if (*(char *)(in_ECX + 0x130) != '\0') {
    FUN_20069280(param_1,in_ECX + 0x134,0xc);
    return;
  }
  if (*(int *)(in_ECX + 0x144) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 0x148) - *(int *)(in_ECX + 0x144)) / 0xc;
  }
  FUN_200692e0(param_1,iVar1);
  FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x144),iVar1 * 0xc);
  return;
}

