// rea decompile_all
// name: FUN_500bfa50
// address: 0x500bfa50
// body: available
// range: 0x500bfa50-0x500bfb38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bfa50(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  int *piVar7;
  
  if (param_1[0xc9] == 0) {
    uVar3 = 0;
    while( true ) {
      uVar3 = FUN_500c26a0(uVar3,0x1c8,(char *)param_1[0x71],(void *)0x0);
      if (uVar3 == 0) break;
      iVar2 = 6;
      bVar6 = true;
      pcVar4 = *(char **)(uVar3 + 0x1b4);
      pcVar5 = s_light_5014acbc;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        param_1[0xc9] = uVar3;
      }
      else {
        piVar7 = param_1 + 1;
        puVar1 = FUN_500c33f0();
        (*DAT_5015ca24)(s__s_at__s_5015058c,param_1[0x6d],puVar1,piVar7);
        iVar2 = uVar3 + 4;
        puVar1 = FUN_500c33f0();
        (*DAT_5015ca24)(s_target__s___s_at__s__is_not_a_li_50150564,param_1[0x71],
                        *(undefined4 *)(uVar3 + 0x1b4),puVar1,iVar2);
      }
    }
    if (param_1[0xc9] == 0) {
      piVar7 = param_1 + 1;
      puVar1 = FUN_500c33f0();
      (*DAT_5015ca24)(s__s_target__s_not_found_at__s_50150544,param_1[0x6d],param_1[0x71],puVar1,
                      piVar7);
      FUN_500c3880(param_1);
      return;
    }
  }
  param_1[0x6f] = DAT_5015ccdc;
  FUN_500bf980((int)param_1);
  return;
}

