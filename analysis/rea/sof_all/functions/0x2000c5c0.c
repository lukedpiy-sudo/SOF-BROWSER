// rea decompile_all
// name: FUN_2000c5c0
// address: 0x2000c5c0
// body: available
// range: 0x2000c5c0-0x2000c725 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000c5c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char **ppcVar4;
  char *apcStack_34 [4];
  undefined4 uStack_24;
  char *apcStack_20 [5];
  
  apcStack_20[4] = &DAT_20367ebc;
  apcStack_20[3] = (char *)&DAT_2036bed4;
  apcStack_20[2] = (char *)0x0;
  apcStack_20[1] = (char *)0x2000c5d4;
  iVar2 = FUN_2004e630();
  while (iVar2 != 0) {
    if (*DAT_20367ec0 == -1) {
      apcStack_20[4] = (char *)0x2000c5ee;
      FUN_2000bff0();
    }
    else if ((DAT_201c1f00 == 8) || (DAT_201c1f00 == 7)) {
      iVar2 = 5;
      if (DAT_20367ec8 < 8) {
        puVar3 = &DAT_2036bed4;
        ppcVar4 = apcStack_20;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppcVar4 = (char *)*puVar3;
          puVar3 = puVar3 + 1;
          ppcVar4 = ppcVar4 + 1;
        }
        uStack_24 = 0x2000c626;
        uStack_24 = FUN_2004def0();
        apcStack_34[3] = s__s__Runt_packet_2011ddfc;
        apcStack_34[2] = (char *)0x2000c631;
        Com_Printf();
      }
      else {
        puVar3 = &DAT_201c23cc;
        ppcVar4 = apcStack_20;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppcVar4 = (char *)*puVar3;
          puVar3 = puVar3 + 1;
          ppcVar4 = ppcVar4 + 1;
        }
        puVar3 = &DAT_2036bed4;
        ppcVar4 = apcStack_34;
        for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppcVar4 = (char *)*puVar3;
          puVar3 = puVar3 + 1;
          ppcVar4 = ppcVar4 + 1;
        }
        cVar1 = FUN_2004ddd0();
        if (cVar1 == '\0') {
          puVar3 = &DAT_2036bed4;
          ppcVar4 = apcStack_20;
          for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
            *ppcVar4 = (char *)*puVar3;
            puVar3 = puVar3 + 1;
            ppcVar4 = ppcVar4 + 1;
          }
          uStack_24 = 0x2000c670;
          uStack_24 = FUN_2004def0();
          apcStack_34[3] = s__s_sequenced_packet_without_conn_2011ddd4;
          apcStack_34[2] = (char *)0x2000c67b;
          Com_DPrintf();
        }
        else {
          apcStack_20[4] = &DAT_20367ebc;
          apcStack_20[3] = &DAT_201c23b8;
          apcStack_20[2] = (char *)0x2000c68f;
          iVar2 = FUN_2004d640();
          if (iVar2 != 0) {
            apcStack_20[4] = (char *)0x2000c69b;
            FUN_2000ee30();
          }
        }
      }
    }
    apcStack_20[4] = &DAT_20367ebc;
    apcStack_20[3] = (char *)&DAT_2036bed4;
    apcStack_20[2] = (char *)0x0;
    apcStack_20[1] = (char *)0x2000c6ac;
    iVar2 = FUN_2004e630();
  }
  if ((DAT_201c1f00 < 7) ||
     ((float)(DAT_201c1f0c - DAT_201c23c4) <= *(float *)(DAT_201e7548 + 0x18) * 1000.0)) {
    DAT_201e7588 = 0;
  }
  else {
    DAT_201e7588 = DAT_201e7588 + 1;
    if (5 < DAT_201e7588) {
      apcStack_20[4] = s_Server_connection_timed_out__2011ddb4;
      apcStack_20[3] = "h\x12\x04";
      Com_Printf();
      apcStack_20[3] = (char *)0x412;
      apcStack_20[2] = (char *)0x2000c711;
      FUN_2000ba00();
      return;
    }
  }
  return;
}

