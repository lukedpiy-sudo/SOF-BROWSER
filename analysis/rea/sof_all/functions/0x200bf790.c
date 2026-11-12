// rea decompile_all
// name: FUN_200bf790
// address: 0x200bf790
// body: available
// range: 0x200bf790-0x200bf908 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bf790(void)

{
  void **ppvVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010db54;
  local_c = ExceptionList;
  iVar4 = *(int *)(in_ECX + 0x3c);
  local_4 = 4;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (iVar4 != *(int *)(in_ECX + 0x40)) {
    do {
      if (*(int *)(iVar4 + 0x10) != 0) {
        piVar2 = (int *)FUN_200a79f0(local_14,*(int *)(iVar4 + 0x10));
        iVar5 = *piVar2;
        if ((iVar5 != DAT_2040368c) &&
           (iVar3 = *(int *)(*(int *)(iVar5 + 0x1c) + 0x120) + -1,
           *(int *)(*(int *)(iVar5 + 0x1c) + 0x120) = iVar3, iVar3 == 0)) {
          if (*(int *)(iVar5 + 0x1c) != 0) {
            FUN_200c0e30(1);
          }
          FUN_200c12f0(local_10,iVar5);
        }
      }
      iVar4 = iVar4 + 0x14;
      ppvVar1 = ExceptionList;
    } while (iVar4 != *(int *)(in_ECX + 0x40));
  }
  ExceptionList = ppvVar1;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  iVar4 = *(int *)(in_ECX + 0x40);
  iVar5 = *(int *)(in_ECX + 0x3c);
  local_4._0_1_ = 2;
  for (; iVar5 != iVar4; iVar5 = iVar5 + 0x14) {
    FUN_2000a5b0(1);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x3c));
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_20058c00(local_10,**(undefined4 **)(in_ECX + 0x28),*(undefined4 **)(in_ECX + 0x28));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x28));
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x2c));
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  iVar4 = *(int *)(in_ECX + 0x14);
  if (iVar4 != 0) {
    if (*(char *)(iVar4 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar4 + -1));
    }
    else {
      *(char *)(iVar4 + -1) = *(char *)(iVar4 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  iVar4 = *(int *)(in_ECX + 4);
  if (iVar4 != 0) {
    if (*(char *)(iVar4 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar4 + -1));
    }
    else {
      *(char *)(iVar4 + -1) = *(char *)(iVar4 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

