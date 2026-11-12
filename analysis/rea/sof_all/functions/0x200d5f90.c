// rea decompile_all
// name: FUN_200d5f90
// address: 0x200d5f90
// body: available
// range: 0x200d5f90-0x200d6428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d5f90(void)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  int in_ECX;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  undefined1 local_200 [4];
  undefined1 auStack_1fc [4];
  int iStack_1f8;
  uint uStack_1f4;
  undefined4 local_1f0;
  char *pcStack_1ec;
  uint uStack_1e8;
  int local_1e0;
  int iStack_1dc;
  undefined1 auStack_1d8 [20];
  undefined1 auStack_1c4 [4];
  undefined1 auStack_1c0 [18];
  undefined1 uStack_1ae;
  undefined1 auStack_180 [28];
  undefined4 local_164;
  undefined1 auStack_13c [28];
  undefined4 local_120;
  undefined4 uStack_f8;
  undefined4 local_dc;
  undefined1 auStack_d8 [42];
  undefined1 auStack_ae [162];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ebdb;
  pvStack_c = ExceptionList;
  uVar15 = 0;
  local_164 = 0;
  local_dc = 0;
  local_120 = 0;
  local_1f0 = CONCAT31(local_1f0._1_3_,local_200[0]);
  ExceptionList = &pvStack_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  if (*(char *)(in_ECX + 0x140) != '\0') {
    FUN_200d5ce0();
    *(undefined1 *)(in_ECX + 0x140) = 0;
  }
  if (*(int **)(in_ECX + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x90) + 0xd4))();
    *(undefined4 *)(in_ECX + 0x90) = 0;
    *(undefined4 *)(in_ECX + 0x8c) = 0;
    *(undefined4 *)(in_ECX + 0x80) = 3;
    *(undefined1 *)(in_ECX + 0xbb) = 0;
  }
  if ((*(int *)(in_ECX + 0x168) != 0) &&
     (local_1e0 = (*(int *)(in_ECX + 0x16c) - *(int *)(in_ECX + 0x168)) / 0x14, local_1e0 != 0)) {
    if (*(int *)(in_ECX + 0x168) == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = (*(int *)(in_ECX + 0x16c) - *(int *)(in_ECX + 0x168)) / 0x14;
    }
    if (*(int *)(in_ECX + 0x50) == 0) {
      iStack_1f8 = 0;
    }
    else {
      iStack_1f8 = __ftol();
    }
    if (iVar13 + -1 < iStack_1f8) {
      iStack_1f8 = iVar13 + -1;
    }
    if (iStack_1f8 < 0) {
      iStack_1f8 = 0;
    }
    iVar13 = iStack_1f8 * 0x14;
    piVar1 = *(int **)(iVar13 + *(int *)(in_ECX + 0x168));
    iStack_1dc = iVar13;
    iVar4 = FUN_200d5a10(piVar1,1);
    *(int *)(in_ECX + 0x90) = iVar4;
    if (iVar4 != 0) {
      while( true ) {
        iVar5 = *(int *)(iVar13 + 8 + *(int *)(in_ECX + 0x168));
        iVar4 = iVar13 + *(int *)(in_ECX + 0x168);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar4 + 0xc) - iVar5 >> 2;
        }
        uStack_1f4 = uVar15;
        if (iVar5 <= (int)uVar15) break;
        iVar4 = *(int *)(*(int *)(iVar4 + 8) + uVar15 * 4);
        if ((iVar4 != 0) &&
           (piVar6 = (int *)FUN_200d5a10(iVar4,0), iVar13 = iStack_1dc, piVar6 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x3c))(uVar15 + 1,auStack_d8);
          piVar9 = *(int **)(in_ECX + 0x90);
          piVar7 = (int *)(**(code **)(*piVar9 + 0x88))();
          pcStack_1ec = (char *)(**(code **)(*piVar7 + 0x1c))(&local_dc);
          piVar7 = (int *)(**(code **)(*piVar6 + 0x88))();
          uVar8 = (**(code **)(*piVar7 + 0x1c))(auStack_ae);
          (**(code **)(*piVar9 + 0x70))(local_1f0,piVar6,uVar8);
          (**(code **)(*piVar6 + 8))(auStack_1c0);
          FUN_200a0fb0(uStack_f8);
          FUN_200a1100(auStack_13c,auStack_1c4);
          (**(code **)*piVar6)(auStack_180);
          iVar13 = iStack_1dc;
          uVar15 = uStack_1f4;
        }
        uVar15 = uVar15 + 1;
      }
      iVar13 = 0;
      iVar4 = (**(code **)(*piVar1 + 0x14))();
      if (0 < iVar4) {
        do {
          iVar13 = iVar13 + 1;
          (**(code **)(*piVar1 + 0x40))(iVar13,auStack_1d8);
          piVar6 = *(int **)(in_ECX + 0x90);
          uStack_1e8 = CONCAT31(uStack_1e8._1_3_,uStack_1ae);
          piVar9 = (int *)(**(code **)(*piVar6 + 0x88))();
          uVar8 = (**(code **)(*piVar9 + 0x1c))(&local_1e0);
          if ((short)uVar8 != 0) {
            (**(code **)(*piVar6 + 0x20))(uVar8,pcStack_1ec);
          }
          iVar4 = (**(code **)(*piVar1 + 0x14))();
        } while (iVar13 < iVar4);
      }
      if (*(int *)(in_ECX + 0x138) != 0) {
        puVar2 = *(undefined1 **)(iStack_1f8 * 0x40 + *(int *)(in_ECX + 0x148) + 8);
        puVar12 = &DAT_201116cc;
        if (puVar2 != (undefined1 *)0x0) {
          puVar12 = puVar2;
        }
        uVar15 = 0xffffffff;
        pcVar10 = s_ghoul_pmodels__20158c9c;
        do {
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        uVar11 = 0xffffffff;
        pcVar10 = puVar12 + (~uVar15 - 1);
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        uStack_1f4 = ~uVar11 - 1;
        cVar3 = FUN_2000a6c0(uStack_1f4,1);
        if (cVar3 != '\0') {
          pcVar10 = puVar12 + (~uVar15 - 1);
          pcVar16 = pcStack_1ec;
          for (uVar11 = uStack_1f4 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar15 = uStack_1f4 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar16 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar16 = pcVar16 + 1;
          }
          FUN_2000a6a0(uStack_1f4);
        }
        uVar15 = uStack_1e8;
        local_200[0] = 0x2e;
        auStack_1fc[0] = 0x2e;
        uVar11 = FUN_200c94a0(auStack_1fc,0xffffffff,1);
        iVar13 = FUN_200c94a0(local_200,0xffffffff,1);
        if (uStack_1e8 < uVar11) {
          FUN_201077fc();
        }
        uVar14 = uVar15 - iVar13;
        if (uStack_1e8 - uVar11 < uVar15 - iVar13) {
          uVar14 = uStack_1e8 - uVar11;
        }
        if (uVar14 != 0) {
          if (pcStack_1ec != (char *)0x0) {
            if (pcStack_1ec[-1] != '\0') {
              FUN_2000a6c0(uStack_1e8,0);
            }
            if (pcStack_1ec != (char *)0x0) {
              pcStack_1ec[-1] = '\0';
            }
          }
          FUN_200fa360(pcStack_1ec + uVar11,pcStack_1ec + uVar11 + uVar14,
                       (uStack_1e8 - uVar14) - uVar11);
          iVar13 = uStack_1e8 - uVar14;
          cVar3 = FUN_2000a6c0(iVar13,0);
          if (cVar3 != '\0') {
            FUN_2000a6a0(iVar13);
          }
        }
        pcVar10 = pcStack_1ec;
        if (pcStack_1ec == (char *)0x0) {
          pcVar10 = "";
        }
        Cvar_Set(**(undefined4 **)(in_ECX + 0x138),pcVar10);
      }
      if (*(int *)(in_ECX + 0x13c) != 0) {
        FUN_200d5bc0(piVar1);
      }
      if (*(int *)(in_ECX + 0x50) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = __ftol();
      }
      *(undefined4 *)(in_ECX + 0x130) = uVar8;
      if (*(int *)(in_ECX + 0x80) == 3) {
        FUN_200d7fd0();
        *(undefined4 *)(in_ECX + 0x80) = 2;
      }
    }
  }
  if (pcStack_1ec != (char *)0x0) {
    if (pcStack_1ec[-1] != '\0') {
      pcStack_1ec[-1] = pcStack_1ec[-1] + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_200f9f75(pcStack_1ec + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

