// rea decompile_all
// name: FUN_30007620
// address: 0x30007620
// body: available
// range: 0x30007620-0x300077ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30007620(char *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_EBP;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piStack_28;
  undefined1 auStack_24 [4];
  char *pcStack_20;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_3002b778;
  pvStack_c = ExceptionList;
  piVar2 = &DAT_3008ffd8;
  ExceptionList = &pvStack_c;
  do {
    if (*piVar2 == *(int *)(param_1 + 0x50)) {
      *piVar2 = -1;
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x3008ffe0);
  (*DAT_300a4678)(1,param_1 + 0x50);
  auStack_24[0] = (undefined1)iStack_4;
  FUN_300033d0(auStack_24,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_30003420(auStack_24,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar6 = param_1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcStack_20 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcStack_20 = pcStack_20 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcStack_20 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcStack_20 = pcStack_20 + 1;
    }
    FUN_30005310(auStack_24,uVar4);
  }
  pvStack_c = (void *)0x0;
  FUN_300081d0(&DAT_3004c50c,(int *)&stack0xffffffd4,auStack_24);
  iStack_4 = 0;
  FUN_30008600(unaff_EBP,piStack_28,&iStack_4);
  FUN_30007ea0(&DAT_3004c50c,(undefined4 *)&stack0xffffffd0,unaff_EBP,piStack_28);
  pvStack_c = (void *)0xffffffff;
  FUN_300033d0(auStack_24,'\x01');
  if ((*(float *)(param_1 + 0x68) == 0.0) && (*(float *)(param_1 + 0x6c) == 0.0)) {
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    ExceptionList = pvStack_14;
    return;
  }
  piVar2 = DAT_30034e00;
  piVar7 = (int *)*DAT_30034e00;
  if ((int *)*DAT_30034e00 != DAT_30034e00) {
    do {
      if ((char *)piVar7[2] == param_1) {
        piVar8 = (int *)*piVar7;
        *(int *)piVar7[1] = *piVar7;
        *(int *)(*piVar7 + 4) = piVar7[1];
        FUN_3001f8bc((undefined *)piVar7);
        DAT_30034e04 = DAT_30034e04 + -1;
        piVar2 = DAT_30034e00;
      }
      else {
        piVar8 = (int *)*piVar7;
      }
      piVar7 = piVar8;
    } while (piVar8 != piVar2);
  }
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  ExceptionList = pvStack_14;
  return;
}

