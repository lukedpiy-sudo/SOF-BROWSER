// rea decompile_all
// name: FUN_500fe320
// address: 0x500fe320
// body: available
// range: 0x500fe320-0x500fe3f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __cdecl FUN_500fe320(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  byte local_200 [512];
  
  uVar5 = DAT_5018bde8 ^ 1;
  DAT_5018bde8 = uVar5;
  if (*param_1 == 0x5c) {
    param_1 = param_1 + 1;
  }
  do {
    pbVar4 = local_200;
    bVar1 = *param_1;
    while (bVar1 != 0x5c) {
      if (bVar1 == 0) goto LAB_500fe3e8;
      *pbVar4 = bVar1;
      pbVar6 = param_1 + 1;
      pbVar4 = pbVar4 + 1;
      param_1 = param_1 + 1;
      bVar1 = *pbVar6;
    }
    pbVar6 = param_1 + 1;
    *pbVar4 = 0;
    pbVar4 = &DAT_5018b5d0 + uVar5 * 0x200;
    bVar1 = *pbVar6;
    while ((bVar1 != 0x5c && (bVar1 != 0))) {
      *pbVar4 = bVar1;
      pbVar2 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar2;
    }
    *pbVar4 = 0;
    pbVar4 = local_200;
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_500fe3bf:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_500fe3c4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_500fe3bf;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_500fe3c4:
    if (iVar3 == 0) {
      return &DAT_5018b5d0 + uVar5 * 0x200;
    }
    if (*pbVar6 == 0) {
LAB_500fe3e8:
      return &DAT_5015911c;
    }
    param_1 = pbVar6 + 1;
  } while( true );
}

