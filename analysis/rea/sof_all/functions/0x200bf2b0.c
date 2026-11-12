// rea decompile_all
// name: FUN_200bf2b0
// address: 0x200bf2b0
// body: available
// range: 0x200bf2b0-0x200bf4dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bf2b0(undefined4 param_1,undefined4 param_2,int param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined1 *in_ECX;
  uint uVar6;
  int *piVar7;
  undefined1 local_42;
  undefined1 local_41 [5];
  undefined1 local_3c [8];
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010daf4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = param_4;
  FUN_2000a5b0(0);
  local_4 = 0;
  in_ECX[0x10] = param_4;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  FUN_20083e20(local_41,0,&local_42);
  in_ECX[0x38] = param_4;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  in_ECX[0x48] = param_4;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_2000a3a0(param_1,0,0xffffffff);
  *(undefined4 *)(in_ECX + 0x58) = 1;
  FUN_2000a3a0(param_2,0,0xffffffff);
  in_ECX[0x20] = param_4;
  in_ECX[0x21] = param_5;
  uVar2 = *(uint *)(param_3 + 8);
  if (*(int *)(in_ECX + 0x3c) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x3c)) / 0x14;
  }
  if (uVar6 < uVar2) {
    uVar6 = uVar2;
    if ((int)uVar2 < 0) {
      uVar6 = 0;
    }
    pvVar3 = operator_new(uVar6 * 0x14);
    FUN_200c1340(*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x40),pvVar3);
    FUN_200c1310(*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x40));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0x3c));
    *(void **)(in_ECX + 0x44) = (void *)((int)pvVar3 + uVar2 * 0x14);
    iVar4 = FUN_2008c1b0();
    *(void **)(in_ECX + 0x3c) = pvVar3;
    *(void **)(in_ECX + 0x40) = (void *)((int)pvVar3 + iVar4 * 0x14);
  }
  _param_4 = 0;
  piVar7 = (int *)**(int **)(param_3 + 4);
  if (piVar7 != *(int **)(param_3 + 4)) {
    do {
      piVar1 = piVar7 + 2;
      FUN_200234d0(piVar1);
      local_10 = 0;
      local_4._0_1_ = 5;
      piVar5 = (int *)FUN_2003c140(local_3c,local_20);
      iVar4 = *piVar5;
      local_4._0_1_ = 4;
      FUN_2000a5b0(1);
      *(int *)(iVar4 + 0x1c) = _param_4;
      local_34[0] = (undefined1)*piVar1;
      FUN_2000a5b0(0);
      FUN_2000a3a0(piVar1,0,0xffffffff);
      local_24 = 0;
      local_4._0_1_ = 6;
      FUN_200c15a0(*(undefined4 *)(in_ECX + 0x40),1,local_34);
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_2000a5b0(1);
      piVar7 = (int *)*piVar7;
      _param_4 = _param_4 + 1;
    } while (piVar7 != (int *)*(int *)(param_3 + 4));
  }
  ExceptionList = local_c;
  return;
}

