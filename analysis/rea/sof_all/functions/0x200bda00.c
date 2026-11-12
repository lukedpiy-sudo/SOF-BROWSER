// rea decompile_all
// name: FUN_200bda00
// address: 0x200bda00
// body: available
// range: 0x200bda00-0x200bdaec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bda00(char *param_1,char *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  int local_4;
  
  iVar3 = 0;
  iVar6 = 0;
  local_4 = 0;
  if (0 < (int)param_3) {
    do {
      iVar3 = 0;
      uVar1 = (uint)(byte)param_1[iVar6];
      uVar4 = *(uint *)(&DAT_204059c8 + uVar1 * 8);
      if (0 < (int)(&DAT_204059cc)[uVar1 * 2]) {
        do {
          uVar1 = ((&DAT_204059cc)[uVar1 * 2] - iVar3) + -1 + local_4;
          uVar2 = uVar1 >> 3;
          bVar5 = '\x01' << ((byte)uVar1 & 7);
          if ((uVar4 & 1) == 0) {
            bVar5 = param_2[uVar2 + 1] & ~bVar5;
          }
          else {
            bVar5 = param_2[uVar2 + 1] | bVar5;
          }
          param_2[uVar2 + 1] = bVar5;
          uVar1 = (uint)(byte)param_1[iVar6];
          uVar4 = uVar4 >> 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(&DAT_204059cc)[uVar1 * 2]);
      }
      iVar3 = local_4 + (&DAT_204059cc)[(uint)(byte)param_1[iVar6] * 2];
      iVar6 = iVar6 + 1;
      local_4 = iVar3;
    } while (iVar6 < (int)param_3);
  }
  iVar6 = ((int)((iVar3 + 7 >> 0x1f & 7U) + iVar3 + 7) >> 3) + 1;
  *param_4 = iVar6;
  *param_2 = ((char)iVar6 + -1) * '\b' - (char)iVar3;
  if ((int)(param_3 + 1) <= *param_4) {
    *param_2 = -1;
    pcVar7 = param_2 + 1;
    for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *param_1;
      param_1 = param_1 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *param_4 = param_3 + 1;
  }
  return;
}

