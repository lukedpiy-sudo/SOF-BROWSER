// rea decompile_all
// name: FUN_200e61a0
// address: 0x200e61a0
// body: available
// range: 0x200e61a0-0x200e6337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e61a0(void)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  undefined1 local_14 [4];
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010fd65;
  pvStack_c = ExceptionList;
  local_4 = 3;
  piVar5 = (int *)**(int **)(in_ECX + 0x9c);
  ExceptionList = &pvStack_c;
  ppvVar3 = &pvStack_c;
  if (piVar5 != *(int **)(in_ECX + 0x9c)) {
    do {
      if ((undefined4 *)piVar5[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar5[2])(1);
      }
      piVar5 = (int *)*piVar5;
      ppvVar3 = ExceptionList;
    } while (piVar5 != (int *)*(int *)(in_ECX + 0x9c));
  }
  ExceptionList = ppvVar3;
  piVar5 = *(int **)(in_ECX + 0x9c);
  piVar1 = (int *)*piVar5;
  while (piVar1 != piVar5) {
    puVar4 = (undefined4 *)FUN_2008d0b0(local_14,0);
    FUN_200ba400(&piStack_10,*puVar4);
  }
  piVar5 = *(int **)(in_ECX + 0x54);
  if (piVar5 != (int *)0x0) {
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 5;
    piStack_10 = piVar5;
    if (*piVar5 != 0) {
      FUN_200d6dd0(1);
    }
    local_4._0_1_ = 4;
    FUN_2000a5b0(1);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_2000a5b0(1);
    FUN_200f9f75(piVar5);
  }
  if (*(int *)(in_ECX + 0x50) != 0) {
    FUN_200f9f75(*(int *)(in_ECX + 0x50));
  }
  iVar2 = *(int *)(in_ECX + 0x4c);
  if (iVar2 != 0) {
    FUN_200c3e10();
    FUN_200f9f75(iVar2);
  }
  piVar5 = *(int **)(in_ECX + 0x9c);
  local_4._0_1_ = 2;
  piVar1 = (int *)*piVar5;
  while (piVar1 != piVar5) {
    puVar4 = (undefined4 *)FUN_2008d0b0(&piStack_10,0);
    FUN_200ba400(local_14,*puVar4);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x9c));
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x5c));
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_2000a5b0(1);
  iVar2 = *(int *)(in_ECX + 0xc);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  ExceptionList = pvStack_c;
  return;
}

