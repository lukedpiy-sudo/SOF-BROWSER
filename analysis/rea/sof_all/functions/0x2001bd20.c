// rea decompile_all
// name: FUN_2001bd20
// address: 0x2001bd20
// body: available
// range: 0x2001bd20-0x2001be19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_2001bd20(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  if (param_1 == -1) {
    uVar2 = DAT_201204ac + 7 >> 3;
    uVar1 = 0;
  }
  else {
    if (DAT_20248d68 == 0) {
      uVar2 = DAT_201204ac + 7 >> 3;
    }
    else {
      pcVar5 = (char *)&DAT_20244cd8;
      pcVar6 = (char *)(*(int *)(DAT_20248d80 + 4 + param_1 * 8) + DAT_20248d68);
      uVar2 = DAT_201204ac + 7 >> 3;
      if ((pcVar6 != (char *)0x0) && (DAT_20246ce8 != 0)) {
        do {
          if (*pcVar6 == '\0') {
            uVar4 = (uint)(byte)pcVar6[1];
            pcVar6 = pcVar6 + 2;
            if ((int)uVar2 < (int)(pcVar5 + uVar4 + 0xdfdbb328)) {
              uVar4 = (int)&DAT_20244cd8 + (uVar2 - (int)pcVar5);
              Com_DPrintf(s_warning__Vis_decompression_overr_201205d0);
            }
            if (uVar4 != 0) {
              pcVar7 = pcVar5;
              for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                pcVar7[0] = '\0';
                pcVar7[1] = '\0';
                pcVar7[2] = '\0';
                pcVar7[3] = '\0';
                pcVar7 = pcVar7 + 4;
              }
              pcVar5 = pcVar5 + uVar4;
              for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *pcVar7 = '\0';
                pcVar7 = pcVar7 + 1;
              }
            }
          }
          else {
            *pcVar5 = *pcVar6;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
        } while ((int)(pcVar5 + -0x20244cd8) < (int)uVar2);
        return &DAT_20244cd8;
      }
    }
    if (uVar2 == 0) goto LAB_2001be11;
    uVar1 = 0xffffffff;
  }
  puVar8 = &DAT_20244cd8;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = uVar1;
    puVar8 = puVar8 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar8 = (char)uVar1;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
LAB_2001be11:
  return &DAT_20244cd8;
}

