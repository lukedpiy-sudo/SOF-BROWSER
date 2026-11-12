// rea decompile_all
// name: FUN_500f4730
// address: 0x500f4730
// body: available
// range: 0x500f4730-0x500f4ce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f4730(int param_1,uint *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  undefined1 *puVar14;
  char *pcVar15;
  int *piStack_438;
  int *piStack_434;
  int iStack_430;
  uint auStack_400 [32];
  char acStack_380 [128];
  char acStack_300 [128];
  uint auStack_280 [32];
  undefined1 local_200 [128];
  char acStack_180 [128];
  undefined1 local_100 [128];
  undefined1 auStack_80 [128];
  
  bVar1 = FUN_500fe4e0(param_2);
  if (!bVar1) {
    pcVar3 = s__name_badinfo_skin_mullins_5015458c;
    do {
      cVar2 = *pcVar3;
      *(char *)((int)(param_2 + -0x14055163) + (int)pcVar3) = cVar2;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
  }
  pcVar3 = FUN_500fe320((byte *)param_2,&DAT_50154584);
  iVar4 = __strcmpi((char *)(*(int *)(param_1 + 0x74) + 0x2cc),pcVar3);
  if (iVar4 != 0) {
    _strncpy((char *)(*(int *)(param_1 + 0x74) + 0x2cc),pcVar3,0xf);
    iVar4 = param_1 - DAT_5015cca0;
    FUN_500efbc0(param_1,(int)local_100);
    FUN_500efca0(param_1,(int)local_200);
    puVar6 = local_100;
    puVar14 = local_200;
    iVar10 = *(int *)(param_1 + 0x74) + 0x2cc;
    pcVar3 = s__s__s__s_0_501545a8;
    puVar5 = FUN_500fe1e0((byte *)s__s__s__s_0_501545a8);
    (*DAT_5015cb00)(iVar4 / 0x464 + 0x586,puVar5,pcVar3,iVar10,puVar14,puVar6);
  }
  pcVar3 = FUN_500fe320((byte *)param_2,(byte *)s_spectator_50144de8);
  if ((*(float *)(DAT_5015c8c8 + 0x18) == 0.0) || (*pcVar3 == '\0')) {
LAB_500f4858:
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x2dc) = 0;
  }
  else {
    iVar4 = 2;
    bVar1 = true;
    pcVar13 = &DAT_50144958;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar1 = *pcVar3 == *pcVar13;
      pcVar3 = pcVar3 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar1);
    if (bVar1) goto LAB_500f4858;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x2dc) = 1;
  }
  pcVar3 = FUN_500fe320((byte *)param_2,(byte *)s_bestweap_50144fc8);
  _strncpy((char *)(*(int *)(param_1 + 0x74) + 0x2e0),pcVar3,0xf);
  if (*(int *)(*(int *)(param_1 + 0x74) + 0x2f8) == 0) {
    iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar4 != 0) goto LAB_500f4c76;
  }
  iVar4 = *(int *)(DAT_5015c8c8 + 0x18);
  if (((iVar4 == 0x40800000) || (iVar4 == 0x40e00000)) || (iVar4 == 0x40c00000)) {
    (**(code **)(*DAT_5015c4d8 + 0x2c))(param_1,param_2);
  }
  FUN_500efca0(param_1,(int)acStack_180);
  FUN_500efbc0(param_1,(int)auStack_80);
  FUN_500fe320((byte *)param_2,(byte *)s_teamname_50144e40);
  FUN_500fe2b0();
  FUN_500fe320((byte *)param_2,&DAT_50144e38);
  FUN_500fe2b0();
  cVar2 = FUN_500efe50(param_1,(byte *)param_2);
  if (cVar2 != '\0') {
    FUN_500efbc0(param_1,(int)auStack_280);
    FUN_500efca0(param_1,(int)auStack_400);
    iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*DAT_5015c4d8 + 0x58))();
      if ((iVar4 != 0) && (param_3 != '\0')) {
        iVar4 = __strcmpi((char *)auStack_400,acStack_380);
        if ((iVar4 != 0) && (*(int *)(*(int *)(param_1 + 0x74) + 0x2dc) == 0)) {
          *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) & 0xffffffef;
          *(undefined4 *)(param_1 + 0x2ec) = 0;
          DAT_5015c894 = 0x19;
          FUN_500f2a30(param_1,param_1,param_1);
          *(undefined4 *)(param_1 + 0x2f8) = 2;
        }
      }
    }
    goto LAB_500f4c76;
  }
  FUN_500efbc0(param_1,(int)auStack_280);
  FUN_500efca0(param_1,(int)auStack_400);
  iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar4 == 0) {
    iVar4 = 0;
    do {
      pcVar3 = (char *)((int)auStack_280 + iVar4);
      acStack_300[iVar4] = *pcVar3;
      iVar4 = iVar4 + 1;
    } while (*pcVar3 != '\0');
    iVar4 = 0;
    do {
      pcVar3 = (char *)((int)auStack_400 + iVar4);
      acStack_380[iVar4] = *pcVar3;
      iVar4 = iVar4 + 1;
    } while (*pcVar3 != '\0');
    FUN_500fe510((byte *)param_2,(uint *)&DAT_50144e38,auStack_280);
    FUN_500fe510((byte *)param_2,(uint *)s_teamname_50144e40,auStack_400);
  }
  else {
    iVar4 = __strcmpi((char *)auStack_280,acStack_300);
    if (iVar4 != 0) {
      uVar7 = 0xffffffff;
      acStack_300[0] = '*';
      acStack_300[1] = 0;
      puVar11 = auStack_280;
      do {
        puVar12 = puVar11;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        puVar12 = (uint *)((int)puVar11 + 1);
        uVar8 = *puVar11;
        puVar11 = puVar12;
      } while ((char)uVar8 != '\0');
      uVar7 = ~uVar7;
      iVar4 = -1;
      pcVar3 = acStack_300 + 1;
      do {
        pcVar13 = pcVar3;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar13 = pcVar3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar2 != '\0');
      pcVar3 = (char *)((int)puVar12 - uVar7);
      pcVar13 = pcVar13 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_500fe510((byte *)param_2,(uint *)&DAT_50144e38,auStack_280);
    }
    iVar4 = __strcmpi((char *)auStack_400,acStack_380);
    if (iVar4 != 0) {
      uVar7 = 0xffffffff;
      acStack_380[0] = '*';
      acStack_380[1] = 0;
      puVar11 = auStack_400;
      do {
        puVar12 = puVar11;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        puVar12 = (uint *)((int)puVar11 + 1);
        uVar8 = *puVar11;
        puVar11 = puVar12;
      } while ((char)uVar8 != '\0');
      uVar7 = ~uVar7;
      iVar4 = -1;
      pcVar3 = acStack_380 + 1;
      do {
        pcVar13 = pcVar3;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar13 = pcVar3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar2 != '\0');
      pcVar3 = (char *)((int)puVar12 - uVar7);
      pcVar13 = pcVar13 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_500fe510((byte *)param_2,(uint *)s_teamname_50144e40,auStack_400);
    }
    iVar4 = (**(code **)(*DAT_5015c4d8 + 0x58))();
    if (((iVar4 != 0) && (param_3 != '\0')) &&
       ((iVar4 = *(int *)(DAT_5015c8c8 + 0x18), iVar4 != 0x40800000 && (iVar4 != 0x40c00000)))) {
      if (iVar4 == 0x40e00000) {
        iVar4 = (**(code **)(*DAT_5015c4d8 + 0x7c))();
        if (iVar4 != 0) goto LAB_500f4b70;
      }
      if (*(int *)(*(int *)(param_1 + 0x74) + 0x2dc) == 0) {
        iVar4 = __strcmpi(acStack_180,(char *)auStack_400);
        if (iVar4 != 0) {
          *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) & 0xffffffef;
          *(undefined4 *)(param_1 + 0x2ec) = 0;
          DAT_5015c894 = 0x19;
          FUN_500f2a30(param_1,param_1,param_1);
          *(undefined4 *)(param_1 + 0x2f8) = 2;
        }
      }
    }
  }
LAB_500f4b70:
  iVar10 = param_1 - DAT_5015cca0;
  pcVar3 = acStack_300;
  iVar4 = *(int *)(param_1 + 0x74) + 0x2cc;
  iVar9 = *(int *)(*(int *)(param_1 + 0x74) + 0x324) + -1;
  pcVar13 = acStack_380;
  pcVar15 = s__s__s__s__d_50144ec0;
  puVar5 = FUN_500fe1e0((byte *)s__s__s__s__d_50144ec0);
  (*DAT_5015cb00)(iVar10 / 0x464 + 0x586,puVar5,pcVar15,iVar4,pcVar13,pcVar3,iVar9);
LAB_500f4c76:
  _strncpy((char *)(*(int *)(param_1 + 0x74) + 0xcc),(char *)param_2,0x1ff);
  piStack_434 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
  if (piStack_434 != (int *)0x0) {
    iStack_430 = param_1;
    (**(code **)(*piStack_434 + 0xf4))(&piStack_434);
    iVar4 = *piStack_438;
    puVar6 = FUN_500fe320((byte *)(*(int *)(param_1 + 0x74) + 0xcc),(byte *)s_bestweap_50144fc8);
    (**(code **)(iVar4 + 200))(puVar6);
  }
  return;
}

