// rea decompile_all
// name: FUN_500fe400
// address: 0x500fe400
// body: available
// range: 0x500fe400-0x500fe4d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500fe400(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  byte local_400 [512];
  byte local_200 [512];
  
  puVar2 = FUN_50107030(param_2,&DAT_501557dc);
  if (puVar2 != (uint *)0x0) {
    return;
  }
  do {
    pbVar5 = param_1;
    if (*param_1 == 0x5c) {
      pbVar5 = param_1 + 1;
    }
    pbVar6 = local_400;
    bVar1 = *pbVar5;
    while (bVar1 != 0x5c) {
      if (bVar1 == 0) {
        return;
      }
      *pbVar6 = bVar1;
      pbVar4 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar4;
    }
    bVar1 = pbVar5[1];
    *pbVar6 = 0;
    pbVar6 = local_200;
    while ((pbVar4 = pbVar5 + 1, bVar1 != 0x5c && (bVar1 != 0))) {
      *pbVar6 = bVar1;
      pbVar6 = pbVar6 + 1;
      bVar1 = pbVar5[2];
      pbVar5 = pbVar4;
    }
    *pbVar6 = 0;
    pbVar5 = local_400;
    puVar2 = param_2;
    do {
      bVar1 = (byte)*puVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_500fe4a2:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_500fe4a7;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)puVar2 + 1);
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_500fe4a2;
      puVar2 = (uint *)((int)puVar2 + 2);
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_500fe4a7:
    if (iVar3 == 0) {
      iVar3 = (int)param_1 - (int)pbVar4;
      do {
        bVar1 = *pbVar4;
        pbVar4[iVar3] = bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      return;
    }
    param_1 = pbVar4;
    if (*pbVar4 == 0) {
      return;
    }
  } while( true );
}

