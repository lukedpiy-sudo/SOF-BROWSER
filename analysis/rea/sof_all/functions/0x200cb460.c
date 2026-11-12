// rea decompile_all
// name: FUN_200cb460
// address: 0x200cb460
// body: available
// range: 0x200cb460-0x200cb4f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cb460(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  for (iVar2 = *(int *)(in_ECX + 0x28); iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    FUN_2000a5b0(1);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x28));
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) != '\0') {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      return;
    }
    FUN_200f9f75((char *)(iVar1 + -1));
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}

