// rea decompile_all
// name: FUN_50076840
// address: 0x50076840
// body: available
// range: 0x50076840-0x500768e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_50076840(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar2 = DAT_5015c4e4;
  if (DAT_5015c4e8 != 0) {
    for (puVar7 = (undefined4 *)*DAT_5015c4e4; puVar7 != DAT_5015c4e4;
        puVar7 = (undefined4 *)*puVar7) {
      pbVar3 = (byte *)(puVar7[2] + 4);
      pbVar6 = (byte *)(param_1 + 4);
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_5007688c:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_50076891;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_5007688c;
        pbVar6 = pbVar6 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_50076891:
      if (iVar4 == 0) {
        if (puVar7[2] != 0) {
          return puVar7[2] & 0xffffff00;
        }
        break;
      }
    }
  }
  puVar7 = (undefined4 *)DAT_5015c4e4[1];
  puVar5 = operator_new(0xc);
  *puVar5 = puVar2;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = puVar5;
  }
  puVar5[1] = puVar7;
  puVar2[1] = puVar5;
  *(undefined4 **)puVar5[1] = puVar5;
  if (puVar5 + 2 != (int *)0x0) {
    puVar5[2] = param_1;
  }
  DAT_5015c4e8 = DAT_5015c4e8 + 1;
  return CONCAT31((int3)((uint)DAT_5015c4e8 >> 8),1);
}

