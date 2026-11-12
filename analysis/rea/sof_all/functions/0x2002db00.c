// rea decompile_all
// name: FUN_2002db00
// address: 0x2002db00
// body: available
// range: 0x2002db00-0x2002de81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2002db00(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *in_ECX;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 local_ac;
  undefined4 local_a8;
  void *pvStack_a4;
  int iStack_a0;
  float local_9c;
  float local_98;
  undefined4 *local_94;
  int *piStack_90;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010b116;
  local_c = ExceptionList;
  iVar7 = 1;
  bVar12 = true;
  pcVar9 = param_1;
  pcVar10 = &DAT_2015ee44;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar12 = *pcVar9 == *pcVar10;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  } while (bVar12);
  if (!bVar12) {
    ExceptionList = &local_c;
    local_94 = in_ECX;
    Com_sprintf(local_8c,0x80,s_effects__s_eft_2011f36c,param_1);
    iVar7 = FS_LoadFile(local_8c,&local_a8,0);
    if (iVar7 == -1) {
      Com_Printf(s_FX_System__Unable_to_find_file_e_20132b48,param_1);
    }
    else {
      local_ac = local_a8;
      fVar13 = (float10)FUN_20041cc0(&local_ac);
      local_98 = (float)fVar13;
      if (fVar13 <= (float10)3.0) {
        uVar4 = FUN_20041d00(&local_ac);
        *in_ECX = uVar4;
        FUN_20041d60(&local_ac);
        piVar5 = *(int **)in_ECX[4];
        if (piVar5 != (int *)in_ECX[4]) {
          do {
            (**(code **)(*(int *)piVar5[2] + 0x18))();
            FUN_200f9f75(piVar5[2]);
            piVar5 = (int *)*piVar5;
          } while (piVar5 != (int *)in_ECX[4]);
        }
        FUN_2008c530(&local_9c,*(undefined4 *)in_ECX[4],(undefined4 *)in_ECX[4]);
        puVar8 = (undefined4 *)in_ECX[4];
        puVar3 = (undefined4 *)*puVar8;
        while (puVar3 != puVar8) {
          puVar2 = (undefined4 *)*puVar3;
          FUN_200ba400(&piStack_90,puVar3);
          puVar3 = puVar2;
        }
        fVar13 = (float10)FUN_20041cc0(&local_ac);
        local_9c = (float)fVar13;
        iStack_a0 = 0;
        puVar8 = in_ECX;
        piVar5 = piStack_90;
        if (0.0 < local_9c) {
          do {
            FUN_20041cc0(&local_ac);
            uVar4 = __ftol();
            switch(uVar4) {
            case 0:
              pvStack_a4 = operator_new(0x24c);
              uStack_4 = 0;
              if (pvStack_a4 == (void *)0x0) {
LAB_2002dd4e:
                piVar5 = (int *)0x0;
              }
              else {
                piVar5 = (int *)FUN_200360a0();
              }
              break;
            case 1:
              pvStack_a4 = operator_new(100);
              uStack_4 = 1;
              if (pvStack_a4 == (void *)0x0) goto LAB_2002dd4e;
              piVar5 = (int *)FUN_2003c660();
              break;
            case 2:
              pvStack_a4 = operator_new(0x38);
              uStack_4 = 2;
              if (pvStack_a4 == (void *)0x0) goto LAB_2002dd4e;
              piVar5 = (int *)FUN_2003c830();
              break;
            case 3:
              pvStack_a4 = operator_new(100);
              uStack_4 = 3;
              if (pvStack_a4 == (void *)0x0) goto LAB_2002dd4e;
              piVar5 = (int *)FUN_2003ca20();
              break;
            case 4:
              pvStack_a4 = operator_new(0x2c);
              uStack_4 = 4;
              if (pvStack_a4 == (void *)0x0) goto LAB_2002dd4e;
              piVar5 = (int *)FUN_2003ce10();
              break;
            default:
              goto switchD_2002dc7f_default;
            }
            uStack_4 = 0xffffffff;
switchD_2002dc7f_default:
            iVar7 = (**(code **)(*piVar5 + 0x24))(&local_ac);
            if (iVar7 == -1) goto LAB_2002dbab;
            if (2.0 < local_98) {
              FUN_20041d60(&local_ac);
            }
            iVar7 = in_ECX[4];
            piVar11 = *(int **)(iVar7 + 4);
            piVar6 = operator_new(0xc);
            *piVar6 = iVar7;
            if (piVar11 == (int *)0x0) {
              piVar11 = piVar6;
            }
            piVar6[1] = (int)piVar11;
            *(int **)(iVar7 + 4) = piVar6;
            *(int **)piVar6[1] = piVar6;
            if (piVar6 + 2 != (int *)0x0) {
              piVar6[2] = (int)piVar5;
            }
            iStack_a0 = iStack_a0 + 1;
            in_ECX[5] = in_ECX[5] + 1;
            puVar8 = local_94;
          } while ((float)iStack_a0 < local_9c);
        }
        if (local_98 <= 1.0) {
          FUN_20041d80(puVar8 + 1);
        }
        else {
          FUN_20041d60(&local_ac);
          if ((float)puVar8[6] < (float)puVar8[1]) {
            puVar8[1] = puVar8[6];
          }
          if ((float)puVar8[7] < (float)puVar8[2]) {
            puVar8[2] = puVar8[7];
          }
        }
        FS_FreeFile(local_a8);
        iVar7 = 0x28 - (int)param_1;
        do {
          cVar1 = *param_1;
          param_1[(int)puVar8 + iVar7] = cVar1;
          param_1 = param_1 + 1;
        } while (cVar1 != '\0');
        puVar8[9] = 0;
        puVar8[8] = 0;
      }
      else {
LAB_2002dbab:
        FS_FreeFile(local_a8);
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

