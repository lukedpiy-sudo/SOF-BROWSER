// rea decompile_all
// name: FUN_500b41d0
// address: 0x500b41d0
// body: available
// range: 0x500b41d0-0x500b4249 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500b41d0(int *param_1,undefined4 param_2,int param_3)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (int *)0x0) {
LAB_500b4244:
    return in_EAX & 0xffff0000;
  }
  uVar1 = (**(code **)(*param_1 + 0x88))();
  iVar2 = FUN_500a5e10(&DAT_5015c79c,uVar1);
  in_EAX = FUN_500a5da0(iVar2,param_2);
  if ((short)in_EAX == 0) goto LAB_500b4244;
  if (param_3 == 0) {
    uVar3 = 1;
  }
  else if (param_3 == 1) {
    uVar3 = 0;
  }
  else {
    if (param_3 != 2) goto LAB_500b423e;
    uVar3 = 3;
  }
  param_3 = (**(code **)(*param_1 + 0x44))(in_EAX,DAT_5015ccdc,0,1,uVar3,0,0);
LAB_500b423e:
  return CONCAT22((short)((uint)param_3 >> 0x10),(short)in_EAX);
}

