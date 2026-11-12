// rea decompile_all
// name: FUN_2005ba40
// address: 0x2005ba40
// body: available
// range: 0x2005ba40-0x2005bb70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005ba40(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float local_118 [6];
  int local_100 [64];
  
  iVar8 = 3;
  pfVar1 = param_1;
  do {
    pfVar2 = pfVar1 + 1;
    iVar8 = iVar8 + -1;
    *(float *)((int)local_118 + (8 - (int)param_1) + (int)pfVar2) = *pfVar1 - 8.0;
    *(float *)((int)local_100 + (-0x1c - (int)param_1) + (int)pfVar2) = *pfVar1 + 8.0;
    pfVar1 = pfVar2;
  } while (iVar8 != 0);
  iVar8 = FUN_2001aae0(local_118 + 3,local_118,local_100,0x40,0);
  if (iVar8 < 1) {
    Com_Error(0,s_SV_FatPVS__count_<_1_201395cc);
  }
  iVar3 = FUN_2001a590();
  iVar9 = 0;
  uVar7 = iVar3 + 0x1f >> 5;
  if (0 < iVar8) {
    do {
      iVar3 = FUN_2001a5c0(local_100[iVar9]);
      local_100[iVar9] = iVar3;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  puVar4 = (undefined4 *)FUN_2001bd20(local_100[0]);
  puVar10 = &DAT_20394dd8;
  for (uVar5 = uVar7 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  iVar3 = 1;
  if (1 < iVar8) {
    do {
      iVar9 = 0;
      if (0 < iVar3) {
        do {
          if (local_100[iVar3] == local_100[iVar9]) break;
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar3);
      }
      if (iVar9 == iVar3) {
        iVar9 = FUN_2001bd20(local_100[iVar3]);
        iVar6 = 0;
        if (0 < (int)uVar7) {
          do {
            (&DAT_20394dd8)[iVar6] = (&DAT_20394dd8)[iVar6] | *(uint *)(iVar9 + iVar6 * 4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar7);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar8);
  }
  return;
}

