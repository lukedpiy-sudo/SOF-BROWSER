// rea decompile_all
// name: FUN_50059630
// address: 0x50059630
// body: available
// range: 0x50059630-0x50059ba1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_50059630(void *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  bool bVar14;
  longlong lVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_18;
  float local_14;
  int local_10;
  int local_4;
  
  iVar2 = DAT_5015d8c8;
  iVar3 = 1;
  iVar10 = -1;
  iVar12 = 0;
  local_4 = -1;
  local_18 = 0;
  local_14 = 9999999.0;
  iVar11 = -1;
  local_10 = -1;
  if (0 < DAT_5015d8c8) {
    piVar9 = (int *)(DAT_5015cca0 + 0x4d8);
    do {
      if ((piVar9[1] != 0) && (*piVar9 != 0)) {
        if (piVar9[0xf9] == 0) {
          iVar12 = iVar12 + 1;
          iVar10 = iVar3;
        }
        else if (iVar11 == -1) {
          iVar11 = iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      piVar9 = piVar9 + 0x119;
      local_10 = iVar10;
    } while (iVar3 <= DAT_5015d8c8);
  }
  pfVar8 = (float *)((int)param_1 + 0xc0);
  iVar10 = 0x20;
  do {
    if (*pfVar8 != 0.0) {
      local_18 = local_18 + 1;
    }
    pfVar8 = pfVar8 + 6;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar12 = local_18 + iVar12;
  if (iVar11 - local_10 == 1) {
    FUN_50059bb0(param_1,iVar11);
  }
  local_18 = 0;
  piVar9 = (int *)((int)param_1 + 0xb8);
  do {
    iVar10 = *piVar9;
    uVar18 = 0;
    uVar17 = 0;
    pcVar16 = s________50142ff0;
    puVar4 = FUN_500fe1e0((byte *)s_bot_name_i_50142fe4);
    iVar11 = (*DAT_5015cb4c)(puVar4,pcVar16,uVar17,uVar18);
    piVar9[-2] = iVar11;
    iVar3 = 7;
    bVar14 = true;
    pcVar16 = *(char **)(iVar11 + 4);
    pcVar13 = s________50142ff0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar14 = *pcVar16 == *pcVar13;
      pcVar16 = pcVar16 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar14);
    if (bVar14) {
      if (iVar10 != 0) {
        *(undefined1 *)(piVar9 + 1) = 1;
      }
    }
    else if (iVar10 == 0) {
      if ((float)piVar9[2] == 0.0) {
        if (iVar12 < iVar2 + -1) {
          piVar9[2] = (int)DAT_5015ccdc;
          *(undefined4 *)(iVar11 + 0x14) = 0;
        }
        else {
          (*DAT_5015cab0)(0,0xc19,*(char **)(iVar11 + 4));
          piVar9[-2] = 0;
          piVar9[-1] = 0;
          uVar18 = 0;
          uVar17 = 0;
          pcVar16 = s________50142ff0;
          *piVar9 = 0;
          *(undefined1 *)(piVar9 + 1) = 0;
          piVar9[3] = 0;
          piVar9[2] = 0;
          *(undefined1 *)((int)piVar9 + 5) = 0;
          puVar4 = FUN_500fe1e0((byte *)s_bot_name_i_50142fe4);
          puVar5 = (undefined4 *)(*DAT_5015cb4c)(puVar4,pcVar16,uVar17,uVar18);
          piVar9[-2] = (int)puVar5;
          (*DAT_5015cb50)(*puVar5,s________50142ff0);
          *(undefined4 *)(piVar9[-2] + 0x14) = 0;
        }
      }
    }
    else if (*(int *)(iVar11 + 0x14) != 0) {
      *(undefined1 *)(piVar9 + 1) = 1;
      *(undefined1 *)((int)piVar9 + 5) = 1;
      *(undefined4 *)(iVar11 + 0x14) = 0;
    }
    uVar18 = 0;
    uVar17 = 0;
    puVar4 = FUN_500fe1e0(&DAT_501430a0);
    puVar6 = FUN_500fe1e0((byte *)s_bot_team_i_50143094);
    iVar10 = (*DAT_5015cb4c)(puVar6,puVar4,uVar17,uVar18);
    piVar9[-1] = iVar10;
    iVar10 = (**(code **)(*DAT_5015c4d8 + 0x7c))();
    if ((((iVar10 != 0) && (iVar10 = *piVar9, iVar10 != 0)) && ((float)piVar9[3] != 0.0)) &&
       (*(int *)(piVar9[-1] + 0x14) != 0)) {
      lVar15 = __ftol();
      *(int *)(*(int *)(iVar10 + 0x74) + 0x324) = (int)lVar15;
      FUN_500f43a0(*piVar9,(uint *)(*(int *)(*piVar9 + 0x74) + 0xcc));
      *(undefined4 *)(piVar9[-1] + 0x14) = 0;
      (**(code **)(*DAT_5015c4d8 + 0x2c))(*piVar9,*(int *)(*piVar9 + 0x74) + 0xcc);
    }
    local_18 = local_18 + 1;
    piVar9 = piVar9 + 6;
  } while (local_18 < 0x20);
  iVar10 = 0;
  puVar5 = (undefined4 *)((int)param_1 + 0xb8);
  do {
    if (*(char *)(puVar5 + 1) != '\0') {
      FUN_50058070(param_1,(int *)*puVar5);
      uVar18 = 0;
      uVar17 = 0;
      pcVar16 = s________50142ff0;
      puVar5[-2] = 0;
      puVar5[-1] = 0;
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      *(undefined1 *)((int)puVar5 + 5) = 0;
      puVar4 = FUN_500fe1e0((byte *)s_bot_name_i_50142fe4);
      puVar7 = (undefined4 *)(*DAT_5015cb4c)(puVar4,pcVar16,uVar17,uVar18);
      puVar5[-2] = puVar7;
      fVar1 = DAT_5015ccdc;
      if (*(char *)((int)puVar5 + 5) == '\0') {
        (*DAT_5015cb50)(*puVar7,s________50142ff0);
      }
      else {
        *(undefined1 *)((int)puVar5 + 5) = 0;
        puVar5[2] = fVar1;
        puVar7[5] = 0;
      }
    }
    iVar10 = iVar10 + 1;
    puVar5 = puVar5 + 6;
  } while (iVar10 < 0x20);
  iVar10 = 0;
  pfVar8 = (float *)((int)param_1 + 0xc0);
  do {
    if (((*pfVar8 != 0.0) && (pfVar8[1] == 0.0)) && (*pfVar8 < local_14)) {
      local_14 = *pfVar8;
      local_4 = iVar10;
    }
    iVar10 = iVar10 + 1;
    pfVar8 = pfVar8 + 6;
  } while (iVar10 < 0x20);
  iVar11 = 1;
  iVar10 = -1;
  if (0 < iVar2) {
    piVar9 = (int *)(DAT_5015cca0 + 0x4d8);
    do {
      iVar3 = local_10;
      if (((piVar9[1] != 0) && (*piVar9 != 0)) &&
         ((iVar3 = iVar11, piVar9[0xf9] != 0 && (iVar3 = local_10, iVar10 == -1)))) {
        iVar10 = iVar11;
      }
      iVar11 = iVar11 + 1;
      piVar9 = piVar9 + 0x119;
      local_10 = iVar3;
    } while (iVar11 <= iVar2);
    if (iVar10 != -1) {
      bVar14 = 2 < iVar10 - iVar3;
      goto LAB_50059a01;
    }
  }
  bVar14 = true;
LAB_50059a01:
  if ((((-1 < local_4) &&
       (fVar1 = *(float *)((int)param_1 + 0x3b0) + 1.5,
       fVar1 < DAT_5015ccdc != (fVar1 == DAT_5015ccdc))) && (bVar14 != false)) &&
     (piVar9 = FUN_50057f80(&DAT_50159680,
                            *(char **)(*(int *)((int)param_1 + local_4 * 0x18 + 0xb0) + 4)),
     piVar9 != (int *)0x0)) {
    *(float *)((int)param_1 + 0x3b0) = DAT_5015ccdc;
    *(float *)((int)param_1 + local_4 * 0x18 + 0xc4) = DAT_5015ccdc;
    *(int **)((int)param_1 + local_4 * 0x18 + 0xb8) = piVar9;
    iVar10 = (**(code **)(*DAT_5015c4d8 + 0x7c))();
    if ((iVar10 != 0) && (*(int *)((int)param_1 + local_4 * 0x18 + 0xb4) != 0)) {
      lVar15 = __ftol();
      *(int *)(*(int *)(*(int *)((int)param_1 + local_4 * 0x18 + 0xb8) + 0x74) + 0x324) =
           (int)lVar15;
      iVar10 = *(int *)((int)param_1 + local_4 * 0x18 + 0xb8);
      FUN_500f43a0(iVar10,(uint *)(*(int *)(iVar10 + 0x74) + 0xcc));
      *(undefined4 *)(*(int *)((int)param_1 + local_4 * 0x18 + 0xb4) + 0x14) = 0;
      iVar10 = *(int *)((int)param_1 + iVar11 * 0x18 + 0xb8);
      (**(code **)(*DAT_5015c4d8 + 0x2c))(iVar10,*(int *)(iVar10 + 0x74) + 0xcc);
    }
  }
  if (*(float *)(DAT_5015c98c + 0x18) != 0.0) {
    uVar17 = FUN_50059d00(param_1,bVar14);
    return CONCAT31((int3)((uint)uVar17 >> 8),1);
  }
  iVar10 = 0;
  if (0 < iVar2) {
    piVar9 = (int *)(DAT_5015cca0 + 0x4d8);
    iVar11 = iVar2;
    do {
      if (((piVar9[1] != 0) && (*piVar9 != 0)) && (piVar9[0xf9] == 0)) {
        iVar10 = iVar10 + 1;
      }
      piVar9 = piVar9 + 0x119;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = 0;
  iVar12 = 0;
  pfVar8 = (float *)((int)param_1 + 0xc4);
  iVar3 = 0x20;
  do {
    if ((pfVar8[-1] != 0.0) && (iVar11 = iVar11 + 1, *pfVar8 == 0.0)) {
      iVar12 = iVar12 + 1;
    }
    pfVar8 = pfVar8 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar10 = iVar11 + iVar10;
  if ((iVar10 == iVar2) && (0 < iVar11)) {
    iVar10 = FUN_50059f00(param_1,iVar12,-1);
  }
  return CONCAT31((int3)((uint)iVar10 >> 8),1);
}

