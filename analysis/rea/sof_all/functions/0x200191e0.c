// rea decompile_all
// name: Cmd_RemoveCommand
// address: 0x200191e0
// body: available
// range: 0x200191e0-0x2001924f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cmd_RemoveCommand(byte *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  
                    /* 0x191e0  5  Cmd_RemoveCommand */
  puVar2 = &DAT_20241840;
  do {
    puVar5 = puVar2;
    puVar2 = (undefined4 *)*puVar5;
    if (puVar2 == (undefined4 *)0x0) {
      Com_Printf(s_Cmd_RemoveCommand___s_not_added_201202ac,param_1);
      return;
    }
    pbVar6 = (byte *)puVar2[1];
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_2001921d:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_20019222;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_2001921d;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_20019222:
    if (iVar4 == 0) {
      *puVar5 = *puVar2;
      Z_Free(puVar2);
      return;
    }
  } while( true );
}

