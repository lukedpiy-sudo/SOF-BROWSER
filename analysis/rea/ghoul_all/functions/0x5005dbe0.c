// rea decompile_all
// name: FUN_5005dbe0
// address: 0x5005dbe0
// body: available
// range: 0x5005dbe0-0x5005dce9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5005dbe0(void *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  int local_248;
  char *local_244;
  undefined1 local_240 [64];
  char acStack_200 [512];
  
  cVar4 = '\0';
  local_248 = 0;
  if (*(float *)(DAT_5015c978 + 0x18) == 0.0) {
    *(undefined4 *)((int)param_1 + 0x2c) = 1;
  }
  puVar2 = FUN_500570e0();
  pcVar8 = s_bot_wpfiles__s_wrs_50143190;
  puVar6 = local_240;
  uVar7 = 0x40;
  FUN_500fe2b0();
  iVar3 = (*DAT_5015cb64)(local_240,&local_244,0,puVar6,uVar7,pcVar8,puVar2);
  FUN_5005fbd0(param_1,local_240,local_244,&local_248,iVar3);
  FUN_500611d0(param_1,(int)local_244,&local_248,iVar3);
  pcVar8 = local_244;
  while ((local_248 < iVar3 && (iVar5 = 0, cVar4 != '$'))) {
    cVar4 = pcVar8[local_248];
    local_248 = local_248 + 1;
    if (cVar4 != '$') {
      while (((local_248 < iVar3 && (cVar4 != '\n')) && (cVar4 != '$'))) {
        acStack_200[iVar5] = cVar4;
        pcVar1 = pcVar8 + local_248;
        iVar5 = iVar5 + 1;
        local_248 = local_248 + 1;
        cVar4 = *pcVar1;
      }
      acStack_200[iVar5] = '\0';
      FUN_5005d890(param_1,acStack_200,0x200);
      pcVar8 = local_244;
    }
  }
  (*DAT_5015cb68)(pcVar8);
  FUN_50060d30(param_1);
  FUN_50060320(param_1);
  return;
}

