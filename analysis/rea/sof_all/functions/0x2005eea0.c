// rea decompile_all
// name: FUN_2005eea0
// address: 0x2005eea0
// body: available
// range: 0x2005eea0-0x2005f059 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2005efbc to 0x2001c6b0 FUN_2001c6b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2005efd7 to 0x2005e320 FUN_2005e320 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2005eff2 to 0x2005e4a0 FUN_2005e4a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2005f00d to 0x2005e5c0 FUN_2005e5c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2005f028 to 0x2005eca0 FUN_2005eca0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005eea0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char **ppcVar7;
  bool bVar8;
  char *apcStack_2c [7];
  
  apcStack_2c[6] = &DAT_20367ebc;
  apcStack_2c[5] = (char *)0x2005eeae;
  FUN_2001e220();
  apcStack_2c[5] = &DAT_20367ebc;
  apcStack_2c[4] = (char *)0x2005eeb8;
  FUN_2001e310();
  apcStack_2c[4] = &DAT_20367ebc;
  apcStack_2c[3] = (char *)0x2005eec2;
  uVar1 = FUN_2001e400();
  apcStack_2c[3] = (char *)0x0;
  apcStack_2c[1] = "j";
  apcStack_2c[2] = (char *)uVar1;
  FUN_20018fc0();
  apcStack_2c[1] = (char *)0x0;
  apcStack_2c[0] = (char *)0x2005eed3;
  pcVar2 = (char *)Cmd_Argv();
  puVar5 = &DAT_2036bed4;
  ppcVar7 = apcStack_2c + 1;
  apcStack_2c[6] = pcVar2;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar7 = (char *)*puVar5;
    puVar5 = puVar5 + 1;
    ppcVar7 = ppcVar7 + 1;
  }
  apcStack_2c[0] = (char *)0x2005eeef;
  apcStack_2c[5] = (char *)FUN_2004def0();
  apcStack_2c[4] = s_Packet__s____s_20139bd4;
  apcStack_2c[3] = (char *)0x2005eefd;
  Com_DPrintf();
  iVar3 = 5;
  bVar8 = true;
  pcVar4 = pcVar2;
  pcVar6 = &DAT_2011dd30;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar8);
  if (bVar8) {
    apcStack_2c[6] = (char *)0x1;
    apcStack_2c[5] = (char *)0x2005ef19;
    apcStack_2c[6] = (char *)Cmd_Argv();
    apcStack_2c[5] = s_ack__s_20139904;
    puVar5 = &DAT_2036bed4;
    ppcVar7 = apcStack_2c;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppcVar7 = (char *)*puVar5;
      puVar5 = puVar5 + 1;
      ppcVar7 = ppcVar7 + 1;
    }
    FUN_2004d2f0(1);
    return;
  }
  iVar3 = 4;
  bVar8 = true;
  pcVar4 = pcVar2;
  pcVar6 = &DAT_2011dd2c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar8);
  if (bVar8) {
    puVar5 = &DAT_2036bed4;
    ppcVar7 = apcStack_2c + 2;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppcVar7 = (char *)*puVar5;
      puVar5 = puVar5 + 1;
      ppcVar7 = ppcVar7 + 1;
    }
    apcStack_2c[1] = (char *)0x2005ef6a;
    apcStack_2c[1] = (char *)FUN_2004def0();
    apcStack_2c[0] = s_Ping_acknowledge_from__s_201398c0;
    Com_Printf();
    return;
  }
  iVar3 = 7;
  bVar8 = true;
  pcVar4 = pcVar2;
  pcVar6 = s_status_201395a4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar8);
  if (bVar8) {
    apcStack_2c[6] = &LAB_20061770;
    apcStack_2c[5] = (char *)(DAT_20136a0c + -0x10);
    apcStack_2c[4] = &DAT_203fece0;
    apcStack_2c[3] = (char *)0x2;
    apcStack_2c[2] = (char *)0x2005efaa;
    FUN_2001c670();
    apcStack_2c[2] = (char *)0x2005efaf;
    apcStack_2c[2] = (char *)FUN_2005e1f0();
    apcStack_2c[1] = (char *)0x2005efb5;
    Com_Printf();
    FUN_2001c6b0();
    return;
  }
  iVar3 = 5;
  bVar8 = true;
  pcVar4 = pcVar2;
  pcVar6 = &DAT_2011c4f8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar8);
  if (bVar8) {
    FUN_2005e320();
    return;
  }
  iVar3 = 0xd;
  bVar8 = true;
  pcVar4 = pcVar2;
  pcVar6 = s_getchallenge_20139bc4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar8);
  if (bVar8) {
    FUN_2005e4a0();
    return;
  }
  iVar3 = 8;
  bVar8 = true;
  pcVar4 = pcVar2;
  pcVar6 = s_connect_2011e230;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar8);
  if (bVar8) {
    FUN_2005e5c0();
    return;
  }
  iVar3 = 5;
  bVar8 = true;
  pcVar4 = &DAT_2011e21c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar8);
  if (bVar8) {
    FUN_2005eca0();
    return;
  }
  puVar5 = &DAT_2036bed4;
  ppcVar7 = apcStack_2c + 1;
  apcStack_2c[6] = (char *)uVar1;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar7 = (char *)*puVar5;
    puVar5 = puVar5 + 1;
    ppcVar7 = ppcVar7 + 1;
  }
  apcStack_2c[0] = (char *)0x2005f044;
  apcStack_2c[5] = (char *)FUN_2004def0();
  apcStack_2c[4] = s_Bad_connectionless_packet_from___20139b9c;
  apcStack_2c[3] = (char *)0x2005f052;
  Com_Printf();
  return;
}

