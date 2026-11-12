// rea decompile_all
// name: FUN_5005fbd0
// address: 0x5005fbd0
// body: available
// range: 0x5005fbd0-0x5005fd20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x5005fcc1) */

uint __thiscall FUN_5005fbd0(void *this,undefined4 param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char local_200 [512];
  
  iVar4 = 0;
  if (*param_2 != s_Version_501431e4[0]) {
    *(undefined4 *)((int)this + 0x38) = 0;
    uVar2 = (*DAT_5015cab0)(0,0xc00,param_1,0,5);
    return uVar2 & 0xffffff00;
  }
  pcVar5 = local_200;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  iVar3 = *param_3;
  while (iVar3 < param_4) {
    iVar3 = *param_3;
    if (param_2[iVar3] == '\r') break;
    local_200[iVar4] = param_2[iVar3];
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 1;
    *param_3 = iVar3;
  }
  *param_3 = *param_3 + 2;
  uVar2 = 0xffffffff;
  local_200[iVar4] = '\0';
  pcVar5 = s_Version_501431e4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar4 = _strncmp(local_200,s_Version_501431e4,~uVar2 - 1);
  if (iVar4 != 0) {
    uVar2 = (*DAT_5015cab0)(0,0xc01,param_1);
    return uVar2 & 0xffffff00;
  }
  uVar2 = 0xffffffff;
  pcVar5 = s_Version_501431e4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_50108004(param_2 + (~uVar2 - 1),&DAT_501430a0);
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  uVar2 = (*DAT_5015cab0)(0,0xc00,param_1,0xffffffff,5);
  return uVar2 & 0xffffff00;
}

