// rea decompile_all
// name: FUN_2008eac0
// address: 0x2008eac0
// body: available
// range: 0x2008eac0-0x2008eb85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_2008eac0(undefined4 param_1,uint *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_retaddr;
  undefined4 *local_28;
  int iStack_24;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c688;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200bdaf0(param_4 + -8);
  local_4 = 0;
  piVar2 = (int *)FUN_20069630(0,0);
  cVar1 = (**(code **)(*piVar2 + 0x40))(param_1,param_2,&local_28);
  if (local_28 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = iStack_24 - (int)local_28;
  }
  *param_2 = uVar3;
  if (param_4 < (int)uVar3) {
    Sys_Error(s_Ghoul___s_20157158,s_Ghoul_reliable_overflow_20157164);
  }
  uVar3 = *param_2;
  puVar5 = local_28;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *unaff_retaddr = *puVar5;
    puVar5 = puVar5 + 1;
    unaff_retaddr = unaff_retaddr + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)unaff_retaddr = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    unaff_retaddr = (undefined4 *)((int)unaff_retaddr + 1);
  }
  FUN_200f9f75(local_28);
  ExceptionList = pvStack_18;
  return cVar1 != '\0';
}

