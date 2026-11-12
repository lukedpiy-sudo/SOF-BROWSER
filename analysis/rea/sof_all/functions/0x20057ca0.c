// rea decompile_all
// name: FUN_20057ca0
// address: 0x20057ca0
// body: available
// range: 0x20057ca0-0x20057f1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_20057ca0(undefined4 param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  int iVar3;
  undefined1 local_b1;
  int *local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  int local_a4;
  int local_a0 [5];
  undefined1 local_8c [116];
  void *pvStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b5ad;
  local_c = ExceptionList;
  local_a0[0] = 0xff;
  ExceptionList = &local_c;
  Com_sprintf(local_8c,0x80,s_strip__s_spe_20138c4c);
  local_a4 = FS_LoadFile(local_8c,&local_ac,0);
  if (local_a4 == -1) {
    Com_sprintf(local_8c,0x80,s_strip__s_sp_2011f34c);
    local_a4 = FS_LoadFile(local_8c,&local_ac,0);
    if (local_a4 == -1) {
      Com_Error(1,s_Could_not_open_string_package____2011f2cc);
      ExceptionList = local_c;
      return (int *)0x0;
    }
  }
  piVar2 = operator_new(0x1030);
  local_4 = 0;
  local_b0 = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_20057020(param_1,0,0,0);
    local_4._0_1_ = 1;
    FUN_200fb5cd(piVar2 + 7,0x10,0x100,&LAB_20057540,FUN_20056890);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_20083e20((int)&uStack_a8 + 3,0,&local_b1);
    *piVar2 = (int)&PTR_FUN_20111ee8;
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 8))(local_ac,&local_a4,local_a0);
  FS_FreeFile(unaff_EDI);
  if ((local_4 & 1) == 0) {
    uVar1 = (undefined1)piVar2[1];
  }
  else {
    uVar1 = (undefined1)piVar2[1];
  }
  iVar3 = CONCAT31((int3)((uint)unaff_EBP >> 8),uVar1);
  Com_DPrintf(&DAT_20138c08,param_1,uVar1);
  FUN_20058d50(&stack0xffffff44,&stack0xffffff43);
  if (iVar3 == DAT_20390db4) {
    uStack_a8 = (int *)CONCAT31(uStack_a8._1_3_,(char)piVar2[1]);
    local_a4 = 0;
    FUN_20058e50(local_a0,&uStack_a8);
    *(int **)(local_a0[0] + 0x10) = piVar2;
  }
  else {
    *piVar2 = (int)&PTR_FUN_20111ee8;
    uStack_10 = 5;
    uStack_a8 = piVar2;
    FUN_20058cb0();
    uStack_10._0_1_ = 4;
    FUN_20058ae0();
    uStack_10 = CONCAT31(uStack_10._1_3_,3);
    FUN_200fb4ef(piVar2 + 7,0x10,0x100,FUN_20056890);
    FUN_20057150();
    FUN_200f9f75(piVar2);
    piVar2 = *(int **)(iVar3 + 0x10);
  }
  *(byte *)((int)piVar2 + 5) = *(byte *)((int)piVar2 + 5) | (byte)local_4;
  ExceptionList = pvStack_18;
  return piVar2;
}

