// rea decompile_all
// name: FUN_50087190
// address: 0x50087190
// body: available
// range: 0x50087190-0x500872d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50087190(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [4];
  float fStack_34;
  
  iVar3 = 0x16;
  bVar6 = true;
  local_5c = 0.0;
  local_58 = 0.0;
  local_54 = 0.0;
  pcVar4 = *(char **)(param_1 + 0x1b4);
  pcVar5 = s_misc_castle_chair_big_50146a20;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  FUN_500fdd70((float *)(param_1 + 0x10),&local_44,&local_50,(float *)0x0);
  pfVar1 = (float *)(param_1 + 4);
  local_5c = local_50 * 30.0 + *pfVar1;
  local_58 = local_4c * 30.0 + *(float *)(param_1 + 8);
  local_54 = local_48 * 30.0 + *(float *)(param_1 + 0xc);
  (*DAT_5015cac0)(pfVar1,0,0,&local_5c,param_1,*(undefined4 *)(param_1 + 0x15c),local_38);
  if (fStack_34 < 1.0) {
    fStack_34 = fStack_34 * -30.0;
    *pfVar1 = local_44 * fStack_34 + *pfVar1;
    *(float *)(param_1 + 8) = fStack_40 * fStack_34 + *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = fStack_3c * fStack_34 + *(float *)(param_1 + 0xc);
  }
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 40.0;
  if (bVar6) {
    uVar2 = 0xc10b3333;
  }
  else {
    uVar2 = 0xc0c00000;
  }
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  *(undefined4 *)(param_1 + 0x11c) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1100000;
  *(undefined4 *)(param_1 + 0x128) = 0x41200000;
  *(undefined4 *)(param_1 + 300) = 0x41100000;
  *(undefined4 *)(param_1 + 0x130) = 0x41900000;
  (*DAT_5015cb28)(param_1);
  return;
}

