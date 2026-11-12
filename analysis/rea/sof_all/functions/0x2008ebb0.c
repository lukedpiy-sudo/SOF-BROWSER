// rea decompile_all
// name: FUN_2008ebb0
// address: 0x2008ebb0
// body: available
// range: 0x2008ebb0-0x2008ec65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2008ebb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *unaff_EBX;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_retaddr;
  int local_28 [3];
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c6a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200bdaf0(param_5 + -8);
  uVar4 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_20069630(0,0);
  cVar1 = (**(code **)(*piVar2 + 0x48))(param_1,param_2,local_28,param_3);
  if (cVar1 != '\0') {
    if (unaff_EBX != (undefined4 *)0x0) {
      uVar4 = local_28[0] - (int)unaff_EBX;
    }
    if (param_5 < (int)uVar4) {
      Sys_Error(s_Ghoul___s_20157158,s_Ghoul_unreliable_overflow_20157180);
    }
    puVar5 = unaff_EBX;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *unaff_retaddr = *puVar5;
      puVar5 = puVar5 + 1;
      unaff_retaddr = unaff_retaddr + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)unaff_retaddr = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      unaff_retaddr = (undefined4 *)((int)unaff_retaddr + 1);
    }
  }
  FUN_200f9f75(unaff_EBX);
  ExceptionList = pvStack_1c;
  return uVar4;
}

