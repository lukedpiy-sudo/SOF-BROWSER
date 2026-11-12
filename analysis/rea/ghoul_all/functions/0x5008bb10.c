// rea decompile_all
// name: FUN_5008bb10
// address: 0x5008bb10
// body: available
// range: 0x5008bb10-0x5008c21a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_5008bb10(float param_1,undefined4 param_2,float param_3,float *param_4,float *param_5,
            float *param_6,int param_7,int param_8,uint param_9,uint param_10,undefined4 param_11,
            undefined4 param_12)

{
  int iVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  char *pcVar11;
  float fVar12;
  undefined4 uVar13;
  int iVar14;
  int local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
  iVar1 = DAT_5015c8b8;
  local_1c = 0;
  if ((*(int *)(DAT_5015cca0 + 0x4d8) == 0) ||
     (*(int *)(*(int *)(DAT_5015cca0 + 0x4d8) + 0x5b8) != 4)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (*(int *)((int)param_1 + 0x30c) == 0) {
    return;
  }
  if ((*(int *)((int)param_1 + 0x30c) == 3) && (bVar7)) {
    return;
  }
  if (((param_3 != 0.0) && (*(int *)((int)param_3 + 0x450) != 0)) &&
     (*(int *)((int)param_1 + 0x74) != 0)) {
    if (*(int *)(DAT_5015c8b8 + 0x18) == 0x3f800000) {
      lVar10 = __ftol();
      param_7 = (int)lVar10;
    }
    else {
      lVar10 = __ftol();
      param_7 = (int)lVar10;
    }
  }
  if (((*(int *)(iVar1 + 0x18) == 0x40000000) && (param_3 != 0.0)) &&
     (*(int *)((int)param_3 + 0x450) != 0)) {
    if ((*(int *)((int)param_1 + 0x74) != 0) || (*(int *)((int)param_1 + 0x450) != 0)) {
      param_7 = 0;
      goto LAB_5008bbf0;
    }
  }
  else {
LAB_5008bbf0:
    if (*(int *)((int)param_1 + 0x450) != 0) {
      pbVar6 = *(byte **)((int)param_1 + 0x1b4);
      if (pbVar6 == (byte *)0x0) {
LAB_5008bc28:
        bVar7 = false;
      }
      else {
        iVar3 = 0xe;
        bVar7 = false;
        iVar1 = 0;
        bVar8 = true;
        pbVar4 = (byte *)s_m_x_mskinboss_50146f80;
        pbVar5 = pbVar6;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *pbVar4 < *pbVar5;
          bVar8 = *pbVar4 == *pbVar5;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (bVar8);
        if (!bVar8) {
          iVar1 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        }
        bVar7 = true;
        if (iVar1 != 0) goto LAB_5008bc28;
      }
      if (pbVar6 != (byte *)0x0) {
        iVar3 = 0x11;
        bVar8 = false;
        iVar1 = 0;
        bVar9 = true;
        pbVar4 = (byte *)s_m_x_mraiderboss1_501337e8;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *pbVar4 < *pbVar6;
          bVar9 = *pbVar4 == *pbVar6;
          pbVar4 = pbVar4 + 1;
          pbVar6 = pbVar6 + 1;
        } while (bVar9);
        if (!bVar9) {
          iVar1 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        }
        if (iVar1 == 0) {
          bVar8 = true;
          goto LAB_5008bc52;
        }
      }
      bVar8 = false;
LAB_5008bc52:
      if (((bVar7) || (bVar8)) && (*(int *)((int)param_1 + 0x318) != 100)) {
        return;
      }
      (**(code **)(**(int **)((int)param_1 + 0x450) + 0x40))
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
      return;
    }
  }
  if (((char)((uint)*(undefined4 *)((int)param_1 + 0x1a0) >> 8) < '\0') &&
     (param_1 = *(float *)((int)param_1 + 0x160), param_1 == 0.0)) {
    return;
  }
  if (((param_1 != param_3) && (iVar1 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar1 != 0)) &&
     ((iVar1 = (**(code **)(*DAT_5015c4d8 + 0x58))(), iVar1 != 0 &&
      (bVar7 = FUN_500887e0((int)param_1,(int)param_3), CONCAT31(extraout_var,bVar7) != 0)))) {
    iVar1 = (**(code **)(*DAT_5015c4d8 + 0x5c))();
    if (iVar1 == 0) {
      param_10 = param_10 | 0x8000000;
    }
    else {
      param_7 = 0;
      param_9 = param_9 | 0x40;
    }
  }
  DAT_5015c894 = param_10;
  iVar1 = *(int *)((int)param_1 + 0x74);
  if ((iVar1 != 0) && (iVar3 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar3 == 0)) {
    lVar10 = __ftol();
    if ((param_7 < 1) || (param_7 = 1, 0 < (int)lVar10)) {
      param_7 = (int)lVar10;
    }
  }
  FUN_500fe050(param_4);
  if (iVar1 == 0) {
    FUN_5008b810(param_1,(byte)param_9,param_8,param_4);
  }
  if (((*(byte *)((int)param_1 + 0x1a0) & 0x10) == 0) || ((param_9 & 0x20) != 0)) {
    if (iVar1 != 0) {
      if (((((param_9 & 0x40) != 0) &&
           (bVar7 = FUN_500887e0((int)param_1,(int)param_3), CONCAT31(extraout_var_00,bVar7) != 0))
          || (DAT_5015ccdc <= *(float *)(iVar1 + 0x564))) && ((param_9 & 0x20) == 0))
      goto LAB_5008be25;
      iVar3 = FUN_500f22e0((int)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           param_9,param_10);
      local_1c = param_7 - iVar3;
      param_7 = iVar3;
      goto LAB_5008be2d;
    }
  }
  else {
LAB_5008be25:
    param_7 = 0;
LAB_5008be2d:
    if (iVar1 != 0) {
      if (param_7 < 1) {
        if ((*(byte *)((int)param_1 + 0x1a0) & 0x10) == 0) {
          *(int *)(iVar1 + 0x498) = *(int *)(iVar1 + 0x498) + param_8;
          *(float *)(iVar1 + 0x4a0) = *param_5;
          *(float *)(iVar1 + 0x4a4) = param_5[1];
          *(float *)(iVar1 + 0x4a8) = param_5[2];
          goto LAB_5008bf10;
        }
      }
      else {
        *(int *)(iVar1 + 0x494) = *(int *)(iVar1 + 0x494) + param_7;
        *(int *)(iVar1 + 0x498) = *(int *)(iVar1 + 0x498) + param_8;
        if (param_10 != 0x1b) {
          fVar12 = param_1;
          uVar2 = FUN_50107636();
          FUN_50083c80(param_5,param_4,200,(uint)((int)uVar2 % 6 == 0),fVar12);
        }
        *(float *)(iVar1 + 0x4a0) = *param_5;
        *(float *)(iVar1 + 0x4a4) = param_5[1];
        *(float *)(iVar1 + 0x4a8) = param_5[2];
LAB_5008bf10:
        FUN_5008b920((int)param_1,(int)param_3,(byte)param_9,(float)param_8,param_4);
      }
      *(int *)(iVar1 + 0x49c) = *(int *)(iVar1 + 0x49c) + local_1c;
    }
  }
  if (param_7 == 0) goto LAB_5008c04d;
  *(int *)((int)param_1 + 0x2ec) = *(int *)((int)param_1 + 0x2ec) - param_7;
  FUN_5004f7c0((int)param_1,(int)param_3);
  if (iVar1 != 0) {
    if ((param_10 & 3) == 0) {
      if ((param_10 & 0xf) == 0) {
        if (((param_10 & 0x3f) == 0) || (param_7 < 6)) goto LAB_5008bfc4;
        iVar14 = 0;
        uVar13 = 1;
        fVar12 = param_1;
        iVar3 = (*DAT_5015c9f8)(s_exphit_50146f64);
        FUN_50085340(&DAT_5015c518,iVar3,(int)fVar12,uVar13,iVar14);
        pcVar11 = &DAT_50146f5c;
      }
      else {
        pcVar11 = s_gotshot_50146f6c;
      }
    }
    else {
      pcVar11 = s_lighthit_50146f74;
    }
    iVar14 = 0;
    uVar13 = 1;
    fVar12 = param_1;
    iVar3 = (*DAT_5015c9f8)(pcVar11);
    FUN_50085340(&DAT_5015c518,iVar3,(int)fVar12,uVar13,iVar14);
  }
LAB_5008bfc4:
  if (*(int *)((int)param_1 + 0x2ec) < 1) {
    if (iVar1 != 0) {
      *(uint *)((int)param_1 + 0x1a0) = *(uint *)((int)param_1 + 0x1a0) | 0x800;
    }
    if (*(int *)((int)param_1 + 0x3b0) != 0) {
      FUN_500b00e0((int)param_1);
    }
    if (*(int *)((int)param_1 + 0x2ec) < -999) {
      *(undefined4 *)((int)param_1 + 0x2ec) = 0xfffffc19;
    }
    *(float *)((int)param_1 + 0x324) = param_3;
    if (*(int *)((int)param_1 + 0x74) != 0) {
      FUN_500f2220((int)param_1);
    }
    if (*(code **)((int)param_1 + 0x2d0) == (code *)0x0) {
      return;
    }
    (**(code **)((int)param_1 + 0x2d0))(param_1,param_2,param_3,param_7,param_5);
    return;
  }
LAB_5008c04d:
  if (iVar1 == 0) {
    if (*(code **)((int)param_1 + 0x2cc) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x2cc))(param_1,param_3,(float)param_8,param_7,param_5);
      return;
    }
  }
  else {
    if (((*param_5 == 0.0) && (param_5[1] == 0.0)) && (param_5[2] == 0.0)) {
      FUN_500adb20((byte *)s_Error__T_Damage___NULL_location_p_50146f34);
      return;
    }
    if ((param_9 & 0x7000) == 0) {
      if (param_3 != 0.0) {
        fStack_18 = *(float *)((int)param_3 + 4) - *(float *)((int)param_1 + 4);
        fStack_14 = *(float *)((int)param_3 + 8) - *(float *)((int)param_1 + 8);
        fStack_10 = *(float *)((int)param_3 + 0xc) - *(float *)((int)param_1 + 0xc);
        FUN_500c3570(&fStack_18,afStack_c);
        __ftol();
        lVar10 = __ftol();
        fVar12 = (float)((uint)lVar10 & 0xffff) * 0.005493164;
        if (((fVar12 < 30.0) || (340.0 < fVar12)) || ((150.0 < fVar12 && (fVar12 < 210.0)))) {
          *(undefined2 *)(iVar1 + 0xa2) = 0x10;
        }
        else if (180.0 <= fVar12) {
          *(undefined2 *)(iVar1 + 0xa2) = 4;
        }
        else {
          *(undefined2 *)(iVar1 + 0xa2) = 8;
        }
        iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
        if (iVar1 != 0) {
          (**(code **)(*DAT_5015c4d8 + 0xd8))(param_1,param_3);
        }
      }
    }
    else if ((param_9 & 0x2000) == 0) {
      *(undefined2 *)(iVar1 + 0xa2) = 0x10;
    }
    else {
      *(undefined2 *)(iVar1 + 0xa2) = 2;
    }
    if ((10 < param_7) || (*(int *)((int)param_1 + 0x2ec) < 0x19)) {
      FUN_500bd3f0((int)param_1);
    }
  }
  return;
}

