// rea decompile_all
// name: FUN_200aac60
// address: 0x200aac60
// body: available
// range: 0x200aac60-0x200aad72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200aac60(void)

{
  void **ppvVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010d80c;
  local_c = ExceptionList;
  iVar2 = *(int *)(in_ECX + 0x4c);
  local_4 = 3;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (iVar2 != *(int *)(in_ECX + 0x50)) {
    do {
      if (*(int *)(iVar2 + 4) != 0) {
        FUN_200f9f75(*(int *)(iVar2 + 4));
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      if (*(int *)(iVar2 + 8) != 0) {
        FUN_200f9f75(*(int *)(iVar2 + 8));
      }
      *(undefined4 *)(iVar2 + 8) = 0;
      iVar2 = iVar2 + 0xc;
      ppvVar1 = ExceptionList;
    } while (iVar2 != *(int *)(in_ECX + 0x50));
  }
  ExceptionList = ppvVar1;
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_200f9f75(*(int *)(in_ECX + 0x30));
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_200f9f75(*(int *)(in_ECX + 0x34));
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  iVar2 = *(int *)(in_ECX + 0x60);
  for (iVar3 = *(int *)(in_ECX + 0x5c); iVar3 != iVar2; iVar3 = iVar3 + 0x10) {
    FUN_20027f20(0);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x5c));
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x3c));
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x20));
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x10));
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  ExceptionList = local_c;
  return;
}

