// rea decompile_all
// name: FUN_500ee0c0
// address: 0x500ee0c0
// body: available
// range: 0x500ee0c0-0x500ee282 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ee0c0(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  
  iVar4 = 0;
  param_1[0x19c] = '\0';
  param_1[0x19d] = '\0';
  param_1[0x19e] = '\0';
  param_1[0x19f] = '\0';
  param_1[0x158] = '\0';
  param_1[0x159] = '\0';
  param_1[0x15a] = '\0';
  param_1[0x15b] = '\0';
  param_1[0x15c] = '\x03';
  param_1[0x15d] = '\0';
  param_1[0x15e] = '\x03';
  param_1[0x15f] = '\x02';
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = -0x60;
  param_1[0x11f] = -0x40;
  param_1[0x120] = '\0';
  param_1[0x121] = '\0';
  param_1[0x122] = -0x60;
  param_1[0x123] = -0x40;
  param_1[0x124] = '\0';
  param_1[0x125] = '\0';
  param_1[0x126] = -0x20;
  param_1[0x127] = -0x40;
  param_1[0x128] = '\0';
  param_1[0x129] = '\0';
  param_1[0x12a] = -0x60;
  param_1[299] = '@';
  param_1[300] = '\0';
  param_1[0x12d] = '\0';
  param_1[0x12e] = -0x60;
  param_1[0x12f] = '@';
  param_1[0x130] = '\0';
  param_1[0x131] = '\0';
  param_1[0x132] = '@';
  param_1[0x133] = 'A';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  FUN_500b2c20((int)param_1);
  (*DAT_5015cb28)(param_1);
  *(code **)(param_1 + 0x2b8) = FUN_500ee060;
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_500ed810;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 1.0;
  if (*(float *)(param_1 + 0x364) == 0.0) {
    uVar1 = 0x41f00000;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x364);
  }
  *(undefined4 *)(param_1 + 0x364) = uVar1;
  if (*(float *)(param_1 + 0x360) == 0.0) {
    uVar1 = 0x41200000;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x360);
  }
  iVar2 = *(int *)(param_1 + 0x318);
  *(undefined4 *)(param_1 + 0x360) = uVar1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x318) = iVar2;
  iVar2 = *(int *)(param_1 + 0x27c);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x27c) = iVar2;
  iVar2 = *(int *)(param_1 + 0x2ec);
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  *(int *)(param_1 + 0x2f0) = iVar2;
  iVar2 = DAT_5015cbcc;
  if (DAT_5015cbcc == 0) {
    iVar2 = 0x1c2;
  }
  *(int *)(param_1 + 0x2f4) = iVar2;
  lVar6 = __ftol();
  *(int *)(param_1 + 0x2ec) = (int)lVar6;
  *(char **)(param_1 + 0x1b4) = s_spawner_5014269c;
  pcVar5 = param_1;
  if ((param_1[0x1b8] & 1U) != 0) {
    param_1[0x2b4] = '\0';
    param_1[0x2b5] = '\0';
    param_1[0x2b6] = '\0';
    param_1[0x2b7] = '\0';
  }
  do {
    piVar3 = FUN_500c3690();
    if (iVar4 == 0) {
      pcVar5 = *(char **)(param_1 + 0x1ec);
    }
    else if (iVar4 == 1) {
      pcVar5 = *(char **)(param_1 + 0x1f0);
    }
    else if (iVar4 == 2) {
      pcVar5 = *(char **)(param_1 + 500);
    }
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      piVar3[0x6d] = (int)pcVar5;
      piVar3[1] = *(int *)(param_1 + 4);
      piVar3[2] = *(int *)(param_1 + 8);
      piVar3[3] = *(int *)(param_1 + 0xc);
      FUN_500bd570(piVar3);
      FUN_500c3880(piVar3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}

