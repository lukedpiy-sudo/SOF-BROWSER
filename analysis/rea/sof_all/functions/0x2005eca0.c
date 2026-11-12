// rea decompile_all
// name: FUN_2005eca0
// address: 0x2005eca0
// body: available
// range: 0x2005eca0-0x2005ee91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2005eddc to 0x2001c6b0 FUN_2001c6b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2005ee8d to 0x2001c6b0 FUN_2001c6b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005eca0(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  char **ppcVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  char *apcStack_428 [4];
  int iStack_418;
  char *pcStack_414;
  char local_400 [1024];
  
  iVar5 = -1;
  pbVar9 = *(byte **)(DAT_203fec80 + 4);
  pbVar3 = pbVar9;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  if (iVar5 != -2) {
    pcStack_414 = (char *)0x1;
    iStack_418 = 0x2005ecc7;
    pbVar3 = (byte *)Cmd_Argv();
    do {
      bVar1 = *pbVar3;
      bVar14 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_2005ecf2:
        iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_2005ecf7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar14 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_2005ecf2;
      pbVar3 = pbVar3 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_2005ecf7:
    if (iVar5 == 0) {
      pcStack_414 = (char *)(DAT_20367ec0 + 4);
      puVar10 = &DAT_2036bed4;
      ppcVar11 = apcStack_428;
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppcVar11 = (char *)*puVar10;
        puVar10 = puVar10 + 1;
        ppcVar11 = ppcVar11 + 1;
      }
      iStack_418 = FUN_2004def0();
      apcStack_428[3] = s_Rcon_from__s___s_20139b70;
      goto LAB_2005ed4e;
    }
  }
  pcStack_414 = (char *)(DAT_20367ec0 + 4);
  puVar10 = &DAT_2036bed4;
  ppcVar11 = apcStack_428;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar11 = (char *)*puVar10;
    puVar10 = puVar10 + 1;
    ppcVar11 = ppcVar11 + 1;
  }
  iStack_418 = FUN_2004def0();
  apcStack_428[3] = s_Bad_rcon_from__s___s_20139b84;
LAB_2005ed4e:
  apcStack_428[2] = (char *)0x2005ed53;
  Com_Printf();
  iStack_418 = DAT_20136a0c + -0x10;
  pcStack_414 = &LAB_20061770;
  apcStack_428[3] = &DAT_203fece0;
  apcStack_428[2] = (char *)0x2;
  apcStack_428[1] = (char *)0x2005ed71;
  FUN_2001c670();
  iVar5 = -1;
  pbVar9 = *(byte **)(DAT_203fec80 + 4);
  pbVar3 = pbVar9;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  if (iVar5 != -2) {
    pcStack_414 = (char *)0x1;
    iStack_418 = 0x2005ed91;
    pbVar3 = (byte *)Cmd_Argv();
    do {
      bVar1 = *pbVar3;
      bVar14 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_2005edbc:
        iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_2005edc1;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar14 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_2005edbc;
      pbVar3 = pbVar3 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_2005edc1:
    if (iVar5 == 0) {
      local_400[0] = '\0';
      iVar8 = 2;
      pcStack_414 = (char *)0x2005edf0;
      iVar5 = Cmd_Argc();
      if (2 < iVar5) {
        do {
          iStack_418 = 0x2005edfa;
          pcStack_414 = (char *)iVar8;
          pcVar4 = (char *)Cmd_Argv();
          uVar6 = 0xffffffff;
          do {
            pcVar13 = pcVar4;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar4 + 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar13;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          iVar5 = -1;
          pcVar4 = local_400;
          do {
            pcVar12 = pcVar4;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar12 = pcVar4 + 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar12;
          } while (cVar2 != '\0');
          pcVar4 = pcVar13 + -uVar6;
          pcVar13 = pcVar12 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar13 = pcVar13 + 1;
          }
          iVar5 = -1;
          pcVar4 = local_400;
          do {
            pcVar13 = pcVar4;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar13 = pcVar4 + 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar13;
          } while (cVar2 != '\0');
          iVar8 = iVar8 + 1;
          *(undefined2 *)(pcVar13 + -1) = DAT_2011d72c;
          pcStack_414 = (char *)0x2005ee41;
          iVar5 = Cmd_Argc();
        } while (iVar8 < iVar5);
      }
      iVar5 = -1;
      uVar6 = 0;
      pcVar4 = local_400;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (iVar5 != -2) {
        do {
          if (local_400[uVar6] == '\'') {
            local_400[uVar6] = '\"';
          }
          uVar7 = 0xffffffff;
          uVar6 = uVar6 + 1;
          pcVar4 = local_400;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
        } while (uVar6 < ~uVar7 - 1);
      }
      pcStack_414 = local_400;
      iStack_418 = 0x2005ee80;
      FUN_200194f0();
      FUN_2001c6b0();
      return;
    }
  }
  pcStack_414 = s_Bad_rcon_password__20139b5c;
  iStack_418 = 0x2005edcf;
  Com_Printf();
  FUN_2001c6b0();
  return;
}

