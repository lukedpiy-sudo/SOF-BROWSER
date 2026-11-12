// rea decompile_all
// name: FUN_200c6350
// address: 0x200c6350
// body: available
// range: 0x200c6350-0x200c6433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c6350(void)

{
  int iVar1;
  void **ppvVar2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010df51;
  iVar1 = *(int *)(in_ECX + 4);
  local_4 = 2;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar2, iVar1 != 0) {
    *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(iVar1 + 4);
    if (iVar1 != 0) {
      FUN_200e61a0();
      FUN_200f9f75(iVar1);
    }
    ppvVar2 = ExceptionList;
    iVar1 = *(int *)(in_ECX + 4);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  iVar1 = *(int *)(in_ECX + 0x20);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  ExceptionList = local_c;
  return;
}

