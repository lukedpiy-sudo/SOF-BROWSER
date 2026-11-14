// rea decompile_all
// name: FUN_30006a90
// address: 0x30006a90
// body: available
// range: 0x30006a90-0x30007371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_30006a90(char *param_1,int param_2,char param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  char *pcVar11;
  char *pcStack_140;
  int *local_13c;
  undefined1 uStack_135;
  undefined1 auStack_134 [4];
  char *pcStack_130;
  uint uStack_12c;
  undefined4 uStack_124;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [4];
  int iStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int aiStack_10c [2];
  int aiStack_104 [4];
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_ec [4];
  int aiStack_e8 [2];
  int aiStack_e0 [4];
  undefined4 uStack_d0;
  char acStack_cc [64];
  undefined1 local_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_3002b732;
  pvStack_c = ExceptionList;
  if (param_2 == 6) {
    iVar9 = 0;
    pcVar8 = &DAT_30034e08;
    if (0 < DAT_3004c508) {
      do {
        if (*(int *)(pcVar8 + 0x48) == 0) break;
        iVar9 = iVar9 + 1;
        pcVar8 = pcVar8 + 0x78;
      } while (iVar9 < DAT_3004c508);
    }
    ExceptionList = &pvStack_c;
    if (iVar9 == DAT_3004c508) {
      ExceptionList = &pvStack_c;
      if (DAT_3004c508 == 800) {
        ExceptionList = &pvStack_c;
        (*DAT_3008fdc8)(1,s_Max_number_of_allowed_textures_e_3002e98c);
      }
      DAT_3004c508 = DAT_3004c508 + 1;
    }
    if (*(int *)(pcVar8 + 0x4c) != 0) {
      (*DAT_3008fde8)(0,s_Non_null_texture_chain_image__d_3002e968,iVar9);
      pcVar8[0x4c] = '\0';
      pcVar8[0x4d] = '\0';
      pcVar8[0x4e] = '\0';
      pcVar8[0x4f] = '\0';
    }
    iVar9 = (int)pcVar8 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar9] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    pcVar8[0x40] = '\x06';
    pcVar8[0x41] = '\0';
    pcVar8[0x42] = '\0';
    pcVar8[0x43] = '\0';
    pcVar8[0x44] = -1;
    pcVar8[0x45] = -1;
    pcVar8[0x46] = -1;
    pcVar8[0x47] = -1;
    *(undefined4 *)(pcVar8 + 0x48) = DAT_3008ffd4;
    *(int *)(pcVar8 + 0x50) = (int)(pcVar8 + -0x30034e08) / 0x78 + 0x480;
    pcVar8[0x54] = '\0';
    pcVar8[0x55] = '\x01';
    pcVar8[0x58] = '\0';
    pcVar8[0x59] = '\0';
    pcVar8[0x5a] = '\0';
    pcVar8[0x5b] = '\0';
    auStack_134[0] = uStack_135;
    pcVar8[0x5c] = '\0';
    pcVar8[0x5d] = '\0';
    pcVar8[0x5e] = '\0';
    pcVar8[0x5f] = '\0';
    pcStack_140 = pcVar8;
    FUN_300033d0(auStack_134,'\0');
    uVar5 = 0xffffffff;
    pcVar11 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    uVar3 = FUN_30003420(auStack_134,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar11 = pcStack_130;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar11 + 1;
      }
      pcStack_130[uVar5] = '\0';
      uStack_12c = uVar5;
    }
    iStack_4 = 0;
    FUN_30004990(aiStack_104,auStack_134);
    uStack_f4 = 0;
    iStack_4._0_1_ = 1;
    FUN_30007f80(&DAT_3004c50c,&uStack_124,aiStack_104);
    FUN_3000c0a0(aiStack_10c,&uStack_124,auStack_120);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_300033d0(aiStack_104,'\x01');
    *(char **)(aiStack_10c[0] + 0x1c) = pcStack_140;
    iStack_4 = 0xffffffff;
    FUN_300033d0(auStack_134,'\x01');
  }
  else {
    puVar10 = local_8c;
    pcVar11 = s__s_m32_3002eb7c;
    uVar3 = 0x80;
    ExceptionList = &pvStack_c;
    pcVar8 = param_1;
    FUN_3001d410();
    (*DAT_3008fdf4)(local_8c,&local_13c,0,puVar10,uVar3,pcVar11,pcVar8);
    if (local_13c == (int *)0x0) {
      (*DAT_3008fde8)(0,s_GL_FindImage__Can_t_load___s__3002eb5c,param_1);
      pcStack_140 = (char *)0x0;
    }
    else if (*local_13c == 4) {
      uVar5 = local_13c[0xde];
      if ((uVar5 & 2) != 0) {
        param_2 = 5;
      }
      if ((uVar5 & 8) != 0) {
        param_2 = 8;
      }
      if ((((*(float *)(DAT_3008fc5c + 0x18) == 0.0) &&
           (((uVar5 & 4) == 0 || (*(float *)(DAT_3008fdac + 0x18) == 0.0)))) ||
          ((char)local_13c[0x21] == '\0')) || (param_3 != '\0')) {
        if ((param_2 != 5) && (param_2 != 8)) {
          iVar9 = 0;
          piVar7 = local_13c + 0x91;
          do {
            if ((piVar7[-0x10] == 0) || (*piVar7 == 0)) break;
            uVar5 = 0;
            pbVar4 = (byte *)(piVar7[0x10] + (int)local_13c);
            if (piVar7[-0x10] * *piVar7 != 0) {
              do {
                *pbVar4 = (&DAT_3004c520)[*pbVar4];
                pbVar4[1] = (&DAT_3004c520)[pbVar4[1]];
                uVar5 = uVar5 + 1;
                pbVar4[2] = (&DAT_3004c520)[pbVar4[2]];
                pbVar4 = pbVar4 + 4;
              } while (uVar5 < (uint)(*piVar7 * piVar7[-0x10]));
            }
            iVar9 = iVar9 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar9 < 0xf);
        }
        iVar9 = 0;
        pcVar8 = &DAT_30034e08;
        if (0 < DAT_3004c508) {
          do {
            if (*(int *)(pcVar8 + 0x48) == 0) break;
            iVar9 = iVar9 + 1;
            pcVar8 = pcVar8 + 0x78;
          } while (iVar9 < DAT_3004c508);
        }
        if (iVar9 == DAT_3004c508) {
          if (DAT_3004c508 == 800) {
            (*DAT_3008fdc8)(1,s_Max_number_of_allowed_textures_e_3002e98c);
          }
          DAT_3004c508 = DAT_3004c508 + 1;
        }
        if (*(int *)(pcVar8 + 0x4c) != 0) {
          (*DAT_3008fde8)(0,s_Non_null_texture_chain_image__d_3002e968,iVar9);
          pcVar8[0x4c] = '\0';
          pcVar8[0x4d] = '\0';
          pcVar8[0x4e] = '\0';
          pcVar8[0x4f] = '\0';
        }
        iVar9 = (int)pcVar8 - (int)param_1;
        do {
          cVar1 = *param_1;
          param_1[iVar9] = cVar1;
          param_1 = param_1 + 1;
        } while (cVar1 != '\0');
        *(short *)(pcVar8 + 0x44) = (short)local_13c[0x81];
        *(short *)(pcVar8 + 0x46) = (short)local_13c[0x91];
        pcVar8[0x55] = (char)local_13c[0xb3];
        *(int *)(pcVar8 + 0x40) = param_2;
        *(undefined4 *)(pcVar8 + 0x48) = DAT_3008ffd4;
        pcVar8[0x5c] = '\0';
        pcVar8[0x5d] = '\0';
        pcVar8[0x5e] = '\0';
        pcVar8[0x5f] = '\0';
        pcVar8[0x58] = '\0';
        pcVar8[0x59] = '\0';
        pcVar8[0x5a] = '\0';
        pcVar8[0x5b] = '\0';
        *(int *)(pcVar8 + 0x50) = (int)(pcVar8 + -0x30034e08) / 0x78 + 0x480;
        pcVar11 = pcVar8;
        if ((*(float *)(DAT_3008fcd8 + 0x18) != 0.0) && (DAT_30034dcc != (char *)0x0)) {
          pcVar11 = DAT_30034dcc;
        }
        pcStack_140 = pcVar8;
        if ((&DAT_3008ffd8)[DAT_3008ffe0] != *(int *)(pcVar11 + 0x50)) {
          (&DAT_3008ffd8)[DAT_3008ffe0] = *(int *)(pcVar11 + 0x50);
          uVar3 = *(undefined4 *)(pcVar11 + 0x50);
          (*DAT_300a4778)(0xde1,uVar3);
          *(undefined4 *)(&DAT_300a41e8 + DAT_300a44b8 * 4) = uVar3;
        }
        FUN_300068e0((int)local_13c,(int)pcStack_140);
        FUN_30006570((int)pcStack_140);
        auStack_11c[0] = uStack_135;
        uVar5 = 0xffffffff;
        iStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        pcVar8 = pcStack_140;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_30005190(auStack_11c,(undefined4 *)pcStack_140,~uVar5 - 1);
        iStack_4 = 4;
        FUN_30004990(aiStack_e0,auStack_11c);
        uStack_d0 = 0;
        iStack_4._0_1_ = 5;
        FUN_30007f80(&DAT_3004c50c,&uStack_f0,aiStack_e0);
        FUN_3000c0a0(aiStack_e8,&uStack_f0,auStack_ec);
        iStack_4 = CONCAT31(iStack_4._1_3_,4);
        FUN_300033d0(aiStack_e0,'\x01');
        iStack_4 = 0xffffffff;
        *(char **)(aiStack_e8[0] + 0x1c) = pcStack_140;
        if (iStack_118 != 0) {
          if (*(char *)(iStack_118 + -1) == '\0') {
            FUN_3001f8bc((char *)(iStack_118 + -1));
          }
          else {
            *(char *)(iStack_118 + -1) = *(char *)(iStack_118 + -1) + -1;
          }
        }
        iStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        if ((*(float *)(DAT_3008fea0 + 0x18) != 0.0) && ((char)local_13c[0x21] != '\0')) {
          FUN_3001d410();
          FUN_30007380(acStack_cc,param_2,'\0','\x01');
        }
        if ((char)local_13c[0x61] != '\0') {
          FUN_3001d410();
          iVar9 = __strcmpi(acStack_cc,pcStack_140);
          if (iVar9 == 0) {
            (*DAT_3008fde8)(0,&DAT_3002eaf8,acStack_cc);
            pcStack_140[0x58] = '\0';
            pcStack_140[0x59] = '\0';
            pcStack_140[0x5a] = '\0';
            pcStack_140[0x5b] = '\0';
          }
          else {
            pcVar8 = FUN_30007380(acStack_cc,2,'\0','\x01');
            *(char **)(pcStack_140 + 0x58) = pcVar8;
          }
        }
        if ((char)local_13c[0xb7] != '\0') {
          FUN_3001d410();
          iVar9 = __strcmpi(acStack_cc,pcStack_140);
          if (iVar9 == 0) {
            (*DAT_3008fde8)(0,&DAT_3002eac8,acStack_cc);
            pcStack_140[0x5c] = '\0';
            pcStack_140[0x5d] = '\0';
            pcStack_140[0x5e] = '\0';
            pcStack_140[0x5f] = '\0';
          }
          else {
            pcVar8 = FUN_30007380(acStack_cc,5,'\0','\x01');
            *(char **)(pcStack_140 + 0x5c) = pcVar8;
            if (*(int *)(pcStack_140 + 0x5c) != 0) {
              *(int *)(pcStack_140 + 0x60) = local_13c[0xd7];
              *(int *)(pcStack_140 + 100) = local_13c[0xd8];
              *(int *)(pcStack_140 + 0x68) = local_13c[0xd9];
              *(int *)(pcStack_140 + 0x6c) = local_13c[0xda];
              puVar2 = DAT_30034e00;
              if ((*(float *)(pcStack_140 + 0x68) != 0.0) || (*(float *)(pcStack_140 + 0x6c) != 0.0)
                 ) {
                iVar9 = FUN_30007f50(DAT_30034e00,DAT_30034e00[1]);
                puVar2[1] = iVar9;
                **(int **)(iVar9 + 4) = iVar9;
                FUN_30008660((undefined4 *)(iVar9 + 8),&pcStack_140);
                DAT_30034e04 = DAT_30034e04 + 1;
              }
            }
          }
        }
      }
      else {
        FUN_3001d410();
        pcStack_140 = FUN_30007380(acStack_cc,param_2,'\x01','\x01');
        if (pcStack_140 == (char *)0x0) {
          pcStack_140 = DAT_3008fc64;
        }
        auStack_134[0] = uStack_135;
        FUN_300033d0(auStack_134,'\0');
        uVar5 = 0xffffffff;
        pcVar8 = param_1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        uVar3 = FUN_30003420(auStack_134,uVar5,'\x01');
        if ((char)uVar3 != '\0') {
          pcVar8 = pcStack_130;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)param_1;
            param_1 = param_1 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar8 = *param_1;
            param_1 = param_1 + 1;
            pcVar8 = pcVar8 + 1;
          }
          pcStack_130[uVar5] = '\0';
          uStack_12c = uVar5;
        }
        iStack_4 = 2;
        FUN_30004990(aiStack_104,auStack_134);
        uStack_f4 = 0;
        iStack_4._0_1_ = 3;
        FUN_30007f80(&DAT_30034de8,&uStack_124,aiStack_104);
        FUN_3000c0a0(aiStack_10c,&uStack_124,auStack_120);
        iStack_4 = CONCAT31(iStack_4._1_3_,2);
        FUN_300033d0(aiStack_104,'\x01');
        *(char **)(aiStack_10c[0] + 0x1c) = pcStack_140;
        iStack_4 = 0xffffffff;
        FUN_300033d0(auStack_134,'\x01');
      }
      (*DAT_3008fdf8)(local_13c);
    }
    else {
      (*DAT_3008fde8)(0,s_GL_FindImage__Invalid_version_fo_3002eb34,param_1);
      pcStack_140 = (char *)0x0;
    }
  }
  ExceptionList = pvStack_c;
  return pcStack_140;
}

