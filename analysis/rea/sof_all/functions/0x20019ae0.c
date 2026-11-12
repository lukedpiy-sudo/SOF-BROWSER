// rea decompile_all
// name: FUN_20019ae0
// address: 0x20019ae0
// body: available
// range: 0x20019ae0-0x20019ea2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20019ae0(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar1 = (char *)FUN_20021760(s_cmdlist_2012049c);
  puVar2 = DAT_20241840;
  if (*pcVar1 == '\0') {
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = 8;
      bVar5 = true;
      pcVar1 = s_cmdlist_2012049c;
      pcVar4 = (char *)puVar2[1];
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = *pcVar1 == *pcVar4;
        pcVar1 = pcVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        Com_Printf(s_Cmd_AddCommand___s_already_defin_20120258,s_cmdlist_2012049c);
        goto LAB_20019b50;
      }
    }
    puVar2 = (undefined4 *)Z_Malloc(0xc);
    puVar2[1] = s_cmdlist_2012049c;
    puVar2[2] = &LAB_20019670;
    *puVar2 = DAT_20241840;
    DAT_20241840 = puVar2;
  }
  else {
    Com_Printf(s_Cmd_AddCommand___s_already_defin_2012027c,s_cmdlist_2012049c);
  }
LAB_20019b50:
  pcVar1 = (char *)FUN_20021760(&DAT_20120494);
  puVar2 = DAT_20241840;
  if (*pcVar1 == '\0') {
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = 5;
      bVar5 = true;
      pcVar1 = &DAT_20120494;
      pcVar4 = (char *)puVar2[1];
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = *pcVar1 == *pcVar4;
        pcVar1 = pcVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        Com_Printf(s_Cmd_AddCommand___s_already_defin_20120258,&DAT_20120494);
        goto LAB_20019bd2;
      }
    }
    puVar2 = (undefined4 *)Z_Malloc(0xc);
    puVar2[1] = &DAT_20120494;
    puVar2[2] = &LAB_20018930;
    *puVar2 = DAT_20241840;
    DAT_20241840 = puVar2;
  }
  else {
    Com_Printf(s_Cmd_AddCommand___s_already_defin_2012027c,&DAT_20120494);
  }
LAB_20019bd2:
  pcVar1 = (char *)FUN_20021760(&DAT_2011dd18);
  puVar2 = DAT_20241840;
  if (*pcVar1 == '\0') {
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = 5;
      bVar5 = true;
      pcVar1 = &DAT_2011dd18;
      pcVar4 = (char *)puVar2[1];
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = *pcVar1 == *pcVar4;
        pcVar1 = pcVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        Com_Printf(s_Cmd_AddCommand___s_already_defin_20120258,&DAT_2011dd18);
        goto LAB_20019c54;
      }
    }
    puVar2 = (undefined4 *)Z_Malloc(0xc);
    puVar2[1] = &DAT_2011dd18;
    puVar2[2] = &LAB_20018ac0;
    *puVar2 = DAT_20241840;
    DAT_20241840 = puVar2;
  }
  else {
    Com_Printf(s_Cmd_AddCommand___s_already_defin_2012027c,&DAT_2011dd18);
  }
LAB_20019c54:
  pcVar1 = (char *)FUN_20021760(s_alias_2012048c);
  puVar2 = DAT_20241840;
  if (*pcVar1 == '\0') {
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = 6;
      bVar5 = true;
      pcVar1 = s_alias_2012048c;
      pcVar4 = (char *)puVar2[1];
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = *pcVar1 == *pcVar4;
        pcVar1 = pcVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        Com_Printf(s_Cmd_AddCommand___s_already_defin_20120258,s_alias_2012048c);
        goto LAB_20019cd6;
      }
    }
    puVar2 = (undefined4 *)Z_Malloc(0xc);
    puVar2[1] = s_alias_2012048c;
    puVar2[2] = &LAB_20018b50;
    *puVar2 = DAT_20241840;
    DAT_20241840 = puVar2;
  }
  else {
    Com_Printf(s_Cmd_AddCommand___s_already_defin_2012027c,s_alias_2012048c);
  }
LAB_20019cd6:
  pcVar1 = (char *)FUN_20021760(&DAT_20120484);
  puVar2 = DAT_20241840;
  if (*pcVar1 == '\0') {
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = 5;
      bVar5 = true;
      pcVar1 = &DAT_20120484;
      pcVar4 = (char *)puVar2[1];
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = *pcVar1 == *pcVar4;
        pcVar1 = pcVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        Com_Printf(s_Cmd_AddCommand___s_already_defin_20120258,&DAT_20120484);
        goto LAB_20019d58;
      }
    }
    puVar2 = (undefined4 *)Z_Malloc(0xc);
    puVar2[1] = &DAT_20120484;
    puVar2[2] = &LAB_20018150;
    *puVar2 = DAT_20241840;
    DAT_20241840 = puVar2;
  }
  else {
    Com_Printf(s_Cmd_AddCommand___s_already_defin_2012027c,&DAT_20120484);
  }
LAB_20019d58:
  pcVar1 = (char *)FUN_20021760(&DAT_2012047c);
  puVar2 = DAT_20241840;
  if (*pcVar1 == '\0') {
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = 6;
      bVar5 = true;
      pcVar1 = &DAT_2012047c;
      pcVar4 = (char *)puVar2[1];
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = *pcVar1 == *pcVar4;
        pcVar1 = pcVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        Com_Printf(s_Cmd_AddCommand___s_already_defin_20120258,&DAT_2012047c);
        goto LAB_20019dda;
      }
    }
    puVar2 = (undefined4 *)Z_Malloc(0xc);
    puVar2[1] = &DAT_2012047c;
    puVar2[2] = FUN_200196b0;
    *puVar2 = DAT_20241840;
    DAT_20241840 = puVar2;
  }
  else {
    Com_Printf(s_Cmd_AddCommand___s_already_defin_2012027c,&DAT_2012047c);
  }
LAB_20019dda:
  pcVar1 = (char *)FUN_20021760(&DAT_20120478);
  puVar2 = DAT_20241840;
  if (*pcVar1 == '\0') {
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = 4;
      bVar5 = true;
      pcVar1 = &DAT_20120478;
      pcVar4 = (char *)puVar2[1];
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = *pcVar1 == *pcVar4;
        pcVar1 = pcVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        Com_Printf(s_Cmd_AddCommand___s_already_defin_20120258,&DAT_20120478);
        goto LAB_20019e5c;
      }
    }
    puVar2 = (undefined4 *)Z_Malloc(0xc);
    puVar2[1] = &DAT_20120478;
    puVar2[2] = &LAB_200198b0;
    *puVar2 = DAT_20241840;
    DAT_20241840 = puVar2;
  }
  else {
    Com_Printf(s_Cmd_AddCommand___s_already_defin_2012027c,&DAT_20120478);
  }
LAB_20019e5c:
  Cmd_AddCommand(&DAT_20120474,&LAB_20019930);
  Cmd_AddCommand(&DAT_20120470,&LAB_200199c0);
  Cmd_AddCommand(&DAT_2012046c,&LAB_20019a50);
  return;
}

