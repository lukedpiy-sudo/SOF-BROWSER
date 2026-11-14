// rea decompile_all
// name: FUN_300162f0
// address: 0x300162f0
// body: available
// range: 0x300162f0-0x3001638e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_300162f0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  piVar2 = param_1;
  iVar6 = 0x80;
  uVar3 = 0x80 - (int)param_1;
  iVar7 = 0;
  if (0 < (int)uVar3) {
    param_1 = &DAT_3009042c;
    do {
      iVar5 = 0;
      piVar4 = (int *)0x0;
      piVar8 = param_1;
      if (0 < (int)piVar2) {
        do {
          iVar1 = *piVar8;
          if (iVar6 <= iVar1) break;
          if (iVar5 < iVar1) {
            iVar5 = iVar1;
          }
          piVar4 = (int *)((int)piVar4 + 1);
          piVar8 = piVar8 + 1;
        } while ((int)piVar4 < (int)piVar2);
      }
      if (piVar4 == piVar2) {
        *param_3 = iVar7;
        *param_4 = iVar5;
        iVar6 = iVar5;
      }
      iVar7 = iVar7 + 1;
      param_1 = param_1 + 1;
    } while (iVar7 < (int)uVar3);
  }
  if (iVar6 + param_2 < 0x81) {
    iVar7 = 0;
    if (0 < (int)piVar2) {
      do {
        iVar5 = *param_3 + iVar7;
        iVar7 = iVar7 + 1;
        (&DAT_3009042c)[iVar5] = iVar6 + param_2;
      } while (iVar7 < (int)piVar2);
    }
    return CONCAT31((int3)((uint)iVar7 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}

