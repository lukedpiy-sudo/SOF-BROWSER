// rea decompile_all
// name: FUN_200c9b10
// address: 0x200c9b10
// body: available
// range: 0x200c9b10-0x200c9cc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c9b10(void)

{
  int iVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  undefined4 *local_1c [2];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010e2ba;
  local_c = ExceptionList;
  local_4 = 9;
  piVar5 = (int *)**(int **)(in_ECX + 0x1c);
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (piVar5 != *(int **)(in_ECX + 0x1c)) {
    do {
      iVar1 = piVar5[2];
      if (iVar1 != 0) {
        FUN_200c6350();
        FUN_200f9f75(iVar1);
      }
      piVar5 = (int *)*piVar5;
      ppvVar3 = ExceptionList;
    } while (piVar5 != (int *)*(int *)(in_ECX + 0x1c));
  }
  ExceptionList = ppvVar3;
  FUN_2008c530(local_1c,**(undefined4 **)(in_ECX + 0x1c),*(undefined4 **)(in_ECX + 0x1c));
  iVar1 = *(int *)(in_ECX + 0x5c);
  if (iVar1 != 0) {
    FUN_2000a5b0(1);
    FUN_200f9f75(iVar1);
    *(undefined4 *)(in_ECX + 0x5c) = 0;
  }
  local_4._0_1_ = 8;
  FUN_2000a5b0(1);
  local_4._0_1_ = 7;
  FUN_200cada0(local_1c,**(undefined4 **)(in_ECX + 0xec),*(undefined4 **)(in_ECX + 0xec));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xec));
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  local_4._0_1_ = 6;
  FUN_200cac80();
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc4));
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  local_4._0_1_ = 4;
  FUN_2000a5b0(1);
  local_4._0_1_ = 3;
  FUN_2000a5b0(1);
  local_4._0_1_ = 2;
  FUN_2000a5b0(1);
  local_4._0_1_ = 1;
  FUN_2000a5b0(1);
  puVar2 = *(undefined4 **)(in_ECX + 0x1c);
  local_4 = (uint)local_4._1_3_ << 8;
  local_1c[0] = (undefined4 *)*puVar2;
  while (local_1c[0] != puVar2) {
    puVar4 = (undefined4 *)FUN_2008d0b0(local_14,0);
    FUN_200ba400(local_10,*puVar4);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x1c));
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  ExceptionList = local_c;
  return;
}

