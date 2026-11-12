// rea decompile_all
// name: FUN_2000bff0
// address: 0x2000bff0
// body: available
// range: 0x2000bff0-0x2000c5b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000bff0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  char **ppcVar10;
  bool bVar11;
  undefined *apuStack_c4 [4];
  undefined4 uStack_b4;
  char *pcStack_b0;
  char *apcStack_ac [3];
  char local_94 [4];
  undefined4 local_84;
  char local_80 [128];
  
  FUN_2001e220();
  FUN_2001e310();
  apcStack_ac[2] = (char *)FUN_2001e400();
  apcStack_ac[1] = "j";
  FUN_20018fc0();
  apcStack_ac[1] = (char *)0x0;
  apcStack_ac[0] = (char *)0x2000c026;
  pcVar2 = (char *)Cmd_Argv();
  puVar7 = &DAT_2036bed4;
  ppcVar10 = apcStack_ac + 1;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar10 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar10 = ppcVar10 + 1;
  }
  apcStack_ac[0] = (char *)0x2000c042;
  FUN_2004def0();
  Com_Printf();
  iVar4 = 0xf;
  bVar11 = true;
  pcVar6 = pcVar2;
  pcVar9 = s_client_connect_2011dd9c;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar11 = *pcVar6 == *pcVar9;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar11);
  if (bVar11) {
    if (DAT_201c1f00 == 7) {
      Com_Printf();
      return;
    }
    apcStack_ac[0] = &DAT_201c23b8;
    pcStack_b0 = (char *)0x0;
    puVar7 = &DAT_2036bed4;
    ppcVar10 = apcStack_ac + 1;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar10 = (char *)*puVar7;
      puVar7 = puVar7 + 1;
      ppcVar10 = ppcVar10 + 1;
    }
    uStack_b4 = 0x2000c0ae;
    FUN_2004d390();
    uStack_b4 = 4;
    apuStack_c4[3] = &DAT_201c2400;
    apuStack_c4[2] = (undefined *)0x2000c0ba;
    FUN_2001cb00();
    apuStack_c4[2] = &DAT_2011dd74;
    apuStack_c4[1] = &DAT_201c2400;
    apuStack_c4[0] = (undefined *)0x2000c0c9;
    FUN_2001cd00();
    DAT_201c1f00 = 7;
    return;
  }
  iVar4 = 5;
  bVar11 = true;
  pcVar6 = pcVar2;
  pcVar9 = &DAT_2011c4f8;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar11 = *pcVar6 == *pcVar9;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar11);
  if (bVar11) {
    pcVar2 = (char *)FUN_2001e3b0();
    apcStack_ac[2] = (char *)0x2000c10b;
    iVar4 = _strncmp(pcVar2,&DAT_2011d9b8,4);
    if (iVar4 == 0) {
      puVar7 = &DAT_2036bed4;
      ppcVar10 = apcStack_ac + 2;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar10 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar10 = ppcVar10 + 1;
      }
      apcStack_ac[1] = (char *)0x2000c12c;
      iVar4 = FUN_2004e340();
      if (iVar4 == 0) {
        puVar7 = &DAT_2036bed4;
        ppcVar10 = apcStack_ac + 2;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppcVar10 = (char *)*puVar7;
          puVar7 = puVar7 + 1;
          ppcVar10 = ppcVar10 + 1;
        }
        apcStack_ac[1] = (char *)0x2000c149;
        apcStack_ac[1] = (char *)FUN_2004def0();
        apcStack_ac[0] = s_Local_address_considered_Wide____2011d994;
        pcStack_b0 = (char *)0x2000c154;
        Com_DPrintf();
        return;
      }
      uVar5 = 0xffffffff;
      pcVar6 = &DAT_2011d9b8;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 + (~uVar5 - 1);
      iVar4 = -(int)pcVar2;
      do {
        cVar1 = *pcVar2;
        pcVar2[(int)(local_80 + iVar4)] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      pcVar2 = local_80;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      local_80[~uVar5 - 2] = '\0';
      iVar4 = -1;
      pcVar2 = local_80;
      do {
        pcVar6 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      *(undefined4 *)(pcVar6 + -1) = DAT_2011d988;
      *(undefined4 *)(pcVar6 + 3) = DAT_2011d98c;
      Com_Printf();
      puVar7 = &DAT_2036bed4;
      ppcVar10 = apcStack_ac + 1;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar10 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar10 = ppcVar10 + 1;
      }
      apcStack_ac[0] = (char *)0x2000c1dc;
      FUN_200c7f40();
      return;
    }
  }
  else {
    iVar4 = 4;
    bVar11 = true;
    pcVar6 = pcVar2;
    pcVar9 = &DAT_2011dd70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = *pcVar6 == *pcVar9;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      puVar7 = &DAT_2036bed4;
      ppcVar10 = apcStack_ac + 2;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar10 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar10 = ppcVar10 + 1;
      }
      apcStack_ac[1] = (char *)0x2000c211;
      iVar4 = FUN_2004e340();
      if (iVar4 == 0) {
        Com_Printf();
        return;
      }
      FUN_20065ed0();
      FUN_2001e3b0();
      FUN_20018180();
      FUN_20018180();
      return;
    }
    iVar4 = 6;
    bVar11 = true;
    pcVar6 = pcVar2;
    pcVar9 = s_print_2011dd38;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = *pcVar6 == *pcVar9;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      FUN_2001e3b0();
      Com_Printf();
      puVar7 = &DAT_2036bed4;
      ppcVar10 = apcStack_ac + 1;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar10 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar10 = ppcVar10 + 1;
      }
      apcStack_ac[0] = (char *)0x2000c299;
      FUN_200c7fa0();
      return;
    }
    iVar4 = 5;
    bVar11 = true;
    pcVar6 = pcVar2;
    pcVar9 = &DAT_2011dd30;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = *pcVar6 == *pcVar9;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      puVar7 = &DAT_2036bed4;
      ppcVar10 = apcStack_ac + 1;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar10 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar10 = ppcVar10 + 1;
      }
      apcStack_ac[0] = (char *)0x0;
      pcStack_b0 = (char *)0x2000c2d4;
      FUN_2004d2f0();
      return;
    }
    iVar4 = 10;
    bVar11 = true;
    pcVar6 = pcVar2;
    pcVar9 = s_challenge_2011dd20;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = *pcVar6 == *pcVar9;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      Cmd_Argv();
      DAT_201ca3fc = FUN_200f9e9e();
      FUN_200216d0();
      uVar3 = __ftol();
      DAT_2024b1d0 = 0;
      apcStack_ac[2] = (char *)0x2000c327;
      FUN_20022c60();
      apcStack_ac[2] = (char *)DAT_201ca3fc;
      apcStack_ac[0] = (char *)0x21;
      pcStack_b0 = s_connect__i__i__i__d__4_2f___s__2011d774;
      puVar7 = &DAT_2036bed4;
      ppuVar8 = apuStack_c4;
      apcStack_ac[1] = (char *)uVar3;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppuVar8 = (undefined *)*puVar7;
        puVar7 = puVar7 + 1;
        ppuVar8 = ppuVar8 + 1;
      }
      FUN_2004d2f0(0);
      return;
    }
    iVar4 = 5;
    bVar11 = true;
    pcVar6 = pcVar2;
    pcVar9 = &DAT_2011dd18;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = *pcVar6 == *pcVar9;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      Cmd_Argv();
      puVar7 = &DAT_2036bed4;
      ppcVar10 = apcStack_ac;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar10 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar10 = ppcVar10 + 1;
      }
      pcStack_b0 = (char *)0x0;
      uStack_b4 = 0x2000c3ac;
      FUN_2004d2f0();
      return;
    }
    iVar4 = 0x12;
    bVar11 = true;
    pcVar6 = pcVar2;
    pcVar9 = s_rejected_violence_2011dd04;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = *pcVar6 == *pcVar9;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      FUN_20018180();
      return;
    }
    iVar4 = 0xe;
    bVar11 = true;
    pcVar6 = pcVar2;
    pcVar9 = s_rejected_full_2011dcbc;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = *pcVar6 == *pcVar9;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      FUN_20018180();
      return;
    }
    iVar4 = 0xe;
    bVar11 = true;
    pcVar6 = pcVar2;
    pcVar9 = s_rejected_auth_2011dc74;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = *pcVar6 == *pcVar9;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      Cmd_Argv();
      iVar4 = FUN_200f9e9e();
      if (iVar4 == DAT_201ca400) {
        DAT_201c1f00 = 3;
        return;
      }
    }
    else {
      iVar4 = 0xf;
      bVar11 = true;
      pcVar6 = pcVar2;
      pcVar9 = s_rejected_error_2011dc64;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar11 = *pcVar6 == *pcVar9;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar11);
      if (bVar11) {
        Cvar_Set();
        FUN_20018180();
        return;
      }
      iVar4 = 0x10;
      bVar11 = true;
      pcVar6 = pcVar2;
      pcVar9 = s_rejected_banned_2011dc00;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar11 = *pcVar6 == *pcVar9;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar11);
      if (bVar11) {
        FUN_20018180();
        return;
      }
      iVar4 = 0x1c;
      bVar11 = true;
      pcVar6 = pcVar2;
      pcVar9 = s_rejected_spectator_password_2011dbac;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar11 = *pcVar6 == *pcVar9;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar11);
      if (bVar11) {
        FUN_20018180();
        return;
      }
      iVar4 = 0x21;
      bVar11 = true;
      pcVar6 = pcVar2;
      pcVar9 = s_rejected_spectator_limit_exeeded_2011db50;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar11 = *pcVar6 == *pcVar9;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar11);
      if (bVar11) {
        FUN_20018180();
        return;
      }
      iVar4 = 0x12;
      bVar11 = true;
      pcVar6 = pcVar2;
      pcVar9 = s_rejected_password_2011db04;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar11 = *pcVar6 == *pcVar9;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar11);
      if (bVar11) {
        FUN_20018180();
        return;
      }
      iVar4 = 4;
      bVar11 = true;
      pcVar6 = &DAT_2011dd2c;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar11 = *pcVar2 == *pcVar6;
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar11);
      if (bVar11) {
        Cmd_Argv();
        FUN_200f9e13();
        FUN_20055930();
        apcStack_ac[2] = (char *)0x2000c55e;
        Com_DPrintf();
        apcStack_ac[2] = (char *)0x1;
        apcStack_ac[1] = (char *)0x2000c565;
        apcStack_ac[1] = (char *)Cmd_Argv();
        apcStack_ac[0] = (char *)0x2000c56b;
        iVar4 = FUN_200f9e13();
        apcStack_ac[0] = (char *)0x2000c572;
        local_84 = FUN_20055930();
        local_84 = local_84 - iVar4;
        puVar7 = &DAT_2036bed4;
        ppcVar10 = apcStack_ac + 1;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppcVar10 = (char *)*puVar7;
          puVar7 = puVar7 + 1;
          ppcVar10 = ppcVar10 + 1;
        }
        apcStack_ac[0] = (char *)0x2000c593;
        FUN_200c7f70();
        return;
      }
      Com_Printf();
    }
  }
  return;
}

