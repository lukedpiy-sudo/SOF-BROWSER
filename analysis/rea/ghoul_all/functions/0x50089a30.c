// rea decompile_all
// name: FUN_50089a30
// address: 0x50089a30
// body: available
// range: 0x50089a30-0x50089b46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50089a30(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (DAT_5015d928 == 0) {
    (*DAT_5015ca28)(param_1,2,s_Cheats_not_available__50146ac0);
    return;
  }
  uVar1 = (*DAT_5015ca18)(1);
  (*DAT_5015ca28)(param_1,2,s_Spawning____s_50146b30,uVar1);
  piVar2 = FUN_500c3690();
  pcVar3 = (char *)(*DAT_5015ca18)(1);
  iVar4 = FUN_500bd6d0(pcVar3);
  piVar2[0x6d] = iVar4;
  FUN_500fdd70((float *)(param_1 + 0x10),&fStack_18,(float *)0x0,&fStack_c);
  fStack_18 = fStack_18 * 100.0;
  fStack_14 = fStack_14 * 100.0;
  fStack_10 = fStack_10 * 100.0;
  fStack_c = fStack_c * 50.0;
  fStack_8 = fStack_8 * 50.0;
  fStack_4 = fStack_4 * 50.0;
  piVar2[1] = (int)(fStack_18 + *(float *)(param_1 + 4));
  piVar2[2] = (int)(fStack_14 + *(float *)(param_1 + 8));
  piVar2[3] = (int)(fStack_10 + *(float *)(param_1 + 0xc));
  piVar2[1] = (int)(fStack_c + (float)piVar2[1]);
  piVar2[2] = (int)(fStack_8 + (float)piVar2[2]);
  piVar2[3] = (int)(fStack_4 + (float)piVar2[3]);
  piVar2[5] = *(int *)(param_1 + 0x14);
  FUN_500bd570(piVar2);
  return;
}

