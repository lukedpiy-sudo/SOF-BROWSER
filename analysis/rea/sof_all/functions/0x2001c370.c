// rea decompile_all
// name: FUN_2001c370
// address: 0x2001c370
// body: available
// range: 0x2001c370-0x2001c577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2001c370(undefined4 param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if (DAT_20248e04 == 0) {
    iVar7 = 0;
LAB_2001c396:
    if (DAT_201204a4 <= iVar7) goto LAB_2001c39e;
  }
  else {
    iVar7 = FUN_2001a900(param_1,0);
    if (-1 < iVar7) goto LAB_2001c396;
LAB_2001c39e:
    Com_Error(1,s_CM_LeafCluster__bad_number_2012057c);
  }
  iVar6 = *(int *)(iVar7 * 0x3c + 0x24 + DAT_20246ce4);
  if ((iVar7 < 0) || (DAT_201204a4 <= iVar7)) {
    Com_Error(1,s_CM_LeafArea__bad_number_20120598);
  }
  iVar7 = *(int *)(iVar7 * 0x3c + 0x28 + DAT_20246ce4);
  if (iVar6 == -1) {
    uVar4 = DAT_201204ac + 7 >> 3;
    puVar8 = &DAT_20244cd8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  else {
    if (DAT_20248d68 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(DAT_20248d80 + 4 + iVar6 * 8) + DAT_20248d68;
    }
    FUN_2001bc70(iVar6,&DAT_20244cd8);
  }
  if (DAT_20248e04 == 0) {
    iVar6 = 0;
LAB_2001c4af:
    if (iVar6 < DAT_201204a4) goto LAB_2001c4c6;
  }
  else {
    iVar6 = 0;
    do {
      iVar3 = DAT_20246d64 + iVar6 * 0x3c;
      pfVar2 = *(float **)(DAT_20246d64 + 0x24 + iVar6 * 0x3c);
      if (*(byte *)(pfVar2 + 4) < 3) {
        fVar1 = param_2[*(byte *)(pfVar2 + 4)];
      }
      else {
        fVar1 = *pfVar2 * *param_2 + pfVar2[1] * param_2[1] + pfVar2[2] * param_2[2];
      }
      if (0.0 <= fVar1 - pfVar2[3]) {
        iVar6 = *(int *)(iVar3 + 0x30);
      }
      else {
        iVar6 = *(int *)(iVar3 + 0x34);
      }
    } while (-1 < iVar6);
    DAT_20246d5c = DAT_20246d5c + 1;
    iVar6 = -1 - iVar6;
    if (-1 < iVar6) goto LAB_2001c4af;
  }
  Com_Error(1,s_CM_LeafCluster__bad_number_2012057c);
LAB_2001c4c6:
  iVar3 = *(int *)(iVar6 * 0x3c + 0x24 + DAT_20246ce4);
  if ((iVar6 < 0) || (DAT_201204a4 <= iVar6)) {
    Com_Error(1,s_CM_LeafArea__bad_number_20120598);
  }
  iVar6 = *(int *)(iVar6 * 0x3c + 0x28 + DAT_20246ce4);
  if ((*(byte *)((int)&DAT_20244cd8 + (iVar3 >> 3)) & (byte)(1 << ((byte)iVar3 & 7))) != 0) {
    if (*(float *)(DAT_20244ccc + 0x18) == 0.0) {
      if ((DAT_201204a8 < iVar7) || (DAT_201204a8 < iVar6)) {
        Com_Error(1,s_area_>_numareas_20120634);
      }
      if (*(int *)(DAT_20244cd0 + 8 + iVar7 * 0x10) != *(int *)(iVar6 * 0x10 + 8 + DAT_20244cd0)) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

