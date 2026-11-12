// rea decompile_all
// name: FUN_2006e700
// address: 0x2006e700
// body: available
// range: 0x2006e700-0x2006e86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006e700(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_2010ba43;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_200c0e50();
  piVar1 = *(int **)(in_ECX + 0x18);
  piVar2 = (int *)*piVar1;
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(in_ECX + 0x24) == 0) {
    while (piVar2 != piVar1) {
      puVar3 = (undefined4 *)FUN_20073130(local_14,0);
      FUN_20073590(local_10,*puVar3);
    }
  }
  else {
    FUN_200730f0(piVar1[1]);
    *(undefined4 *)(*(int *)(in_ECX + 0x18) + 4) = *(undefined4 *)(in_ECX + 0x1c);
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x18);
    *(int *)(*(int *)(in_ECX + 0x18) + 8) = *(int *)(in_ECX + 0x18);
    FUN_20083550(local_18);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x18));
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x1c));
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  piVar1 = *(int **)(in_ECX + 4);
  piVar2 = (int *)*piVar1;
  local_4 = 0xffffffff;
  if (*(int *)(in_ECX + 0x10) == 0) {
    while (piVar2 != piVar1) {
      puVar3 = (undefined4 *)FUN_20073130(local_14,0);
      FUN_20073590(local_18,*puVar3);
    }
  }
  else {
    FUN_200730b0(piVar1[1]);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 4) = *(undefined4 *)(in_ECX + 8);
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    FUN_20083550(local_10);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  ExceptionList = local_c;
  return;
}

