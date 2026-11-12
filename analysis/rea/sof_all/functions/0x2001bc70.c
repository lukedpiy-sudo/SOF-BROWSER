// rea decompile_all
// name: FUN_2001bc70
// address: 0x2001bc70
// body: available
// range: 0x2001bc70-0x2001bd1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001bc70(char *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = DAT_201204ac + 7 >> 3;
  if ((param_1 != (char *)0x0) && (pcVar2 = param_2, DAT_20246ce8 != 0)) {
    do {
      if (*param_1 == '\0') {
        pcVar4 = (char *)(uint)(byte)param_1[1];
        param_1 = param_1 + 2;
        if ((int)uVar3 < (int)(pcVar2 + ((int)pcVar4 - (int)param_2))) {
          pcVar4 = param_2 + (uVar3 - (int)pcVar2);
          Com_DPrintf(s_warning__Vis_decompression_overr_201205d0);
        }
        if (pcVar4 != (char *)0x0) {
          pcVar5 = pcVar2;
          for (uVar1 = (uint)pcVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 4;
          }
          pcVar2 = pcVar2 + (int)pcVar4;
          for (uVar1 = (uint)pcVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *pcVar5 = '\0';
            pcVar5 = pcVar5 + 1;
          }
        }
      }
      else {
        *pcVar2 = *param_1;
        pcVar2 = pcVar2 + 1;
        param_1 = param_1 + 1;
      }
    } while ((int)pcVar2 - (int)param_2 < (int)uVar3);
    return;
  }
  if (uVar3 != 0) {
    for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      param_2[0] = -1;
      param_2[1] = -1;
      param_2[2] = -1;
      param_2[3] = -1;
      param_2 = param_2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = -1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

