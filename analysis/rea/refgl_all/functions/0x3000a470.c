// rea decompile_all
// name: FUN_3000a470
// address: 0x3000a470
// body: available
// range: 0x3000a470-0x3000a516 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __cdecl FUN_3000a470(int param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  if ((param_1 != -1) && (piVar2 = *(int **)(param_2 + 0xdc), piVar2 != (int *)0x0)) {
    pcVar6 = (char *)(piVar2[param_1 * 2 + 1] + (int)piVar2);
    uVar3 = *piVar2 + 7 >> 3;
    pcVar7 = &DAT_3008db88;
    if (pcVar6 == (char *)0x0) {
      if (uVar3 != 0) {
        puVar8 = (undefined4 *)&DAT_3008db88;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar8 = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        return &DAT_3008db88;
      }
    }
    else {
      do {
        if (*pcVar6 == '\0') {
          pbVar1 = (byte *)(pcVar6 + 1);
          uVar4 = (uint)*pbVar1;
          pcVar6 = pcVar6 + 2;
          if (uVar4 != 0) {
            pcVar9 = pcVar7;
            for (uVar5 = (uint)(*pbVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
              pcVar9[0] = '\0';
              pcVar9[1] = '\0';
              pcVar9[2] = '\0';
              pcVar9[3] = '\0';
              pcVar9 = pcVar9 + 4;
            }
            pcVar7 = pcVar7 + uVar4;
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar9 = '\0';
              pcVar9 = pcVar9 + 1;
            }
          }
        }
        else {
          *pcVar7 = *pcVar6;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        }
      } while ((int)(pcVar7 + -0x3008db88) < (int)uVar3);
    }
    return &DAT_3008db88;
  }
  return &DAT_3008bb74;
}

