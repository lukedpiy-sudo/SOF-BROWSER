// rea decompile_all
// name: FUN_200224b0
// address: 0x200224b0
// body: available
// range: 0x200224b0-0x20022633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200224b0(void)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined1 local_40 [64];
  
  pbVar4 = (byte *)Cmd_Argv(0);
  puVar3 = DAT_2024b1d8;
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    pbVar6 = pbVar4;
    pbVar8 = (byte *)*puVar3;
    do {
      bVar1 = *pbVar6;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_200224fa:
        iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_200224ff;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_200224fa;
      pbVar6 = pbVar6 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_200224ff:
    if (iVar7 == 0) {
LAB_2002253c:
      iVar7 = Cmd_Argc();
      if (iVar7 == 1) {
        Com_Printf(s___s__is___s__20130cc4,*puVar3,puVar3[1]);
        return 1;
      }
      pcVar5 = (char *)Cmd_Argv(1);
      if ((*(byte *)(puVar3 + 3) & 0x40) == 0) {
        cVar2 = *pcVar5;
        if (cVar2 == '!') {
          if ((float)puVar3[6] == 0.0) {
            uVar11 = 1;
            puVar10 = &DAT_2011ee58;
          }
          else {
            uVar11 = 0;
            puVar10 = &DAT_2011ee58;
          }
        }
        else {
          if (((cVar2 != '+') || (pcVar5[1] != '\0')) && ((cVar2 != '-' || (pcVar5[1] != '\0')))) {
            uVar11 = *puVar3;
            goto LAB_2002261f;
          }
          uVar11 = __ftol();
          puVar10 = &DAT_2011d0b4;
        }
        Com_sprintf(local_40,0x40,puVar10,uVar11);
        FUN_20021d70(*puVar3,local_40,0);
        return 1;
      }
      uVar11 = *puVar3;
LAB_2002261f:
      FUN_20021d70(uVar11,pcVar5,0);
      return 1;
    }
    iVar7 = 7;
    bVar9 = true;
    pbVar6 = pbVar4;
    pbVar8 = (byte *)s_matrix_20130c20;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar9 = *pbVar6 == *pbVar8;
      pbVar6 = pbVar6 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar9);
    if (bVar9) {
      iVar7 = 10;
      bVar9 = true;
      pbVar6 = (byte *)*puVar3;
      pbVar8 = (byte *)s_timescale_2011d508;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar9 = *pbVar6 == *pbVar8;
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
      } while (bVar9);
      if (bVar9) goto LAB_2002253c;
    }
    puVar3 = (undefined4 *)puVar3[7];
  } while( true );
}

