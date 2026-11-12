// rea decompile_all
// name: FUN_5005f840
// address: 0x5005f840
// body: available
// range: 0x5005f840-0x5005f9e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5005f840(void *this,undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  FILE *pFVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  CHAR aCStack_2c0 [64];
  undefined1 auStack_280 [128];
  char acStack_200 [512];
  
  if (((param_1 != (undefined1 *)0x0) || (DAT_50159a8c != 1)) ||
     (*(float *)(DAT_5015c978 + 0x18) != 0.0)) {
    FUN_5005fe60(this);
    uVar2 = (*DAT_5015cb6c)();
    pcVar9 = s__s_bot_wpfiles__50143208;
    puVar3 = auStack_280;
    uVar8 = 0x80;
    FUN_500fe2b0();
    (*DAT_5015cb70)(auStack_280,puVar3,uVar8,pcVar9,uVar2);
    puVar3 = param_1;
    if (param_1 == (undefined1 *)0x0) {
      puVar3 = FUN_500570e0();
    }
    (*DAT_5015cb6c)(puVar3);
    FUN_500fe2b0();
    pFVar4 = (FILE *)FUN_50107c80(aCStack_2c0,&DAT_501431ec);
    if (pFVar4 == (FILE *)0x0) {
      (*DAT_5015cab0)(0,0xc08,aCStack_2c0);
      return;
    }
    pcVar9 = acStack_200;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    FUN_500fe2b0();
    uVar6 = 0xffffffff;
    pcVar9 = acStack_200;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_5010784a(acStack_200,~uVar6 - 1,1,(int *)pFVar4);
    FUN_50060f10(this,(int *)pFVar4);
    if (*(int *)((int)this + 0x18) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
    }
    iVar7 = 1;
    if (1 < iVar5) {
      do {
        FUN_5005f9f0(this,(int *)pFVar4,iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    FUN_50107c0a(pFVar4);
    pcVar9 = s_backup_file_501431d0;
    if (param_1 == (undefined1 *)0x0) {
      pcVar9 = aCStack_2c0;
    }
    (*DAT_5015cab0)(0,0xc09,pcVar9);
    if (param_1 == (undefined1 *)0x0) {
      DAT_50159a8c = 1;
    }
    FUN_5005c5d0();
  }
  return;
}

