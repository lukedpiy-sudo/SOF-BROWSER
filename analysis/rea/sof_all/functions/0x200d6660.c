// rea decompile_all
// name: FUN_200d6660
// address: 0x200d6660
// body: available
// range: 0x200d6660-0x200d6a8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d6660(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_1c5;
  uint local_1c4;
  int local_1c0;
  int *piStack_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8 [4];
  char *pcStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  uint uStack_198;
  char acStack_18c [52];
  char local_158 [128];
  undefined1 auStack_d8 [96];
  undefined1 auStack_78 [108];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ec44;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200d72b0(param_1,param_2,4);
  *(undefined1 *)(in_ECX + 0x51) = local_1c5;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x56] = 0;
  *(undefined1 *)(in_ECX + 0x55) = local_1c5;
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x5a] = 0;
  *(undefined1 *)(in_ECX + 0x59) = local_1c5;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  *in_ECX = &PTR_FUN_20112990;
  local_1b8 = CONCAT31(local_1b8._1_3_,local_1c5);
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  FUN_2000a5b0(0);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_200eafe0(2);
  pcVar2 = (char *)FUN_200eb440(1);
  iVar5 = -1;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (iVar5 == -2) {
    in_ECX[0x4e] = 0;
    in_ECX[0x4f] = 0;
    uVar3 = FUN_200eb440(0);
    Com_sprintf(local_158,0x80,s_ghoul_pmodels__s_gpm_20158cac,uVar3);
  }
  else {
    uVar12 = 0;
    puVar11 = &DAT_2015ee44;
    uVar3 = FUN_200eb440(0);
    uVar3 = Cvar_Get(uVar3,puVar11,uVar12);
    in_ECX[0x4e] = uVar3;
    uVar13 = 0;
    uVar12 = 0;
    puVar11 = &DAT_2015ee44;
    uVar3 = FUN_200eb440(1);
    uVar3 = Cvar_Get(uVar3,puVar11,uVar12,uVar13);
    in_ECX[0x4f] = uVar3;
    iVar5 = 0;
    do {
      cVar1 = s_ghoul_pmodels___gpm_20158cc4[iVar5];
      local_158[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
    } while (cVar1 != '\0');
  }
  FUN_20025bb0(in_ECX + 0x51,local_158,1);
  FUN_200c9130(in_ECX + 0x51);
  local_1c4 = 0;
  local_1c0 = 0;
  do {
    if ((in_ECX[0x52] == 0) || ((uint)((int)(in_ECX[0x53] - in_ECX[0x52]) >> 6) <= local_1c4)) {
      *(undefined1 *)(in_ECX + 0x50) = 1;
      in_ECX[0x4c] = 0xffffffff;
      in_ECX[0x4d] = 0xffffffff;
      in_ECX[0x23] = 0;
      if (pcStack_1a4 != (char *)0x0) {
        if (pcStack_1a4[-1] == '\0') {
          FUN_200f9f75(pcStack_1a4 + -1);
        }
        else {
          pcStack_1a4[-1] = pcStack_1a4[-1] + -1;
        }
      }
      pcStack_1a4 = (char *)0x0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      FUN_200f9f75(local_1b4);
      ExceptionList = pvStack_c;
      return;
    }
    puVar11 = *(undefined1 **)(in_ECX[0x52] + local_1c0 + 8);
    puVar7 = &DAT_201116cc;
    if (puVar11 != (undefined1 *)0x0) {
      puVar7 = puVar11;
    }
    uVar6 = 0xffffffff;
    pcVar2 = s_ghoul_pmodels__20158c9c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = puVar7 + (~uVar6 - 1);
    iVar5 = -(int)pcVar2;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(local_158 + iVar5)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    piVar4 = (int *)FUN_200d6440(local_158);
    if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 4))(), iVar5 != 0)) {
      piStack_1bc = piVar4;
      FUN_2009e4c0(local_1b4,local_1b0);
      iVar9 = 0;
      iVar5 = (**(code **)(*piVar4 + 0x10))();
      if (0 < iVar5) {
        do {
          iVar9 = iVar9 + 1;
          cVar1 = (**(code **)(*piVar4 + 0x3c))(iVar9,auStack_d8);
          if (cVar1 != '\0') {
            uStack_19c = FUN_200d6440(auStack_78);
            FUN_200a8890(local_1b8,1,&uStack_19c);
          }
          iVar5 = (**(code **)(*piVar4 + 0x10))();
        } while (iVar9 < iVar5);
      }
      FUN_200e4150(in_ECX[0x5b],1,&piStack_1bc);
      (**(code **)(*piVar4 + 0x30))(acStack_18c);
      iVar5 = 0;
      for (uVar6 = 0;
          (in_ECX[0x56] != 0 && (uVar6 < (uint)((int)(in_ECX[0x57] - in_ECX[0x56]) / 0x14)));
          uVar6 = uVar6 + 1) {
        pcVar2 = *(char **)(in_ECX[0x56] + iVar5 + 4);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "";
        }
        iVar9 = __strcmpi(acStack_18c,pcVar2);
        if (iVar9 == 0) break;
        iVar5 = iVar5 + 0x14;
      }
      if (in_ECX[0x56] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (int)(in_ECX[0x57] - in_ECX[0x56]) / 0x14;
      }
      if (uVar6 == uVar8) {
        uVar6 = 0xffffffff;
        pcVar2 = acStack_18c;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6 - 1;
        cVar1 = FUN_2000a6c0(uVar6,1);
        if (cVar1 != '\0') {
          pcVar2 = acStack_18c;
          pcVar10 = pcStack_1a4;
          for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
            pcVar2 = pcVar2 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar10 = *pcVar2;
            pcVar2 = pcVar2 + 1;
            pcVar10 = pcVar10 + 1;
          }
          pcStack_1a4[uVar6] = '\0';
          uStack_1a0 = uVar6;
        }
        uStack_198 = local_1c4;
        FUN_200e3e50(in_ECX[0x57],1,local_1a8);
      }
    }
    local_1c4 = local_1c4 + 1;
    local_1c0 = local_1c0 + 0x40;
  } while( true );
}

