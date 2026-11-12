// rea decompile_all
// name: FUN_200216d0
// address: 0x200216d0
// body: available
// range: 0x200216d0-0x2002175c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20021758 to 0x200fafcc FUN_200fafcc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_200216d0(byte *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  float10 fVar7;
  
  puVar2 = DAT_2024b1d8;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return (float10)0.0;
    }
    pbVar3 = param_1;
    pbVar5 = (byte *)*puVar2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_2002170a:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_2002170f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_2002170a;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_2002170f:
    if (iVar4 == 0) {
LAB_2002174d:
      fVar7 = (float10)FUN_200fafcc();
      return fVar7;
    }
    iVar4 = 7;
    bVar6 = true;
    pbVar3 = param_1;
    pbVar5 = (byte *)s_matrix_20130c20;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar6 = *pbVar3 == *pbVar5;
      pbVar3 = pbVar3 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar4 = 10;
      bVar6 = true;
      pbVar3 = (byte *)*puVar2;
      pbVar5 = (byte *)s_timescale_2011d508;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar6 = *pbVar3 == *pbVar5;
        pbVar3 = pbVar3 + 1;
        pbVar5 = pbVar5 + 1;
      } while (bVar6);
      if (bVar6) goto LAB_2002174d;
    }
    puVar2 = (undefined4 *)puVar2[7];
  } while( true );
}

