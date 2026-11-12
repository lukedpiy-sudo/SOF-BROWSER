// rea decompile_all
// name: FUN_2001a000
// address: 0x2001a000
// body: available
// range: 0x2001a000-0x2001a52d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2001a000(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  
  pbVar6 = param_1;
  DAT_20244ccc = Cvar_Get(s_map_noareas_2012051c,&DAT_2011c4ac,0,0);
  pbVar2 = &DAT_20248da0;
  pbVar7 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar11 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_2001a053:
      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_2001a058;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar11 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_2001a053;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_2001a058:
  if (iVar3 == 0) {
    if (param_2 == 0) {
      fVar12 = (float10)FUN_200216d0(s_flushmap_20120510);
      if (fVar12 != (float10)0.0) goto LAB_2001a190;
      puVar9 = &DAT_20243c58;
      for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      DAT_20246d0c = DAT_20246d0c + 1;
      param_1 = (byte *)0x1;
      if (1 < DAT_201204a8) {
        param_2 = 0x10;
        iVar3 = 0;
        do {
          piVar8 = (int *)(param_2 + DAT_20244cd0);
          if (piVar8[3] != DAT_20246d0c) {
            iVar3 = iVar3 + 1;
            piVar8[2] = iVar3;
            piVar8[3] = DAT_20246d0c;
            iVar5 = 0;
            piVar10 = (int *)(DAT_20246cec + piVar8[1] * 8);
            if (0 < *piVar8) {
              do {
                if ((&DAT_20243c58)[*piVar10] != 0) {
                  FUN_2001bf30(piVar10[1] * 0x10 + DAT_20244cd0,iVar3);
                }
                iVar5 = iVar5 + 1;
                piVar10 = piVar10 + 2;
              } while (iVar5 < *piVar8);
            }
          }
          param_1 = (byte *)((int)param_1 + 1);
          param_2 = param_2 + 0x10;
        } while ((int)param_1 < DAT_201204a8);
      }
    }
    iVar3 = 0;
    if (0 < DAT_20248e00) {
      piVar8 = (int *)(DAT_20246cdc + 0x34);
      do {
        *piVar8 = piVar8[1];
        piVar8[-2] = piVar8[-1];
        piVar8[3] = (int)*(char *)(piVar8[1] + 0x100);
        piVar8[4] = 0;
        iVar3 = iVar3 + 1;
        piVar8 = piVar8 + 0x12;
      } while (iVar3 < DAT_20248e00);
      return DAT_20246d00;
    }
  }
  else {
LAB_2001a190:
    iVar3 = 5;
    bVar11 = true;
    pbVar7 = param_1;
    pbVar2 = (byte *)&DAT_2011d6a0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar11 = *pbVar7 == *pbVar2;
      pbVar7 = pbVar7 + 1;
      pbVar2 = pbVar2 + 1;
    } while (bVar11);
    if (!bVar11) {
      FUN_20022e10();
      FUN_20017e50();
      FUN_20017e10();
      Com_DPrintf(s_CM_ClearMap__Map_cleared_201204f4);
      DAT_20248e04 = 0;
      DAT_20248d70 = 0;
      DAT_201204a4 = 0;
      DAT_20248dec = 0;
      DAT_20246ce8 = 0;
      _DAT_20244cc0 = 0;
      DAT_20248da0 = 0;
      if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
        iVar3 = FUN_20018050(param_1,5,0);
        DAT_20246cdc = *(int *)(iVar3 + 4);
        DAT_20248e00 = *(int *)(iVar3 + 8);
        FUN_20018050(param_1,0x15,0);
        DAT_201204ac = 0;
        iVar3 = FUN_20018050(param_1,8,&LAB_20019ed0);
        piVar8 = *(int **)(iVar3 + 4);
        DAT_201204a4 = *(int *)(iVar3 + 8);
        DAT_20246ce4 = piVar8;
        if (*piVar8 != 1) {
          Com_Error(1,s_Map_leaf_0_is_not_CONTENTS_SOLID_201204d0);
        }
        iVar3 = 1;
        _DAT_20246cd8 = 0;
        DAT_20246d58 = -1;
        if (1 < DAT_201204a4) {
          do {
            piVar8 = piVar8 + 0xf;
            if (*piVar8 == 0) {
              DAT_20246d58 = iVar3;
              if (iVar3 != -1) goto LAB_2001a2ab;
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < DAT_201204a4);
        }
        Com_Error(1,s_Map_does_not_have_an_empty_leaf_201204b0);
LAB_2001a2ab:
        iVar3 = FUN_20018050(param_1,10,0);
        DAT_20244cbc = *(undefined4 *)(iVar3 + 4);
        DAT_20248de4 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,1,0);
        DAT_20248d94 = *(undefined4 *)(iVar3 + 4);
        DAT_20248e04 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,0xe,0);
        DAT_20244c5c = *(undefined4 *)(iVar3 + 4);
        _DAT_20248d88 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,0xf,0);
        DAT_20244c58 = *(undefined4 *)(iVar3 + 4);
        DAT_20244cb0 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,0xd,0);
        DAT_20246d00 = *(undefined4 *)(iVar3 + 4);
        DAT_20248dec = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,4,0);
        DAT_20246d64 = *(undefined4 *)(iVar3 + 4);
        DAT_20248d70 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,0x11,0);
        DAT_20244cd0 = *(int *)(iVar3 + 4);
        DAT_201204a8 = *(int *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,0x12,0);
        DAT_20246cec = *(int *)(iVar3 + 4);
        DAT_20246d08 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,3,0);
        DAT_20248d80 = *(undefined4 *)(iVar3 + 4);
        DAT_20248d68 = *(undefined4 *)(iVar3 + 4);
        DAT_20246ce8 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,0,0);
        DAT_20246d60 = *(undefined4 *)(iVar3 + 4);
        _DAT_20244cc0 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_20018050(param_1,6,0);
        DAT_20248d90 = *(undefined4 *)(iVar3 + 4);
        _DAT_20246d04 = *(undefined4 *)(iVar3 + 8);
        FUN_2001a640();
        iVar3 = DAT_201204a8;
        if (param_2 == 0) {
          iVar5 = 0;
          DAT_20246d0c = DAT_20246d0c + 1;
          puVar9 = &DAT_20243c58;
          for (iVar4 = 0x400; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          param_1 = (byte *)0x1;
          if (1 < iVar3) {
            param_2 = 0x10;
            do {
              piVar8 = (int *)(param_2 + DAT_20244cd0);
              if (piVar8[3] != DAT_20246d0c) {
                iVar5 = iVar5 + 1;
                piVar8[2] = iVar5;
                piVar8[3] = DAT_20246d0c;
                iVar3 = 0;
                piVar10 = (int *)(DAT_20246cec + piVar8[1] * 8);
                if (0 < *piVar8) {
                  do {
                    if ((&DAT_20243c58)[*piVar10] != 0) {
                      FUN_2001bf30(piVar10[1] * 0x10 + DAT_20244cd0,iVar5);
                    }
                    iVar3 = iVar3 + 1;
                    piVar10 = piVar10 + 2;
                  } while (iVar3 < *piVar8);
                }
              }
              param_1 = (byte *)((int)param_1 + 1);
              param_2 = param_2 + 0x10;
            } while ((int)param_1 < DAT_201204a8);
          }
        }
        iVar3 = 0;
        if (0 < DAT_20248e00) {
          piVar8 = (int *)(DAT_20246cdc + 0x34);
          do {
            *piVar8 = piVar8[1];
            piVar8[-2] = piVar8[-1];
            piVar8[3] = (int)*(char *)(piVar8[1] + 0x100);
            piVar8[4] = 0;
            iVar3 = iVar3 + 1;
            piVar8 = piVar8 + 0x12;
          } while (iVar3 < DAT_20248e00);
        }
        iVar3 = (int)&DAT_20248da0 - (int)pbVar6;
        do {
          bVar1 = *pbVar6;
          pbVar6[iVar3] = bVar1;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
        return DAT_20246d00;
      }
      DAT_201204a4 = 1;
      DAT_201204ac = 1;
      DAT_201204a8 = 1;
    }
  }
  return DAT_20246d00;
}

