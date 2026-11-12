// rea decompile_all
// name: FUN_50065580
// address: 0x50065580
// body: available
// range: 0x50065580-0x500656d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50065580(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
  pbVar5 = &DAT_5015911c;
  if (iVar2 == 0) {
    pbVar3 = (byte *)(param_1 + 0x94);
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_5006560f:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_50065614;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_5006560f;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_50065614:
    if (iVar2 != 0) {
      uVar4 = (*DAT_5015c9f8)((byte *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x13c) = uVar4;
    }
  }
  else {
    pbVar3 = (byte *)(param_1 + 0x54);
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_500655c7:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_500655cc;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_500655c7;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_500655cc:
    if (iVar2 != 0) {
      uVar4 = (*DAT_5015c9f8)((byte *)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 0x138) = uVar4;
    }
  }
  pbVar3 = &DAT_5015911c;
  pbVar5 = (byte *)(param_1 + 0x14);
  do {
    bVar1 = *pbVar5;
    bVar6 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) {
LAB_5006565a:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_5006565f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar6 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) goto LAB_5006565a;
    pbVar5 = pbVar5 + 2;
    pbVar3 = pbVar3 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_5006565f:
  if (iVar2 != 0) {
    uVar4 = (*DAT_5015c9f8)((byte *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x134) = uVar4;
  }
  pbVar3 = &DAT_5015911c;
  pbVar5 = (byte *)(param_1 + 0xd4);
  do {
    bVar1 = *pbVar5;
    bVar6 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) {
LAB_500656a8:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_500656ad;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar6 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) goto LAB_500656a8;
    pbVar5 = pbVar5 + 2;
    pbVar3 = pbVar3 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_500656ad:
  if (iVar2 != 0) {
    uVar4 = (*DAT_5015c9f8)((byte *)(param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0x140) = uVar4;
  }
  if (*(code **)(param_1 + 300) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x500656cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 300))();
  return;
}

