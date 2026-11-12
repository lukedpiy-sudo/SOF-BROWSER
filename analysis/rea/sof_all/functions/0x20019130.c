// rea decompile_all
// name: Cmd_AddCommand
// address: 0x20019130
// body: available
// range: 0x20019130-0x200191d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cmd_AddCommand(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  
                    /* 0x19130  2  Cmd_AddCommand */
  pcVar2 = (char *)FUN_20021760(param_1);
  puVar5 = DAT_20241840;
  if (*pcVar2 != '\0') {
    Com_Printf(s_Cmd_AddCommand___s_already_defin_2012027c,param_1);
    return;
  }
  do {
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)Z_Malloc(0xc);
      puVar5[1] = param_1;
      puVar5[2] = param_2;
      *puVar5 = DAT_20241840;
      DAT_20241840 = puVar5;
      return;
    }
    pbVar6 = (byte *)puVar5[1];
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_20019192:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_20019197;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_20019192;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_20019197:
    if (iVar4 == 0) {
      Com_Printf(s_Cmd_AddCommand___s_already_defin_20120258,param_1);
      return;
    }
    puVar5 = (undefined4 *)*puVar5;
  } while( true );
}

