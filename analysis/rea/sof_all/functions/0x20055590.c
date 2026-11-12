// rea decompile_all
// name: FUN_20055590
// address: 0x20055590
// body: available
// range: 0x20055590-0x20055667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_20055590(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  byte local_200 [512];
  
  uVar5 = DAT_20390b00 ^ 1;
  DAT_20390b00 = uVar5;
  if (*param_1 == 0x5c) {
    param_1 = param_1 + 1;
  }
  do {
    pbVar4 = local_200;
    bVar1 = *param_1;
    while (bVar1 != 0x5c) {
      if (bVar1 == 0) goto LAB_20055658;
      *pbVar4 = bVar1;
      pbVar2 = param_1 + 1;
      pbVar4 = pbVar4 + 1;
      param_1 = param_1 + 1;
      bVar1 = *pbVar2;
    }
    param_1 = param_1 + 1;
    *pbVar4 = 0;
    pbVar4 = &DAT_203902e8 + uVar5 * 0x200;
    bVar1 = *param_1;
    while ((bVar1 != 0x5c && (bVar1 != 0))) {
      *pbVar4 = bVar1;
      pbVar2 = param_1 + 1;
      pbVar4 = pbVar4 + 1;
      param_1 = param_1 + 1;
      bVar1 = *pbVar2;
    }
    *pbVar4 = 0;
    pbVar4 = local_200;
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_2005562f:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_20055634;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_2005562f;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_20055634:
    if (iVar3 == 0) {
      return &DAT_203902e8 + uVar5 * 0x200;
    }
    if (*param_1 == 0) {
LAB_20055658:
      return &DAT_2015ee44;
    }
    param_1 = param_1 + 1;
  } while( true );
}

