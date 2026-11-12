// rea decompile_all
// name: FUN_200a1650
// address: 0x200a1650
// body: available
// range: 0x200a1650-0x200a188c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a1650(char *param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  uint local_3f4;
  undefined **local_3f0;
  undefined4 local_3ec;
  char local_3e8 [1000];
  
  local_3ec = 0;
  pbVar11 = &DAT_2015ee44;
  pbVar3 = PTR_DAT_201573d8;
  do {
    bVar2 = *pbVar3;
    bVar14 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_200a1694:
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_200a1699;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar14 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_200a1694;
    pbVar3 = pbVar3 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_200a1699:
  if (iVar4 == 0) {
    return;
  }
  local_3f0 = &PTR_DAT_201573d8;
  do {
    pcVar5 = *local_3f0;
    uVar6 = 0xffffffff;
    uVar10 = 0;
    pcVar12 = pcVar5 + -1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar12 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    pcVar12 = param_1;
    if (~uVar7 - 1 != ~uVar6 - 1) {
      do {
        uVar6 = 0xffffffff;
        pcVar13 = pcVar5;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        iVar4 = _strncmp(pcVar5,pcVar12,~uVar6 - 1);
        uVar6 = 0xffffffff;
        if (iVar4 == 0) {
          uVar10 = (int)pcVar12 - (int)param_1;
          pcVar5 = (&PTR_s_assault_201573fc)[local_3ec];
          pcVar12 = (&PTR_DAT_201573d8)[local_3ec];
          goto code_r0x200a17a1;
        }
        uVar10 = uVar10 + 1;
        pcVar12 = pcVar12 + 1;
        pcVar5 = *local_3f0;
        pcVar13 = pcVar5 + -1;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        uVar7 = 0xffffffff;
        pcVar13 = param_1;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
      } while (uVar10 < (~uVar7 - 1) - (~uVar6 - 1));
    }
    local_3ec = local_3ec + 1;
    local_3f0 = local_3f0 + 1;
    pbVar3 = *local_3f0;
    pbVar11 = &DAT_2015ee44;
    do {
      bVar2 = *pbVar3;
      bVar14 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_200a176a:
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_200a176f;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar14 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_200a176a;
      pbVar3 = pbVar3 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_200a176f:
    if (iVar4 == 0) {
      return;
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    if (cVar1 == '\0') break;
code_r0x200a17a1:
    if (uVar6 == 0) break;
  }
  uVar7 = 0xffffffff;
  iVar4 = (~uVar6 - 1) + uVar10;
  pcVar12 = pcVar5;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar8 = (~uVar7 - 1) + uVar10;
  if (0 < (int)uVar10) {
    pcVar12 = param_1;
    pcVar13 = local_3e8;
    for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar6 = uVar10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  iVar9 = -1;
  local_3f4 = 0;
  pcVar12 = pcVar5;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (iVar9 != -2) {
    do {
      local_3e8[local_3f4 + uVar10] = pcVar5[local_3f4];
      uVar6 = 0xffffffff;
      local_3f4 = local_3f4 + 1;
      pcVar12 = pcVar5;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
    } while (local_3f4 < ~uVar6 - 1);
  }
  uVar6 = 0xffffffff;
  uVar10 = 0;
  pcVar5 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (~uVar6 - 1 != iVar4) {
    do {
      iVar9 = uVar10 + iVar4;
      uVar10 = uVar10 + 1;
      uVar6 = 0xffffffff;
      local_3e8[uVar10 + iVar8 + -1] = param_1[iVar9];
      pcVar5 = param_1;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    } while (uVar10 < (~uVar6 - 1) - iVar4);
  }
  uVar6 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = local_3e8;
  local_3e8[~uVar6 + (iVar8 - iVar4) + -1] = '\0';
  do {
    cVar1 = *pcVar5;
    pcVar5[(int)param_1 - (int)local_3e8] = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  return;
}

