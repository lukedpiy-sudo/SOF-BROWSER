// rea decompile_all
// name: FUN_50044410
// address: 0x50044410
// body: available
// range: 0x50044410-0x500444f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_50044410(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined2 uVar6;
  
  piVar2 = FUN_500c3690();
  piVar2[1] = *param_1;
  piVar2[2] = param_1[1];
  piVar2[3] = param_1[2];
  piVar2[0x67] = 1;
  piVar2[0x56] = 0;
  piVar2[0x6d] = (int)s_nodedrawer_501426fc;
  FUN_5008c850((int)piVar2);
  iVar3 = 1;
  piVar2[0xad] = 0;
  for (; 1 < param_3; param_3 = param_3 >> 1) {
    iVar3 = iVar3 + 1;
  }
  switch(iVar3) {
  default:
    pcVar4 = s_edit_editpoint_501426b4;
    break;
  case 3:
    pcVar4 = s_edit_editflee_501426ec;
    break;
  case 0x10:
    pcVar4 = s_edit_editfleegood_501426d8;
    break;
  case 0x11:
    pcVar4 = s_edit_editfleebad_501426c4;
  }
  uVar6 = 0;
  piVar5 = piVar2;
  uVar1 = (*DAT_5015c9f8)(pcVar4,piVar2,0,0);
  FUN_50085530(uVar1,(int)piVar5,uVar6);
  if (param_4 != 0) {
    uVar6 = 0;
    piVar5 = piVar2;
    uVar1 = (*DAT_5015c9f8)(s_edit_ignore_501424b0,piVar2,0,0);
    FUN_50085530(uVar1,(int)piVar5,uVar6);
  }
  return piVar2;
}

