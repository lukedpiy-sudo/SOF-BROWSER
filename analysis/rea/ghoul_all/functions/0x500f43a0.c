// rea decompile_all
// name: FUN_500f43a0
// address: 0x500f43a0
// body: available
// range: 0x500f43a0-0x500f4729 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f43a0(int param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint *puVar13;
  uint *puVar14;
  byte *pbVar15;
  char *pcVar16;
  int *piStack_238;
  int *piStack_234;
  int iStack_230;
  char acStack_200 [128];
  byte abStack_180 [128];
  uint auStack_100 [32];
  undefined4 uStack_80;
  
  bVar2 = FUN_500fe4e0(param_2);
  if (!bVar2) {
    pcVar4 = s__name_badinfo_skin_mullins_5015458c;
    do {
      cVar3 = *pcVar4;
      *(char *)((int)(param_2 + -0x14055163) + (int)pcVar4) = cVar3;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
  }
  pcVar4 = FUN_500fe320((byte *)param_2,&DAT_50154584);
  _strncpy((char *)(*(int *)(param_1 + 0x74) + 0x2cc),pcVar4,0xf);
  pcVar4 = FUN_500fe320((byte *)param_2,(byte *)s_spectator_50144de8);
  if ((*(float *)(DAT_5015c8c8 + 0x18) == 0.0) || (*pcVar4 == '\0')) {
LAB_500f443e:
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x2dc) = 0;
  }
  else {
    iVar7 = 2;
    bVar2 = true;
    pcVar16 = &DAT_50144958;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar2 = *pcVar4 == *pcVar16;
      pcVar4 = pcVar4 + 1;
      pcVar16 = pcVar16 + 1;
    } while (bVar2);
    if (bVar2) goto LAB_500f443e;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x2dc) = 1;
  }
  pcVar4 = FUN_500fe320((byte *)param_2,(byte *)s_bestweap_50144fc8);
  _strncpy((char *)(*(int *)(param_1 + 0x74) + 0x2e0),pcVar4,0xf);
  if (*(int *)(*(int *)(param_1 + 0x74) + 0x2f8) == 0) {
    iVar7 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar7 != 0) goto LAB_500f46bd;
  }
  FUN_500fe320((byte *)param_2,(byte *)s_teamname_50144e40);
  FUN_500fe2b0();
  FUN_500fe320((byte *)param_2,&DAT_50144e38);
  FUN_500fe2b0();
  cVar3 = FUN_500efe50(param_1,(byte *)param_2);
  if (cVar3 == '\0') {
    FUN_500efbc0(param_1,(int)auStack_100);
    FUN_500efca0(param_1,(int)&uStack_80);
    iVar7 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar7 == 0) {
      iVar7 = 0;
      do {
        pcVar4 = (char *)((int)auStack_100 + iVar7);
        acStack_200[iVar7] = *pcVar4;
        iVar7 = iVar7 + 1;
      } while (*pcVar4 != '\0');
      iVar7 = 0;
      do {
        pbVar15 = (byte *)((int)&uStack_80 + iVar7);
        abStack_180[iVar7] = *pbVar15;
        iVar7 = iVar7 + 1;
      } while (*pbVar15 != 0);
      FUN_500fe510((byte *)param_2,(uint *)&DAT_50144e38,auStack_100);
      FUN_500fe510((byte *)param_2,(uint *)s_teamname_50144e40,&uStack_80);
    }
    else {
      iVar7 = __strcmpi((char *)auStack_100,acStack_200);
      if (iVar7 != 0) {
        uVar8 = 0xffffffff;
        acStack_200[0] = '*';
        acStack_200[1] = 0;
        puVar13 = auStack_100;
        do {
          puVar14 = puVar13;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          puVar14 = (uint *)((int)puVar13 + 1);
          uVar9 = *puVar13;
          puVar13 = puVar14;
        } while ((char)uVar9 != '\0');
        uVar8 = ~uVar8;
        iVar7 = -1;
        pcVar4 = acStack_200 + 1;
        do {
          pcVar16 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar16 = pcVar4 + 1;
          cVar3 = *pcVar4;
          pcVar4 = pcVar16;
        } while (cVar3 != '\0');
        pcVar4 = (char *)((int)puVar14 - uVar8);
        pcVar16 = pcVar16 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar16 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_500fe510((byte *)param_2,(uint *)&DAT_50144e38,auStack_100);
      }
      pbVar15 = abStack_180;
      pbVar12 = (byte *)&uStack_80;
      do {
        bVar1 = *pbVar12;
        bVar2 = bVar1 < *pbVar15;
        if (bVar1 != *pbVar15) {
LAB_500f45ab:
          iVar7 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
          goto LAB_500f45b0;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar2 = bVar1 < pbVar15[1];
        if (bVar1 != pbVar15[1]) goto LAB_500f45ab;
        pbVar12 = pbVar12 + 2;
        pbVar15 = pbVar15 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_500f45b0:
      if (iVar7 != 0) {
        uVar8 = 0xffffffff;
        abStack_180[0] = 0x2a;
        abStack_180[1] = 0;
        pcVar4 = (char *)&uStack_80;
        do {
          pcVar16 = pcVar4;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar16 = pcVar4 + 1;
          cVar3 = *pcVar4;
          pcVar4 = pcVar16;
        } while (cVar3 != '\0');
        uVar8 = ~uVar8;
        iVar7 = -1;
        pbVar15 = abStack_180 + 1;
        do {
          pbVar12 = pbVar15;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pbVar12 = pbVar15 + 1;
          bVar1 = *pbVar15;
          pbVar15 = pbVar12;
        } while (bVar1 != 0);
        pbVar15 = (byte *)(pcVar16 + -uVar8);
        pbVar12 = pbVar12 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pbVar12 = *(undefined4 *)pbVar15;
          pbVar15 = pbVar15 + 4;
          pbVar12 = pbVar12 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar12 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          pbVar12 = pbVar12 + 1;
        }
        FUN_500fe510((byte *)param_2,(uint *)s_teamname_50144e40,&uStack_80);
      }
    }
    iVar10 = param_1 - DAT_5015cca0;
    pcVar4 = acStack_200;
    iVar7 = *(int *)(param_1 + 0x74) + 0x2cc;
    iVar11 = *(int *)(*(int *)(param_1 + 0x74) + 0x324) + -1;
    pbVar15 = abStack_180;
    pcVar16 = s__s__s__s__d_50144ec0;
    puVar5 = FUN_500fe1e0((byte *)s__s__s__s__d_50144ec0);
    (*DAT_5015cb00)(iVar10 / 0x464 + 0x586,puVar5,pcVar16,iVar7,pbVar15,pcVar4,iVar11);
  }
LAB_500f46bd:
  _strncpy((char *)(*(int *)(param_1 + 0x74) + 0xcc),(char *)param_2,0x1ff);
  piStack_234 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
  if (piStack_234 != (int *)0x0) {
    iStack_230 = param_1;
    (**(code **)(*piStack_234 + 0xf4))(&piStack_234);
    iVar7 = *piStack_238;
    puVar6 = FUN_500fe320((byte *)(*(int *)(param_1 + 0x74) + 0xcc),(byte *)s_bestweap_50144fc8);
    (**(code **)(iVar7 + 200))(puVar6);
  }
  return;
}

