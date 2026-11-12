// rea decompile_all
// name: FUN_50048930
// address: 0x50048930
// body: available
// range: 0x50048930-0x50048bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50048930(int param_1)

{
  FILE *pFVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_8c;
  int local_88;
  int *local_84;
  CHAR local_80 [128];
  
  FUN_500fe2b0();
  pFVar1 = (FILE *)FUN_50107c80(local_80,&DAT_5014298c);
  iVar4 = 0;
  if (pFVar1 == (FILE *)0x0) {
    FUN_500adb20((byte *)s_ERROR__couldn_t_open__s__50142970);
    return;
  }
  DAT_5015916c = 0xb;
  FUN_5010784a((char *)&DAT_5015916c,4,1,(int *)pFVar1);
  if (*(int *)(param_1 + 4) == 0) {
    local_88 = 0;
  }
  else {
    local_88 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x88;
  }
  FUN_5010784a((char *)&local_88,4,1,(int *)pFVar1);
  if (0 < local_88) {
    local_8c = 0;
    do {
      iVar5 = *(int *)(param_1 + 4) + local_8c;
      local_84 = (int *)0x0;
      FUN_5010784a((char *)(iVar5 + 0x18),0xc,1,(int *)pFVar1);
      FUN_5010784a((char *)(iVar5 + 0x34),4,1,(int *)pFVar1);
      FUN_5010784a((char *)(iVar5 + 0x38),4,1,(int *)pFVar1);
      FUN_5010784a((char *)&local_84,4,1,(int *)pFVar1);
      FUN_5010784a((char *)(iVar5 + 0x54),4,1,(int *)pFVar1);
      iVar4 = iVar4 + 1;
      local_8c = local_8c + 0x88;
    } while (iVar4 < local_88);
  }
  iVar4 = 0;
  FUN_500adb20((byte *)s_Adding__d_nodes_501429a4);
  if (*(int *)(param_1 + 0x186a18) == 0) {
    local_88 = 0;
  }
  else {
    local_88 = (*(int *)(param_1 + 0x186a1c) - *(int *)(param_1 + 0x186a18)) / 0x88;
  }
  FUN_5010784a((char *)&local_88,4,1,(int *)pFVar1);
  if (0 < local_88) {
    local_8c = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x186a18) + local_8c;
      local_84 = (int *)0x0;
      FUN_5010784a((char *)(iVar5 + 0x18),0xc,1,(int *)pFVar1);
      FUN_5010784a((char *)(iVar5 + 0x34),4,1,(int *)pFVar1);
      FUN_5010784a((char *)(iVar5 + 0x38),4,1,(int *)pFVar1);
      FUN_5010784a((char *)&local_84,4,1,(int *)pFVar1);
      FUN_5010784a((char *)(iVar5 + 0x54),4,1,(int *)pFVar1);
      iVar4 = iVar4 + 1;
      local_8c = local_8c + 0x88;
    } while (iVar4 < local_88);
  }
  piVar2 = (int *)(param_1 + 0x10);
  local_84 = piVar2;
  FUN_5010784a((char *)piVar2,4,1,(int *)pFVar1);
  local_8c = 0;
  if (0 < *piVar2) {
    pcVar3 = (char *)(param_1 + 0x14);
    do {
      iVar4 = 3;
      pcVar6 = pcVar3;
      do {
        FUN_5010784a(pcVar6,4,1,(int *)pFVar1);
        pcVar6 = pcVar6 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_5010784a(pcVar3 + 0x1a,1,1,(int *)pFVar1);
      local_8c = local_8c + 1;
      pcVar3 = pcVar3 + 100;
    } while (local_8c < *local_84);
  }
  FUN_50107c0a(pFVar1);
  return;
}

