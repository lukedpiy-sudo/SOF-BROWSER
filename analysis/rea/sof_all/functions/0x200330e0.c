// rea decompile_all
// name: FUN_200330e0
// address: 0x200330e0
// body: available
// range: 0x200330e0-0x200335a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200330e0(int *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  float fVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  char *pcVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  float10 fVar15;
  
  fVar15 = (float10)FUN_20041cc0(param_1);
  fVar3 = (float)fVar15;
  if ((float10)7.0 < fVar15) {
    return 0xffffffff;
  }
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  uVar6 = FUN_20041d00(param_1);
  *(undefined4 *)(in_ECX + 0x30) = uVar6;
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  uVar6 = FUN_20041d00(param_1);
  *(undefined4 *)(in_ECX + 0x54) = uVar6;
  FUN_20041d60(param_1);
  if (fVar3 < 5.0) {
    *param_1 = *param_1 + 0xf4;
  }
  pcVar1 = (char *)(in_ECX + 0x60);
  puVar11 = (undefined4 *)*param_1;
  pcVar7 = pcVar1;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pcVar7 = *puVar11;
    puVar11 = puVar11 + 1;
    pcVar7 = pcVar7 + 4;
  }
  uVar9 = 0xffffffff;
  *param_1 = *param_1 + 0x40;
  pcVar7 = pcVar1;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar4 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar4 != '\0');
  uVar10 = 0xffffffff;
  pcVar7 = &DAT_2011f2f0;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar4 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar4 != '\0');
  if (~uVar10 - 1 < ~uVar9 - 1) {
    uVar9 = 0xffffffff;
    pcVar7 = &DAT_2011f2f0;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    uVar10 = 0xffffffff;
    pcVar7 = pcVar1;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    iVar8 = __strcmpi((char *)((in_ECX - (~uVar9 - 1)) + ~uVar10 + 0x5f),&DAT_2011f2f0);
    if (iVar8 == 0) {
      uVar9 = 0xffffffff;
      pcVar7 = &DAT_2011f2f0;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      uVar10 = 0xffffffff;
      pcVar7 = pcVar1;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      *(undefined1 *)((in_ECX - (~uVar9 - 1)) + ~uVar10 + 0x5f) = 0;
    }
  }
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  fVar15 = (float10)FUN_20041cc0(param_1);
  *(float *)(in_ECX + 200) = (float)fVar15;
  fVar15 = (float10)FUN_20041cc0(param_1);
  *(float *)(in_ECX + 0xcc) = (float)fVar15;
  FUN_20041d60(param_1);
  FUN_20041d60(param_1);
  uVar6 = FUN_20041d00(param_1);
  *(undefined4 *)(in_ECX + 0xe0) = uVar6;
  if (2.0 <= fVar3) {
    FUN_20041cd0(param_1,in_ECX + 0xe4);
    FUN_20041cd0(param_1,in_ECX + 0xf0);
    fVar15 = (float10)FUN_20041cc0(param_1);
    *(float *)(in_ECX + 0xfc) = (float)fVar15;
    pbVar2 = (byte *)(in_ECX + 0x100);
    puVar11 = (undefined4 *)*param_1;
    pbVar13 = pbVar2;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pbVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      pbVar13 = pbVar13 + 4;
    }
    *param_1 = *param_1 + 0x40;
    pbVar12 = &DAT_2015ee44;
    pbVar13 = pbVar2;
    do {
      bVar5 = *pbVar12;
      bVar14 = bVar5 < *pbVar13;
      if (bVar5 != *pbVar13) {
LAB_20033372:
        iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_20033377;
      }
      if (bVar5 == 0) break;
      bVar5 = pbVar12[1];
      bVar14 = bVar5 < pbVar13[1];
      if (bVar5 != pbVar13[1]) goto LAB_20033372;
      pbVar12 = pbVar12 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar5 != 0);
    iVar8 = 0;
LAB_20033377:
    if (iVar8 != 0) {
      FUN_200434d0(pbVar2);
    }
  }
  else {
    pcVar7 = &DAT_2015ee44;
    *(undefined4 *)(in_ECX + 0xe4) = 0;
    *(undefined4 *)(in_ECX + 0xe8) = 0;
    *(undefined4 *)(in_ECX + 0xec) = 0;
    *(undefined4 *)(in_ECX + 0xf0) = 0;
    *(undefined4 *)(in_ECX + 0xf4) = 0;
    *(undefined4 *)(in_ECX + 0xf8) = 0;
    *(undefined4 *)(in_ECX + 0xfc) = 0x3f333333;
    do {
      cVar4 = *pcVar7;
      pcVar7[in_ECX + -0x2015ed44] = cVar4;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
  }
  if (3.0 <= fVar3) {
    fVar15 = (float10)FUN_20041cc0(param_1);
    *(float *)(in_ECX + 0x140) = (float)fVar15;
    pbVar2 = (byte *)(in_ECX + 0x144);
    puVar11 = (undefined4 *)*param_1;
    pbVar13 = pbVar2;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pbVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      pbVar13 = pbVar13 + 4;
    }
    *param_1 = *param_1 + 0x40;
    pbVar12 = &DAT_2015ee44;
    pbVar13 = pbVar2;
    do {
      bVar5 = *pbVar12;
      bVar14 = bVar5 < *pbVar13;
      if (bVar5 != *pbVar13) {
LAB_2003340e:
        iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_20033413;
      }
      if (bVar5 == 0) break;
      bVar5 = pbVar12[1];
      bVar14 = bVar5 < pbVar13[1];
      if (bVar5 != pbVar13[1]) goto LAB_2003340e;
      pbVar12 = pbVar12 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar5 != 0);
    iVar8 = 0;
LAB_20033413:
    if (iVar8 != 0) {
      FUN_200434d0(pbVar2);
    }
  }
  else {
    pcVar7 = &DAT_2015ee44;
    *(undefined4 *)(in_ECX + 0x140) = 0x42700000;
    do {
      cVar4 = *pcVar7;
      pcVar7[in_ECX + -0x2015ed00] = cVar4;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
  }
  if (4.0 <= fVar3) {
    FUN_20041d60(param_1);
    FUN_20041d60(param_1);
    FUN_20041d60(param_1);
    FUN_20041d60(param_1);
    FUN_20041d60(param_1);
    FUN_20041d60(param_1);
  }
  else {
    *(undefined4 *)(in_ECX + 0x184) = 0;
    *(undefined4 *)(in_ECX + 0x188) = 0;
    *(undefined4 *)(in_ECX + 0x18c) = 0;
    *(undefined4 *)(in_ECX + 400) = 0;
    *(undefined4 *)(in_ECX + 0x194) = 0;
    *(undefined4 *)(in_ECX + 0x198) = 0;
    *(undefined4 *)(in_ECX + 0x19c) = 0;
    *(undefined4 *)(in_ECX + 0x1a0) = 0;
    *(undefined4 *)(in_ECX + 0x1a4) = 0;
    *(undefined4 *)(in_ECX + 0x1a8) = 0;
    *(undefined4 *)(in_ECX + 0x1ac) = 0;
    *(undefined4 *)(in_ECX + 0x1b0) = 0;
    *(uint *)(in_ECX + 0xe0) = *(uint *)(in_ECX + 0xe0) & 0x3fff;
  }
  if (fVar3 < 6.0) {
    *(uint *)(in_ECX + 0xe0) = *(uint *)(in_ECX + 0xe0) & 0xfffc7fff;
  }
  if (7.0 <= fVar3) {
    uVar6 = FUN_20041d00(param_1);
    *(undefined4 *)(in_ECX + 0x1b4) = uVar6;
    uVar6 = FUN_20041d00(param_1);
    *(undefined4 *)(in_ECX + 0x1b8) = uVar6;
  }
  else {
    uVar9 = *(uint *)(in_ECX + 0xe0);
    *(undefined4 *)(in_ECX + 0x1b4) = 0;
    *(uint *)(in_ECX + 0xe0) = uVar9 & 0xfff3ffff;
    if ((uVar9 & 0x20) == 0) {
      *(undefined4 *)(in_ECX + 0x1b8) = 1;
    }
    else {
      *(undefined4 *)(in_ECX + 0x1b8) = 0;
    }
  }
  if ((*(int *)(in_ECX + 0x30) != 3) && (*(int *)(in_ECX + 0x30) != 4)) {
    (*DAT_20403598)(pcVar1);
    return 0;
  }
  FUN_2003af50(0,in_ECX + 0x1c0,pcVar1,in_ECX + 0x1c4);
  return 0;
}

