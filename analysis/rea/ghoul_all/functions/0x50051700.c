// rea decompile_all
// name: FUN_50051700
// address: 0x50051700
// body: available
// range: 0x50051700-0x50051fc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50051700(int param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  char *pcVar13;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_80 [128];
  
  iVar4 = DAT_5015cca0 + 0x464;
  iVar7 = 1;
  if (0 < DAT_5015d8c8) {
    iVar8 = 0x464;
    while ((((*(int *)(iVar4 + 0x78) == 0 || (iVar1 = *(int *)(iVar4 + 0x74), iVar1 == 0)) ||
            (*(int *)(iVar1 + 800) != 0)) ||
           (((iVar4 == param_1 ||
             (*(int *)(iVar1 + 0x324) != *(int *)(*(int *)(param_1 + 0x74) + 0x324))) ||
            (iVar4 = (**(code **)(**(int **)(iVar1 + 0x34c) + 0x54))(7), iVar4 == 0))))) {
      iVar8 = iVar8 + 0x464;
      iVar7 = iVar7 + 1;
      iVar4 = DAT_5015cca0 + iVar8;
      if (DAT_5015d8c8 < iVar7) goto LAB_5005178b;
    }
    iVar7 = 1;
    iVar4 = DAT_5015cca0 + 0x464;
    if (DAT_5015d8c8 < 1) goto LAB_50051920;
    iVar8 = 0x464;
    while (((*(int *)(iVar4 + 0x78) == 0 || (iVar1 = *(int *)(iVar4 + 0x74), iVar1 == 0)) ||
           ((*(int *)(iVar1 + 800) != 0 ||
            (((iVar4 == param_1 ||
              (*(int *)(iVar1 + 0x324) == *(int *)(*(int *)(param_1 + 0x74) + 0x324))) ||
             (iVar4 = (**(code **)(**(int **)(iVar1 + 0x34c) + 0x54))(7), iVar4 == 0))))))) {
      iVar8 = iVar8 + 0x464;
      iVar7 = iVar7 + 1;
      iVar4 = DAT_5015cca0 + iVar8;
      if (DAT_5015d8c8 < iVar7) {
LAB_50051920:
        FUN_50051600(param_1);
        return;
      }
    }
  }
LAB_5005178b:
  iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40c);
  if (DAT_5015ccdc < *(float *)(iVar4 + 0x14)) {
    return;
  }
  *(float *)(iVar4 + 0x14) = DAT_5015ccdc + 5.0;
  if (*(int *)(*(int *)(param_1 + 0x74) + 0x324) != 2) {
    bVar3 = FUN_5006a980(0x5015c7b8);
    if ((!bVar3) && (iVar4 = FUN_500514d0(param_1), iVar4 == 0)) {
      iVar4 = FUN_50055610(&DAT_5015c7b8,0);
      uVar6 = 1;
      while (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 8);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x460) == 0x24)) && (*(int *)(iVar4 + 0x3cc) == 1)) {
          FUN_50060c10(&DAT_50159a60,(float *)(iVar4 + 4),(ushort *)&fStack_8c);
          if (SUB42(fStack_8c,0) != 0) {
            uVar9 = (uint)fStack_8c & 0xffff;
            uVar6 = FUN_50056bf0(0x50159a74);
            if (uVar9 < uVar6) {
              iVar4 = DAT_50159a78 + uVar9 * 0x34;
            }
            else {
              iVar4 = 0;
            }
            *(int *)(*(int *)(param_1 + 0x45c) + 0x4c) = iVar4;
            if (*(int *)(*(int *)(param_1 + 0x45c) + 0x4c) != 0) {
              iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40c);
              if (*(int *)(iVar4 + 0x18) != 1) {
                *(undefined4 *)(iVar4 + 0x18) = 1;
                iVar4 = *(int *)(param_1 + 0x74) + 0x2cc;
                puVar11 = auStack_80;
                pcVar13 = s_say_team__s__s___Going_to_return_50142e50;
                uVar12 = 0x80;
                FUN_500fe2b0();
                (*DAT_5015cb78)(auStack_80,puVar11,uVar12,pcVar13,iVar4);
              }
              goto LAB_50051c3c;
            }
          }
          break;
        }
        iVar4 = FUN_50055610(&DAT_5015c7b8,uVar6);
        uVar6 = uVar6 + 1;
      }
    }
    if (*(int *)(*(int *)(param_1 + 0x74) + 0x324) == 1) {
      bVar3 = FUN_5006a9c0(0x5015c7b8);
      if (bVar3) goto LAB_50051e73;
      iVar4 = FUN_500514d0(param_1);
    }
    else {
      bVar3 = FUN_5006a980(0x5015c7b8);
      if (bVar3) goto LAB_50051e73;
      iVar4 = FUN_500514d0(param_1);
    }
    if (iVar4 == 0) {
      iVar4 = FUN_50055610(&DAT_5015c7b8,0);
      uVar6 = 1;
      while (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 8);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x460) == 0x24)) && (*(int *)(iVar4 + 0x3cc) == 2)) {
          FUN_50060c10(&DAT_50159a60,(float *)(iVar4 + 4),(ushort *)&fStack_8c);
          if (SUB42(fStack_8c,0) != 0) {
            iVar4 = FUN_50056cc0(&DAT_50159a60,(uint)fStack_8c & 0xffff);
            *(int *)(*(int *)(param_1 + 0x45c) + 0x4c) = iVar4;
            if (*(int *)(*(int *)(param_1 + 0x45c) + 0x4c) != 0) {
              iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40c);
              if (*(int *)(iVar4 + 0x18) != 2) {
                *(undefined4 *)(iVar4 + 0x18) = 2;
                iVar4 = *(int *)(param_1 + 0x74) + 0x2cc;
                puVar11 = auStack_80;
                pcVar13 = s_say_team__s__s___Their_flag_s_be_50142ed4;
                uVar12 = 0x80;
                FUN_500fe2b0();
                (*DAT_5015cb78)(auStack_80,puVar11,uVar12,pcVar13,iVar4);
              }
              goto LAB_50051c3c;
            }
          }
          break;
        }
        iVar4 = FUN_50055610(&DAT_5015c7b8,uVar6);
        uVar6 = uVar6 + 1;
      }
    }
LAB_50051e73:
    iVar4 = FUN_50051440(param_1);
    if (iVar4 == 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40c);
      if (*(int *)(iVar4 + 0x18) != 4) {
        *(undefined4 *)(iVar4 + 0x18) = 4;
        iVar4 = *(int *)(param_1 + 0x74) + 0x2cc;
        puVar11 = auStack_80;
        pcVar13 = s_say_team__s__s___I_m_going_after_50142e7c;
        uVar12 = 0x80;
        FUN_500fe2b0();
        (*DAT_5015cb78)(auStack_80,puVar11,uVar12,pcVar13,iVar4);
      }
      FUN_50051060(param_1);
      return;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40c);
    if (*(int *)(iVar4 + 0x18) != 3) {
      *(undefined4 *)(iVar4 + 0x18) = 3;
      iVar4 = *(int *)(param_1 + 0x74) + 0x2cc;
      puVar11 = auStack_80;
      pcVar13 = s_say_team__s__s___We_have_their_f_50142eac;
      uVar12 = 0x80;
      FUN_500fe2b0();
      (*DAT_5015cb78)(auStack_80,puVar11,uVar12,pcVar13,iVar4);
    }
    FUN_500511f0(param_1);
    return;
  }
  bVar3 = FUN_5006a9c0(0x5015c7b8);
  if ((!bVar3) && (iVar4 = FUN_500514d0(param_1), iVar4 == 0)) {
    uVar6 = 0;
    do {
      uVar9 = uVar6 + 1;
      if ((((int)uVar6 < 0) || (uVar5 = FUN_50056bd0(0x5015c85c), uVar5 <= uVar6)) ||
         (iVar4 = *(int *)(uVar6 * 4 + DAT_5015c860), iVar4 == 0)) goto LAB_500519a1;
      iVar4 = *(int *)(iVar4 + 8);
      uVar6 = uVar9;
    } while (((iVar4 == 0) || (*(int *)(iVar4 + 0x460) != 0x24)) || (*(int *)(iVar4 + 0x3cc) != 2));
    FUN_50060c10(&DAT_50159a60,(float *)(iVar4 + 4),(ushort *)&fStack_8c);
    if (SUB42(fStack_8c,0) != 0) {
      if ((DAT_50159a78 == 0) ||
         ((uint)((DAT_50159a7c - DAT_50159a78) / 0x34) <= ((uint)fStack_8c & 0xffff))) {
        iVar4 = 0;
      }
      else {
        iVar4 = DAT_50159a78 + ((uint)fStack_8c & 0xffff) * 0x34;
      }
      *(int *)(*(int *)(param_1 + 0x45c) + 0x4c) = iVar4;
      if (*(int *)(*(int *)(param_1 + 0x45c) + 0x4c) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40c);
        if (*(int *)(iVar4 + 0x18) != 1) {
          *(undefined4 *)(iVar4 + 0x18) = 1;
          iVar4 = *(int *)(param_1 + 0x74) + 0x2cc;
          puVar11 = auStack_80;
          pcVar13 = s_say_team__s__Going_to_return_our_50142f04;
          uVar12 = 0x80;
          FUN_500fe2b0();
          (*DAT_5015cb78)(auStack_80,puVar11,uVar12,pcVar13,iVar4);
        }
        FUN_50061fb0(&DAT_50159a60,param_1);
        return;
      }
    }
  }
LAB_500519a1:
  if (*(int *)(*(int *)(param_1 + 0x74) + 0x324) == 1) {
    bVar3 = FUN_5006a9c0(0x5015c7b8);
    if (bVar3) goto LAB_500519d0;
    iVar4 = FUN_500514d0(param_1);
  }
  else {
    bVar3 = FUN_5006a980(0x5015c7b8);
    if (bVar3) goto LAB_500519d0;
    iVar4 = FUN_500514d0(param_1);
  }
  if (iVar4 == 0) {
    uVar6 = 0;
    do {
      uVar9 = uVar6 + 1;
      if ((((int)uVar6 < 0) || (uVar5 = FUN_50056bd0(0x5015c85c), uVar5 <= uVar6)) ||
         (iVar4 = *(int *)(uVar6 * 4 + DAT_5015c860), iVar4 == 0)) goto LAB_500519d0;
      iVar4 = *(int *)(iVar4 + 8);
      uVar6 = uVar9;
    } while (((iVar4 == 0) || (*(int *)(iVar4 + 0x460) != 0x24)) || (*(int *)(iVar4 + 0x3cc) != 1));
    FUN_50060c10(&DAT_50159a60,(float *)(iVar4 + 4),(ushort *)&fStack_8c);
    if (SUB42(fStack_8c,0) != 0) {
      if ((DAT_50159a78 == 0) ||
         ((uint)((DAT_50159a7c - DAT_50159a78) / 0x34) <= ((uint)fStack_8c & 0xffff))) {
        iVar4 = 0;
      }
      else {
        iVar4 = DAT_50159a78 + ((uint)fStack_8c & 0xffff) * 0x34;
      }
      *(int *)(*(int *)(param_1 + 0x45c) + 0x4c) = iVar4;
      if (*(int *)(*(int *)(param_1 + 0x45c) + 0x4c) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40c);
        if (*(int *)(iVar4 + 0x18) != 2) {
          *(undefined4 *)(iVar4 + 0x18) = 2;
          iVar4 = *(int *)(param_1 + 0x74) + 0x2cc;
          puVar11 = auStack_80;
          pcVar13 = s_say_team__s__s___Their_flag_s_be_50142ed4;
          uVar12 = 0x80;
          FUN_500fe2b0();
          (*DAT_5015cb78)(auStack_80,puVar11,uVar12,pcVar13,iVar4);
        }
        FUN_50061fb0(&DAT_50159a60,param_1);
        return;
      }
    }
  }
LAB_500519d0:
  iVar7 = 1;
  iVar4 = DAT_5015cca0 + 0x464;
  if (0 < DAT_5015d8c8) {
    iVar8 = 0x464;
    do {
      if (((*(int *)(iVar4 + 0x78) != 0) && (iVar1 = *(int *)(iVar4 + 0x74), iVar1 != 0)) &&
         ((*(int *)(iVar1 + 800) == 0 &&
          (((iVar4 != param_1 &&
            (*(int *)(iVar1 + 0x324) == *(int *)(*(int *)(param_1 + 0x74) + 0x324))) &&
           (iVar4 = (**(code **)(**(int **)(iVar1 + 0x34c) + 0x54))(7), iVar4 != 0)))))) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40c);
        if (*(int *)(iVar4 + 0x18) != 3) {
          *(undefined4 *)(iVar4 + 0x18) = 3;
          iVar4 = *(int *)(param_1 + 0x74) + 0x2cc;
          puVar11 = auStack_80;
          pcVar13 = s_say_team__s__s___We_have_their_f_50142eac;
          uVar12 = 0x80;
          FUN_500fe2b0();
          (*DAT_5015cb78)(auStack_80,puVar11,uVar12,pcVar13,iVar4);
        }
        if (DAT_50159468 == (float *)0x0) {
          return;
        }
        if (*(int *)(param_1 + 0x45c) == 0) {
          return;
        }
        FUN_50048330((float *)(param_1 + 4),DAT_50159468,&fStack_8c);
        fVar2 = fStack_8c * fStack_8c + fStack_88 * fStack_88 + fStack_84 * fStack_84;
        uVar10 = (ushort)(fVar2 < 1048576.0) << 8 | (ushort)(fVar2 == 1048576.0) << 0xe;
        goto LAB_50051c1d;
      }
      iVar8 = iVar8 + 0x464;
      iVar7 = iVar7 + 1;
      iVar4 = iVar8 + DAT_5015cca0;
    } while (iVar7 <= DAT_5015d8c8);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40c);
  if (*(int *)(iVar4 + 0x18) != 4) {
    *(undefined4 *)(iVar4 + 0x18) = 4;
    iVar4 = *(int *)(param_1 + 0x74) + 0x2cc;
    puVar11 = auStack_80;
    pcVar13 = s_say_team__s__s___I_m_going_after_50142e7c;
    uVar12 = 0x80;
    FUN_500fe2b0();
    (*DAT_5015cb78)(auStack_80,puVar11,uVar12,pcVar13,iVar4);
  }
  if ((DAT_50159468 != (float *)0x0) && (*(int *)(param_1 + 0x45c) != 0)) {
    FUN_50048330((float *)(param_1 + 4),DAT_50159468,&fStack_8c);
    fVar2 = fStack_88 * fStack_88 + fStack_84 * fStack_84 + fStack_8c * fStack_8c;
    uVar10 = (ushort)(fVar2 < 16384.0) << 8 | (ushort)(fVar2 == 16384.0) << 0xe;
LAB_50051c1d:
    if (uVar10 == 0) {
      *(float **)(*(int *)(param_1 + 0x45c) + 0x4c) = DAT_50159468;
LAB_50051c3c:
      FUN_50061fb0(&DAT_50159a60,param_1);
      return;
    }
  }
  return;
}

