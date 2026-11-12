// rea decompile_all
// name: FUN_50057170
// address: 0x50057170
// body: available
// range: 0x50057170-0x5005725d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50057170(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 auStack_40 [64];
  
  iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar1 != 0) {
    DAT_50159a8c = 0;
    iVar1 = *(int *)(DAT_5015ccbc + 4);
    lVar5 = __ftol();
    FUN_50057aa0(&DAT_50159680,(undefined4 *)lVar5,iVar1);
    if (*(float *)(DAT_5015c8c4 + 0x18) != 0.0) {
      (*DAT_5015cb78)(s_exec_hidebot_cfg_50142f94);
    }
    puVar3 = auStack_40;
    puVar2 = FUN_500570e0();
    pcVar7 = s_bot_mapcfgs__s_cfg_50142f80;
    uVar6 = 0x40;
    FUN_500fe2b0();
    iVar1 = (*DAT_5015cb64)(auStack_40,0,0,puVar3,uVar6,pcVar7,puVar2);
    puVar2 = auStack_40;
    if (iVar1 == -1) {
      (*DAT_5015cb78)(s_exec_bot_mapcfgs_default_cfg_50142f60);
    }
    else {
      puVar3 = FUN_500570e0();
      pcVar7 = s_exec_bot_mapcfgs__s_cfg_50142f44;
      uVar6 = 0x40;
      FUN_500fe2b0();
      (*DAT_5015cb78)(auStack_40,puVar2,uVar6,pcVar7,puVar3);
    }
    piVar4 = FUN_500c3690();
    piVar4[0xae] = (int)&LAB_50057150;
    piVar4[0xad] = (int)(DAT_5015ccdc + 10.0);
  }
  return;
}

