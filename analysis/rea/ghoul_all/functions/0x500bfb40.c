// rea decompile_all
// name: FUN_500bfb40
// address: 0x500bfb40
// body: available
// range: 0x500bfb40-0x500bfc7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bfb40(int *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  float fVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar3 = (char *)param_1[0x6b];
  if (pcVar3 != (char *)0x0) {
    iVar6 = -1;
    pcVar7 = pcVar3;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((((iVar6 == -4) && (cVar1 = *pcVar3, '`' < cVar1)) && (cVar1 < '{')) &&
       (((cVar2 = pcVar3[1], '`' < cVar2 && (cVar2 < '{')) && (cVar1 != cVar2)))) {
      iVar6 = (**(code **)(*DAT_5015c4d8 + 4))();
      if (iVar6 != 0) {
        FUN_500c3880(param_1);
        return;
      }
      if (param_1[0x71] == 0) {
        piVar8 = param_1 + 1;
        puVar5 = FUN_500c33f0();
        (*DAT_5015ca24)(s__s_with_no_target_at__s_5014ceec,param_1[0x6d],puVar5,piVar8);
        FUN_500c3880(param_1);
        return;
      }
      param_1[0xb1] = (int)FUN_500bfa50;
      param_1[0x46] = param_1[0x46] | 1;
      param_1[0xae] = (int)FUN_500bf980;
      param_1[0x8a] = (int)(float)(*(char *)param_1[0x6b] + -0x61);
      fVar4 = (float)(((char *)param_1[0x6b])[1] + -0x61);
      param_1[0x8b] = (int)fVar4;
      param_1[0x8c] = (int)((fVar4 - (float)param_1[0x8a]) / ((float)param_1[0x87] * 10.0));
      return;
    }
  }
  piVar8 = param_1 + 1;
  puVar5 = FUN_500c33f0();
  (*DAT_5015ca24)(s_target_lightramp_has_bad_ramp____50150598,param_1[0x6b],puVar5,piVar8);
  FUN_500c3880(param_1);
  return;
}

