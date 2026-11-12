// rea decompile_all
// name: FUN_200cf890
// address: 0x200cf890
// body: available
// range: 0x200cf890-0x200d068d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200cf890(void *param_1)

{
  char cVar1;
  void *pvVar2;
  byte bVar3;
  short sVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int in_ECX;
  uint uVar12;
  bool bVar13;
  float10 fVar14;
  undefined1 *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e792;
  local_c = ExceptionList;
  pcVar16 = &DAT_2015897c;
  ExceptionList = &local_c;
  pcVar5 = (char *)FUN_200eb440(0);
  iVar6 = __strcmpi(pcVar5,pcVar16);
  if (iVar6 == 0) {
    FUN_200eafe0(2);
    pcVar5 = (char *)FUN_200eb440(1);
    pcVar16 = (char *)FUN_200eb440(0);
    param_1 = operator_new(0x2c);
    local_4 = 0;
    if (param_1 == (void *)0x0) {
LAB_200cf921:
      *(undefined1 *)(in_ECX + 0x60) = 1;
      *(undefined4 *)(in_ECX + 0x88) = 0;
      ExceptionList = local_c;
      return 1;
    }
  }
  else {
    pcVar16 = &DAT_20158974;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(4);
      uVar7 = FUN_200eb440(3);
      uVar8 = FUN_200eb440(2);
      param_1 = (void *)FUN_200eb440(1);
      uVar9 = FUN_200eb440(0);
      local_10 = operator_new(0x2c);
      local_4 = 1;
      if (local_10 != (void *)0x0) {
        uVar7 = FUN_200c6ff0(*(undefined4 *)(in_ECX + 0x88),uVar9,param_1,uVar8,uVar7);
        *(undefined4 *)(in_ECX + 0x88) = uVar7;
        *(undefined1 *)(in_ECX + 0x60) = 1;
        ExceptionList = local_c;
        return 1;
      }
      goto LAB_200cf921;
    }
    pcVar16 = &DAT_2015896c;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(2);
      uVar7 = FUN_200eb440(0);
      iVar6 = FUN_2004b660(0,uVar7);
      if (iVar6 == 0) {
        ExceptionList = local_c;
        return 1;
      }
      do {
        uVar7 = FUN_200eb440(1);
        param_1 = operator_new(0x2c);
        local_4 = 2;
        if (param_1 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_200c6ee0(*(undefined4 *)(in_ECX + 0x88),iVar6,uVar7);
        }
        local_4 = 0xffffffff;
        *(undefined4 *)(in_ECX + 0x88) = uVar7;
        *(undefined1 *)(in_ECX + 0x60) = 1;
        uVar7 = FUN_200eb440(0);
        iVar6 = FUN_2004b660(iVar6 + 1,uVar7);
      } while (iVar6 != 0);
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = &DAT_20158964;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(1);
      uVar7 = FUN_200eb440(0);
      puVar10 = (undefined4 *)FUN_200c9de0(uVar7);
      *(undefined4 *)(in_ECX + 0x38) = *puVar10;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = s_atint_2015895c;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(1);
      uVar7 = FUN_200eb440(0);
      puVar10 = (undefined4 *)FUN_200c9de0(uVar7);
      *(undefined4 *)(in_ECX + 0x3c) = *puVar10;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = s_btint_20158954;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(1);
      uVar7 = FUN_200eb440(0);
      puVar10 = (undefined4 *)FUN_200c9de0(uVar7);
      *(undefined4 *)(in_ECX + 0x40) = *puVar10;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = s_ctint_2015894c;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(1);
      uVar7 = FUN_200eb440(0);
      puVar10 = (undefined4 *)FUN_200c9de0(uVar7);
      *(undefined4 *)(in_ECX + 0x44) = *puVar10;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = s_dtint_20158944;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(1);
      uVar7 = FUN_200eb440(0);
      puVar10 = (undefined4 *)FUN_200c9de0(uVar7);
      *(undefined4 *)(in_ECX + 0x48) = *puVar10;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = s_noshade_2015893c;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      *(undefined1 *)(in_ECX + 0x65) = 1;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = s_noscale_20158934;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      *(undefined1 *)(in_ECX + 0x66) = 1;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = s_border_20158348;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(3);
      if (*(int *)(in_ECX + 0x68) != 0) {
        FUN_200f9f75(*(int *)(in_ECX + 0x68));
      }
      param_1 = operator_new(0x20);
      local_4 = 3;
      if (param_1 == (void *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        uVar7 = FUN_200eb440(2);
        uVar17 = 0x3f800000;
        uVar7 = FUN_200c9de0(uVar7);
        uVar8 = FUN_200eb440(1);
        uVar9 = FUN_200eb440(0);
        piVar11 = (int *)FUN_200c46d0(uVar9,uVar8,uVar7,uVar17);
      }
      *(int **)(in_ECX + 0x68) = piVar11;
      if (piVar11 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar11;
      }
      param_1 = (void *)(iVar6 * 2);
      uVar7 = __ftol();
      *(undefined4 *)(in_ECX + 0x28) = uVar7;
      if (piVar11 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar11;
      }
      param_1 = (void *)(iVar6 * 2);
      uVar7 = __ftol();
      *(undefined4 *)(in_ECX + 0x2c) = uVar7;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = s_width_2015892c;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(1);
      uVar7 = FUN_200eb440(0);
      uVar7 = FUN_200f9e13(uVar7);
      *(undefined4 *)(in_ECX + 0x20) = uVar7;
      if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = **(int **)(in_ECX + 0x68);
      }
      param_1 = (void *)(iVar6 * 2);
      uVar7 = __ftol();
      *(undefined4 *)(in_ECX + 0x28) = uVar7;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = s_height_20158924;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 == 0) {
      FUN_200eafe0(1);
      uVar7 = FUN_200eb440(0);
      param_1 = (void *)FUN_200f9e13(uVar7);
      if (*(int *)(in_ECX + 0x30) < (int)param_1) {
        *(void **)(in_ECX + 0x24) = param_1;
        if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = **(int **)(in_ECX + 0x68);
        }
        param_1 = (void *)(iVar6 * 2);
        uVar7 = __ftol();
        *(undefined4 *)(in_ECX + 0x2c) = uVar7;
      }
      uVar7 = FUN_200eb440(0);
      uVar7 = FUN_200f9e13(uVar7);
      *(undefined4 *)(in_ECX + 0x30) = uVar7;
      ExceptionList = local_c;
      return 1;
    }
    pcVar16 = &DAT_2015891c;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar16);
    if (iVar6 != 0) {
      pcVar16 = &DAT_201588fc;
      pcVar5 = (char *)FUN_200eb440(0);
      iVar6 = __strcmpi(pcVar5,pcVar16);
      if (iVar6 != 0) {
        pcVar16 = &DAT_201588e4;
        pcVar5 = (char *)FUN_200eb440(0);
        iVar6 = __strcmpi(pcVar5,pcVar16);
        if (iVar6 == 0) {
          FUN_200eafe0(1);
          uVar9 = 0;
          uVar8 = 0;
          puVar15 = &DAT_2015ee44;
          uVar7 = FUN_200eb440(0);
          iVar6 = Cvar_Get(uVar7,puVar15,uVar8,uVar9);
          *(int *)(in_ECX + 0x50) = iVar6;
          if (iVar6 != 0) {
            ExceptionList = local_c;
            return 1;
          }
          *(undefined1 *)(*(int *)(in_ECX + 4) + 0x8a) = 0;
          ExceptionList = local_c;
          return 1;
        }
        pcVar16 = s_cvari_201588dc;
        pcVar5 = (char *)FUN_200eb440(0);
        iVar6 = __strcmpi(pcVar5,pcVar16);
        if (iVar6 == 0) {
          FUN_200eafe0(1);
          uVar9 = 0;
          uVar8 = 0x20;
          puVar15 = &DAT_2011c4ac;
          uVar7 = FUN_200eb440(0);
          iVar6 = Cvar_Get(uVar7,puVar15,uVar8,uVar9);
          *(int *)(in_ECX + 0x50) = iVar6;
          if (iVar6 != 0) {
            ExceptionList = local_c;
            return 1;
          }
          *(undefined1 *)(*(int *)(in_ECX + 4) + 0x8a) = 0;
          ExceptionList = local_c;
          return 1;
        }
        pcVar16 = &DAT_201588d8;
        pcVar5 = (char *)FUN_200eb440(0);
        iVar6 = __strcmpi(pcVar5,pcVar16);
        if (iVar6 == 0) {
          FUN_200eafe0(1);
          uVar7 = FUN_200eb440(0);
          fVar14 = (float10)FUN_200fafcc(uVar7);
          *(float *)(in_ECX + 0x58) = (float)fVar14;
          *(undefined1 *)(in_ECX + 0x60) = 1;
          ExceptionList = local_c;
          return 1;
        }
        pcVar16 = &DAT_201588d4;
        pcVar5 = (char *)FUN_200eb440(0);
        iVar6 = __strcmpi(pcVar5,pcVar16);
        if (iVar6 == 0) {
          FUN_200eafe0(1);
          uVar7 = FUN_200eb440(0);
          fVar14 = (float10)FUN_200fafcc(uVar7);
          *(float *)(in_ECX + 0x5c) = (float)fVar14;
          ExceptionList = local_c;
          return 1;
        }
        pcVar16 = &DAT_201588d0;
        pcVar5 = (char *)FUN_200eb440(0);
        iVar6 = __strcmpi(pcVar5,pcVar16);
        if (iVar6 != 0) {
          pcVar16 = &DAT_201588c8;
          pcVar5 = (char *)FUN_200eb440(0);
          iVar6 = __strcmpi(pcVar5,pcVar16);
          if (iVar6 == 0) {
            FUN_200eafe0(1);
            uVar7 = FUN_200eb440(0);
            param_1 = (void *)FUN_200f9e13(uVar7);
            uVar7 = __ftol();
            *(undefined4 *)(in_ECX + 0x14) = uVar7;
            ExceptionList = local_c;
            return 1;
          }
          pcVar16 = &DAT_201588c0;
          pcVar5 = (char *)FUN_200eb440(0);
          iVar6 = __strcmpi(pcVar5,pcVar16);
          if (iVar6 == 0) {
            FUN_200eafe0(1);
            uVar7 = FUN_200eb440(0);
            param_1 = (void *)FUN_200f9e13(uVar7);
            uVar7 = __ftol();
            *(undefined4 *)(in_ECX + 0x18) = uVar7;
            ExceptionList = local_c;
            return 1;
          }
          pcVar16 = &DAT_201588bc;
          pcVar5 = (char *)FUN_200eb440(0);
          iVar6 = __strcmpi(pcVar5,pcVar16);
          if (iVar6 == 0) {
            uVar7 = FUN_200e63b0(1);
            *(undefined4 *)(in_ECX + 0x34) = uVar7;
            ExceptionList = local_c;
            return 1;
          }
          pcVar16 = s_noborder_201588b0;
          pcVar5 = (char *)FUN_200eb440(0);
          iVar6 = __strcmpi(pcVar5,pcVar16);
          if (iVar6 == 0) {
            if (*(int *)(in_ECX + 0x68) == 0) {
              ExceptionList = local_c;
              return 1;
            }
            FUN_200f9f75(*(int *)(in_ECX + 0x68));
            *(undefined4 *)(in_ECX + 0x68) = 0;
            ExceptionList = local_c;
            return 1;
          }
          pcVar16 = &DAT_201588a8;
          pcVar5 = (char *)FUN_200eb440(0);
          iVar6 = __strcmpi(pcVar5,pcVar16);
          if (iVar6 == 0) {
            FUN_200eafe0(1);
            piVar11 = *(int **)(*(int *)(in_ECX + 4) + 0x38);
            if (piVar11 == (int *)0x0) {
              FUN_200eb490(pvVar2,s_No_ghoul_model_to_bolt_to_2015883c);
              ExceptionList = local_c;
              return 1;
            }
            *(int **)(in_ECX + 0x7c) = piVar11;
            *(int *)(in_ECX + 0xc) = piVar11[3];
            *(int *)(in_ECX + 0x10) = piVar11[4];
            piVar11 = (int *)(**(code **)(*piVar11 + 0xc))();
            param_1 = (void *)*piVar11;
            uVar7 = FUN_200eb440(0);
            sVar4 = (**(code **)((int)param_1 + 0x1c))(uVar7);
            *(short *)(in_ECX + 0x84) = sVar4;
            *(undefined1 *)(in_ECX + 0x62) = 1;
            if (sVar4 == 0) {
              FUN_200eb490(pvVar2,s_Could_not_find_part_to_bolt_to_2015881c);
              ExceptionList = local_c;
              return 1;
            }
LAB_200d020c:
            FUN_200cf570(&local_10,&param_1);
            *(undefined4 *)(in_ECX + 0x80) = 1;
            ExceptionList = local_c;
            return 1;
          }
          pcVar16 = s_bbolt_201588a0;
          pcVar5 = (char *)FUN_200eb440(0);
          iVar6 = __strcmpi(pcVar5,pcVar16);
          if (iVar6 == 0) {
            FUN_200eafe0(1);
            piVar11 = (int *)FUN_200e63a0();
            if (piVar11 == (int *)0x0) {
              FUN_200eb490(pvVar2,s_No_ghoul_model_to_bolt_to_2015883c);
              ExceptionList = local_c;
              return 1;
            }
            *(int **)(in_ECX + 0x7c) = piVar11;
            *(int *)(in_ECX + 0xc) = piVar11[3];
            *(int *)(in_ECX + 0x10) = piVar11[4];
            piVar11 = (int *)(**(code **)(*piVar11 + 0xc))();
            param_1 = (void *)*piVar11;
            uVar7 = FUN_200eb440(0);
            sVar4 = (**(code **)((int)param_1 + 0x1c))(uVar7);
            *(short *)(in_ECX + 0x84) = sVar4;
            *(undefined1 *)(in_ECX + 0x62) = 1;
            if (sVar4 == 0) {
              FUN_200eb490(pvVar2,s_Could_not_find_part_to_bolt_to_2015881c);
              ExceptionList = local_c;
              return 1;
            }
            goto LAB_200d020c;
          }
          pcVar16 = s_align_20158898;
          pcVar5 = (char *)FUN_200eb440(0);
          iVar6 = __strcmpi(pcVar5,pcVar16);
          if (iVar6 == 0) {
            FUN_200eafe0(1);
            pcVar16 = &DAT_20158288;
            pcVar5 = (char *)FUN_200eb440(0);
            iVar6 = __strcmpi(pcVar5,pcVar16);
            if (iVar6 != 0) {
              pcVar16 = s_right_20158290;
              pcVar5 = (char *)FUN_200eb440(0);
              iVar6 = __strcmpi(pcVar5,pcVar16);
              if (iVar6 == 0) {
                *(undefined4 *)(in_ECX + 0x4c) = 3;
                ExceptionList = local_c;
                return 1;
              }
              pcVar16 = s_center_20158298;
              pcVar5 = (char *)FUN_200eb440(0);
              iVar6 = __strcmpi(pcVar5,pcVar16);
              if (iVar6 == 0) {
                *(undefined4 *)(in_ECX + 0x4c) = 1;
                ExceptionList = local_c;
                return 1;
              }
              FUN_200eb490(pvVar2,s_Invalid_align_parameter_20158804);
            }
            *(undefined4 *)(in_ECX + 0x4c) = 2;
            ExceptionList = local_c;
            return 1;
          }
          pcVar16 = &DAT_20158890;
          pcVar5 = (char *)FUN_200eb440(0);
          iVar6 = __strcmpi(pcVar5,pcVar16);
          if (iVar6 == 0) {
            FUN_200eafe0(2);
            uVar7 = FUN_200eb440(0);
            fVar14 = (float10)FUN_200216d0(uVar7);
            param_1 = (void *)(float)fVar14;
            uVar7 = FUN_200eb440(1);
            fVar14 = (float10)FUN_200fafcc(uVar7);
            if (fVar14 <= (float10)(float)param_1) goto LAB_200d03d5;
          }
          else {
            pcVar16 = &DAT_20158888;
            pcVar5 = (char *)FUN_200eb440(0);
            iVar6 = __strcmpi(pcVar5,pcVar16);
            if (iVar6 == 0) {
              FUN_200eafe0(2);
              uVar7 = FUN_200eb440(0);
              fVar14 = (float10)FUN_200216d0(uVar7);
              param_1 = (void *)(float)fVar14;
              uVar7 = FUN_200eb440(1);
              fVar14 = (float10)FUN_200fafcc(uVar7);
              bVar13 = (float10)(float)param_1 <= fVar14;
            }
            else {
              pcVar16 = &DAT_20158880;
              pcVar5 = (char *)FUN_200eb440(0);
              iVar6 = __strcmpi(pcVar5,pcVar16);
              if (iVar6 == 0) {
                FUN_200eafe0(2);
                uVar7 = FUN_200eb440(0);
                fVar14 = (float10)FUN_200216d0(uVar7);
                param_1 = (void *)(float)fVar14;
                uVar7 = FUN_200eb440(1);
                fVar14 = (float10)FUN_200fafcc(uVar7);
                if ((float10)(float)param_1 <= fVar14) {
                  *(undefined1 *)(in_ECX + 0x67) = 1;
                  ExceptionList = local_c;
                  return 1;
                }
                goto LAB_200d03d5;
              }
              pcVar16 = &DAT_20158878;
              pcVar5 = (char *)FUN_200eb440(0);
              iVar6 = __strcmpi(pcVar5,pcVar16);
              if (iVar6 == 0) {
                FUN_200eafe0(2);
                uVar7 = FUN_200eb440(0);
                fVar14 = (float10)FUN_200216d0(uVar7);
                param_1 = (void *)(float)fVar14;
                uVar7 = FUN_200eb440(1);
                fVar14 = (float10)FUN_200fafcc(uVar7);
                bVar13 = fVar14 < (float10)(float)param_1 == (fVar14 == (float10)(float)param_1);
              }
              else {
                pcVar16 = &DAT_20158870;
                pcVar5 = (char *)FUN_200eb440(0);
                iVar6 = __strcmpi(pcVar5,pcVar16);
                if (iVar6 == 0) {
                  FUN_200eafe0(2);
                  uVar7 = FUN_200eb440(0);
                  fVar14 = (float10)FUN_200216d0(uVar7);
                  param_1 = (void *)(float)fVar14;
                  uVar7 = FUN_200eb440(1);
                  fVar14 = (float10)FUN_200fafcc(uVar7);
                  if (fVar14 != (float10)(float)param_1) {
                    *(undefined1 *)(in_ECX + 0x67) = 1;
                    ExceptionList = local_c;
                    return 1;
                  }
                  goto LAB_200d03d5;
                }
                pcVar16 = &DAT_20158868;
                pcVar5 = (char *)FUN_200eb440(0);
                iVar6 = __strcmpi(pcVar5,pcVar16);
                if (iVar6 != 0) {
                  pcVar16 = s_ifset_20158860;
                  pcVar5 = (char *)FUN_200eb440(0);
                  iVar6 = __strcmpi(pcVar5,pcVar16);
                  if (iVar6 == 0) {
                    FUN_200eafe0(2);
                    uVar7 = FUN_200eb440(1);
                    bVar3 = FUN_200f9e13(uVar7);
                    uVar7 = FUN_200eb440(0);
                    FUN_200216d0(uVar7);
                    uVar12 = __ftol();
                    *(bool *)(in_ECX + 0x67) = (uVar12 & 1 << (bVar3 & 0x1f)) != 0;
                    ExceptionList = local_c;
                    return 1;
                  }
                  pcVar16 = s_ifclr_20158858;
                  pcVar5 = (char *)FUN_200eb440(0);
                  iVar6 = __strcmpi(pcVar5,pcVar16);
                  if (iVar6 == 0) {
                    FUN_200eafe0(2);
                    uVar7 = FUN_200eb440(1);
                    bVar3 = FUN_200f9e13(uVar7);
                    uVar7 = FUN_200eb440(0);
                    FUN_200216d0(uVar7);
                    uVar12 = __ftol();
                    *(bool *)(in_ECX + 0x67) = (uVar12 & 1 << (bVar3 & 0x1f)) == 0;
                    ExceptionList = local_c;
                    return 1;
                  }
                  ExceptionList = local_c;
                  return 0;
                }
                FUN_200eafe0(2);
                uVar7 = FUN_200eb440(0);
                fVar14 = (float10)FUN_200216d0(uVar7);
                param_1 = (void *)(float)fVar14;
                uVar7 = FUN_200eb440(1);
                fVar14 = (float10)FUN_200fafcc(uVar7);
                bVar13 = fVar14 != (float10)(float)param_1;
              }
            }
            if (bVar13) {
LAB_200d03d5:
              *(undefined1 *)(in_ECX + 0x67) = 0;
              ExceptionList = local_c;
              return 1;
            }
          }
          *(undefined1 *)(in_ECX + 0x67) = 1;
          ExceptionList = local_c;
          return 1;
        }
        FUN_200eafe0(1);
        pcVar5 = (char *)FUN_200eb440(0);
        uVar12 = 0xffffffff;
        pcVar16 = pcVar5;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 != '\0');
        param_1 = (void *)(~uVar12 - 1);
        if (0xfffffffd < param_1) {
          FUN_201075d0();
        }
        uVar12 = (uint)param_1;
        *(undefined4 *)(in_ECX + 0x74) = 0;
        if ((*(int *)(in_ECX + 0x70) == 0) || (*(char *)(*(int *)(in_ECX + 0x70) + -1) == '\0')) {
          if (param_1 == (void *)0x0) {
            FUN_2000a5b0(1);
            *(undefined1 *)(in_ECX + 0x60) = 1;
            ExceptionList = local_c;
            return 1;
          }
          if ((*(uint *)(in_ECX + 0x78) < 0x20) && (param_1 <= *(uint *)(in_ECX + 0x78)))
          goto LAB_200d0041;
          FUN_2000a5b0(1);
        }
        else if (param_1 == (void *)0x0) {
          FUN_2000a5b0(1);
          *(undefined1 *)(in_ECX + 0x60) = 1;
          ExceptionList = local_c;
          return 1;
        }
        FUN_2000a840(uVar12);
LAB_200d0041:
        pcVar16 = *(char **)(in_ECX + 0x70);
        for (uVar12 = (uint)param_1 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar12 = (uint)param_1 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        *(void **)(in_ECX + 0x74) = param_1;
        *(undefined1 *)((int)param_1 + *(int *)(in_ECX + 0x70)) = 0;
        *(undefined1 *)(in_ECX + 0x60) = 1;
        ExceptionList = local_c;
        return 1;
      }
      param_1 = operator_new(0x2c);
      local_4 = 5;
      if (param_1 == (void *)0x0) goto LAB_200cf921;
      uVar7 = *(undefined4 *)(in_ECX + 0x88);
      pcVar5 = s_menu__menu_prev_201588ec;
      pcVar16 = s_mouse1_20158904;
      goto LAB_200cf909;
    }
    param_1 = operator_new(0x2c);
    local_4 = 4;
    if (param_1 == (void *)0x0) goto LAB_200cf921;
    pcVar5 = s_menu__menu_next_2015890c;
    pcVar16 = s_mouse1_20158904;
  }
  uVar7 = *(undefined4 *)(in_ECX + 0x88);
LAB_200cf909:
  uVar7 = FUN_200c6db0(uVar7,pcVar16,pcVar5);
  *(undefined4 *)(in_ECX + 0x88) = uVar7;
  *(undefined1 *)(in_ECX + 0x60) = 1;
  ExceptionList = local_c;
  return 1;
}

