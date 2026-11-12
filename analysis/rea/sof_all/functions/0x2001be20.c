// rea decompile_all
// name: FUN_2001be20
// address: 0x2001be20
// body: available
// range: 0x2001be20-0x2001bf27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_2001be20(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  if (param_1 == -1) {
    uVar2 = DAT_201204ac + 7 >> 3;
    uVar1 = 0;
LAB_2001bf0c:
    puVar8 = (undefined4 *)&DAT_20246d68;
  }
  else {
    if (DAT_20248d68 != 0) {
      pcVar4 = &DAT_20246d68;
      pcVar5 = (char *)(*(int *)(DAT_20248d80 + 8 + param_1 * 8) + DAT_20248d68);
      uVar2 = DAT_201204ac + 7 >> 3;
      if ((pcVar5 != (char *)0x0) && (DAT_20246ce8 != 0)) {
        do {
          if (*pcVar5 == '\0') {
            puVar6 = (undefined1 *)(uint)(byte)pcVar5[1];
            pcVar5 = pcVar5 + 2;
            if ((int)uVar2 < (int)(pcVar4 + (int)(puVar6 + -0x20246d68))) {
              puVar6 = &DAT_20246d68 + (uVar2 - (int)pcVar4);
              Com_DPrintf(s_warning__Vis_decompression_overr_201205d0);
            }
            if (puVar6 != (undefined1 *)0x0) {
              pcVar7 = pcVar4;
              for (uVar3 = (uint)puVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                pcVar7[0] = '\0';
                pcVar7[1] = '\0';
                pcVar7[2] = '\0';
                pcVar7[3] = '\0';
                pcVar7 = pcVar7 + 4;
              }
              pcVar4 = pcVar4 + (int)puVar6;
              for (uVar3 = (uint)puVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar7 = '\0';
                pcVar7 = pcVar7 + 1;
              }
            }
          }
          else {
            *pcVar4 = *pcVar5;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
          }
        } while ((int)(pcVar4 + -0x20246d68) < (int)uVar2);
        return &DAT_20246d68;
      }
      if (uVar2 == 0) goto LAB_2001bf1f;
      uVar1 = 0xffffffff;
      goto LAB_2001bf0c;
    }
    uVar2 = DAT_201204ac + 7 >> 3;
    if (uVar2 == 0) goto LAB_2001bf1f;
    uVar1 = 0xffffffff;
    puVar8 = &DAT_20244cd8;
  }
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = uVar1;
    puVar8 = puVar8 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar8 = (char)uVar1;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
LAB_2001bf1f:
  return &DAT_20246d68;
}

