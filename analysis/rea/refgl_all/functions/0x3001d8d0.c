// rea decompile_all
// name: FUN_3001d8d0
// address: 0x3001d8d0
// body: available
// range: 0x3001d8d0-0x3001dd5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_3001d8d0(int *param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  ushort *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int unaff_EBX;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int *unaff_EBP;
  int iVar18;
  int *unaff_ESI;
  int iVar19;
  int iVar20;
  int *unaff_EDI;
  int unaff_retaddr;
  int local_5c;
  int iStack_58;
  float *pfStack_54;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  int *piStack_40;
  float fStack_3c;
  int *local_34;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_18;
  int iStack_10;
  int iStack_c;
  uint uStack_4;
  
  uVar13 = ((param_2 >> 3) + param_2 + (param_2 >> 6)) % 0x13;
  iVar9 = 0;
  if (0 < (int)(&DAT_300a6418)[uVar13 * 0x97]) {
    puVar14 = &DAT_300a6420 + uVar13 * 0x97;
    do {
      if (*puVar14 == param_2) {
        piVar15 = (int *)(&DAT_300a641c)[uVar13 * 0x97 + iVar9 * 3];
        (&DAT_300a6424)[iVar9 * 3 + uVar13 * 0x97] = DAT_300aa318;
        return piVar15;
      }
      iVar9 = iVar9 + 1;
      puVar14 = puVar14 + 3;
    } while (iVar9 < (int)(&DAT_300a6418)[uVar13 * 0x97]);
  }
  local_34 = &DAT_300a6418 + uVar13 * 0x97;
  iVar9 = (**(code **)(*param_1 + 0x94))(param_1,&local_5c);
  if (iVar9 < 0) {
    OutputDebugStringA(s_RenderLeaf_critically_failed_to_c_30031ac4);
    return (int *)0x0;
  }
  (**(code **)(*unaff_EBP + 0xc))(unaff_EBP);
  pfStack_54 = (float *)0x0;
  iStack_58 = 0;
  piVar15 = &DAT_300a6418 + uVar13 * 0x97;
  if (0 < *(int *)(param_2 + 0x34)) {
    do {
      fVar5 = *(float *)(*(int *)(param_2 + 0x30) + iStack_58 * 4);
      iVar9 = *(int *)(*(int *)(unaff_retaddr + 0xc0) + *(int *)((int)fVar5 + 0xc) * 4);
      if (iVar9 < 1) {
        puVar10 = (ushort *)(*(int *)(unaff_retaddr + 0x94) + iVar9 * -4);
        uVar3 = puVar10[1];
        uVar4 = *puVar10;
      }
      else {
        puVar10 = (ushort *)(*(int *)(unaff_retaddr + 0x94) + iVar9 * 4);
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
      }
      uStack_50 = (uint)uVar3;
      fStack_48 = fVar5;
      (**(code **)(*param_1 + 0x68))(param_1,3);
      piVar15 = (int *)(*(ushort *)((int)fVar5 + 10) - 1);
      (**(code **)(*param_1 + 0xc))(param_1,2);
      iVar9 = 1;
      if (1 < (int)piVar15) {
        iStack_18 = 2;
        piVar16 = piVar15;
        uVar13 = (uint)uVar4;
        iVar19 = unaff_retaddr;
        do {
          pfStack_54 = (float *)(iVar9 + *(int *)(iStack_58 + 0xc));
          local_5c = *(int *)(*(int *)(iVar19 + 0xc0) + (int)pfStack_54 * 4);
          iVar17 = *(int *)(iVar19 + 0x94);
          if (local_5c < 1) {
            uVar3 = *(ushort *)(iVar17 + local_5c * -4);
          }
          else {
            uVar3 = *(ushort *)(iVar17 + 2 + local_5c * 4);
          }
          uVar12 = (uint)uVar3;
          if (iStack_18 < (int)piVar16) {
            local_5c = *(int *)(*(int *)(iVar19 + 0xc0) + 4 + (int)pfStack_54 * 4);
            if (local_5c < 1) {
              uVar3 = *(ushort *)(iVar17 + local_5c * -4);
            }
            else {
              uVar3 = *(ushort *)(iVar17 + 2 + local_5c * 4);
            }
            iVar19 = *(int *)(iVar19 + 0x8c);
            pfVar1 = (float *)(iVar19 + (uint)uVar3 * 0xc);
            pfStack_54 = (float *)(iVar19 + uVar12 * 0xc);
            pfVar2 = (float *)(iVar19 + uVar13 * 0xc);
            fStack_4c = *pfVar1 - *pfVar2;
            fStack_48 = pfVar1[1] - pfVar2[1];
            piStack_40 = (int *)((pfVar1[2] - pfVar2[2]) * (pfStack_54[1] - pfVar2[1]) -
                                fStack_48 * (pfStack_54[2] - pfVar2[2]));
            fStack_3c = fStack_4c * (pfStack_54[2] - pfVar2[2]) -
                        (pfVar1[2] - pfVar2[2]) * (*pfStack_54 - *pfVar2);
            fVar5 = fStack_48 * (*pfStack_54 - *pfVar2) - fStack_4c * (pfStack_54[1] - pfVar2[1]);
            iVar19 = iStack_10;
            if (1e-06 <= (float)piStack_40 * (float)piStack_40 +
                         fStack_3c * fStack_3c + fVar5 * fVar5) goto LAB_3001db54;
            iVar9 = iVar9 + 1;
            iStack_18 = iStack_18 + 1;
            uVar12 = (uint)uVar3;
          }
          else {
LAB_3001db54:
            iVar19 = *(int *)(iVar19 + 0x8c);
            iVar18 = uVar13 * 0xc;
            iVar20 = unaff_EBX * 0xc;
            iVar17 = uVar12 * 0xc;
            fVar5 = *(float *)(iVar19 + iVar18) - *(float *)(iVar20 + iVar19);
            fVar8 = *(float *)(iVar19 + 4 + iVar18) - *(float *)(iVar20 + 4 + iVar19);
            fVar6 = *(float *)(iVar19 + 8 + iVar18) - *(float *)(iVar20 + 8 + iVar19);
            local_34 = (int *)(*(float *)(iVar17 + iVar19) - *(float *)(iVar20 + iVar19));
            fStack_30 = *(float *)(iVar17 + 4 + iVar19) - *(float *)(iVar20 + 4 + iVar19);
            fVar7 = *(float *)(iVar17 + 8 + iVar19) - *(float *)(iVar20 + 8 + iVar19);
            fStack_28 = fVar7 * fVar8 - fStack_30 * fVar6;
            fStack_24 = (float)local_34 * fVar6 - fVar7 * fVar5;
            fVar5 = fStack_30 * fVar5 - (float)local_34 * fVar8;
            fVar5 = fStack_28 * fStack_28 + fStack_24 * fStack_24 + fVar5 * fVar5;
            if (*(float *)(iStack_c + 0x38) <= fVar5) {
              DAT_300aa314 = DAT_300aa314 + 1;
              piVar15 = (int *)((int)piVar15 + 1);
              if (fVar5 < *(float *)(iStack_c + 0x44)) {
                (**(code **)(*param_1 + 0xa8))(param_1,0x40);
              }
              else {
                (**(code **)(*param_1 + 0xa8))(param_1,0x42);
              }
              (**(code **)(*param_1 + 0x80))(param_1,piVar15);
              puVar11 = (undefined4 *)(*(int *)(iStack_20 + 0x8c) + iVar20);
              (**(code **)(*param_1 + 0x70))
                        (param_1,*puVar11,puVar11[1],
                         *(undefined4 *)(*(int *)(iStack_20 + 0x8c) + 8 + iVar20));
              fVar5 = fStack_30;
              puVar11 = (undefined4 *)(*(int *)((int)fStack_30 + 0x8c) + iVar18);
              (**(code **)(*param_1 + 0x70))(param_1,*puVar11,puVar11[1],puVar11[2]);
              puVar11 = (undefined4 *)(*(int *)((int)fVar5 + 0x8c) + iVar17);
              (**(code **)(*param_1 + 0x70))(param_1,*puVar11,puVar11[1],puVar11[2]);
            }
          }
          iVar9 = iVar9 + 1;
          iStack_18 = iStack_18 + 1;
          piVar16 = unaff_EDI;
          uVar13 = uVar12;
          iVar19 = iStack_10;
        } while (iVar9 < (int)unaff_EDI);
      }
      (**(code **)(*param_1 + 0x6c))(param_1);
      iStack_58 = iStack_58 + 1;
      piVar15 = piStack_40;
      param_2 = uStack_4;
    } while (iStack_58 < *(int *)(uStack_4 + 0x34));
  }
  (**(code **)(*unaff_ESI + 0x10))(unaff_ESI);
  if (iStack_58 < 3) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    return (int *)0x0;
  }
  iVar9 = *piVar15;
  if (0x31 < iVar9) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    OutputDebugStringA(s_RenderLeaf__failed_to_store_in_C_30031a98);
    return (int *)0x0;
  }
  *piVar15 = iVar9 + 1;
  piVar15 = piVar15 + iVar9 * 3 + 1;
  piVar15[1] = param_2;
  *piVar15 = (int)unaff_EDI;
  piVar15[2] = DAT_300aa318;
  return unaff_EDI;
}

