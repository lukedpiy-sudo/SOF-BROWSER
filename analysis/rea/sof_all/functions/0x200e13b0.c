// rea decompile_all
// name: FUN_200e13b0
// address: 0x200e13b0
// body: available
// range: 0x200e13b0-0x200e1510 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e13b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f8fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200ce840(param_1,0x18);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x23) = param_1._0_1_;
  FUN_2000a5b0(0);
  in_ECX[0x2a] = 0;
  *(undefined1 *)(in_ECX + 0x29) = param_1._0_1_;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2e] = 0;
  *(undefined1 *)(in_ECX + 0x2d) = param_1._0_1_;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  local_4._0_1_ = 3;
  *in_ECX = &PTR_FUN_20112d80;
  uVar2 = FUN_200c5b50(local_1c);
  local_4._0_1_ = 4;
  FUN_2000a3a0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_2000a5b0(1);
  in_ECX[0xe] = param_1[7];
  iVar1 = param_1[8];
  in_ECX[0x27] = in_ECX[0x13];
  in_ECX[0xf] = iVar1;
  *(undefined1 *)((int)param_1 + 0x8b) = 1;
  FUN_200eafe0(1);
  uVar7 = 0;
  uVar6 = 0;
  puVar5 = &DAT_2015ee44;
  uVar2 = FUN_200eb440(0);
  uVar2 = Cvar_Get(uVar2,puVar5,uVar6,uVar7);
  in_ECX[0x28] = uVar2;
  iVar1 = *param_1;
  iVar3 = FUN_200c64f0();
  iVar1 = *(int *)(iVar1 + 0x48);
  iVar4 = FUN_200e6cb0();
  in_ECX[8] = (iVar1 + iVar3 * -2) - iVar4;
  uVar2 = __ftol();
  in_ECX[10] = uVar2;
  *(undefined1 *)(in_ECX + 0x18) = 1;
  ExceptionList = local_c;
  return;
}

