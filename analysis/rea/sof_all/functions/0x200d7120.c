// rea decompile_all
// name: FUN_200d7120
// address: 0x200d7120
// body: available
// range: 0x200d7120-0x200d728d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d7120(undefined4 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined1 local_91;
  undefined1 auStack_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ed2e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200ce840(param_1,3);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x26) = local_91;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x2a) = local_91;
  FUN_2000a5b0(0);
  local_4._0_1_ = 2;
  *(undefined1 *)(in_ECX + 0x32) = local_91;
  FUN_2000a5b0(0);
  in_ECX[0x36] = &PTR_LAB_20112a38;
  in_ECX[0x37] = &PTR_LAB_20112a34;
  in_ECX[0x38] = &PTR_LAB_20112a30;
  local_4 = CONCAT31(local_4._1_3_,3);
  *in_ECX = &PTR_FUN_201129e0;
  FUN_200d7060();
  FUN_200eafe0(1);
  uVar2 = FUN_200eb440(0);
  iVar3 = (**(code **)**(undefined4 **)(*(int *)(*(int *)*param_1 + 0x14) + 0x24))();
  in_ECX[0x23] = iVar3;
  if (iVar3 != 0) {
    Com_sprintf(auStack_8c,0x80,s__s__s_ghl_20158ce8,s_ghoul_menus_20158cf4,uVar2);
    sVar1 = (*(code *)**(undefined4 **)in_ECX[0x23])(auStack_8c,0);
    *(short *)(in_ECX + 0x25) = sVar1;
    if (sVar1 != 0) {
      (**(code **)(*(int *)in_ECX[0x23] + 4))(1);
      (**(code **)(*(int *)in_ECX[0x23] + 8))(1);
      uVar2 = (**(code **)(*(int *)in_ECX[0x23] + 0x60))();
      in_ECX[0x24] = uVar2;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

