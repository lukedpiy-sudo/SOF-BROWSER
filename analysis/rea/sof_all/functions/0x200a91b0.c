// rea decompile_all
// name: FUN_200a91b0
// address: 0x200a91b0
// body: available
// range: 0x200a91b0-0x200a9234 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200a91b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(in_ECX + 4);
  if ((undefined4 *)local_8[1] != *(undefined4 **)(in_ECX + 8)) {
    uVar1 = *(uint *)(param_1 + 8);
    puVar5 = (undefined4 *)local_8[1];
    do {
      pbVar8 = &DAT_201116cc;
      if (*(byte **)(param_1 + 4) != (byte *)0x0) {
        pbVar8 = *(byte **)(param_1 + 4);
      }
      uVar2 = puVar5[5];
      uVar3 = uVar2;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
      bVar9 = false;
      uVar4 = 0;
      bVar10 = true;
      pbVar7 = (byte *)puVar5[4];
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        bVar9 = *pbVar7 < *pbVar8;
        bVar10 = *pbVar7 == *pbVar8;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (bVar10);
      if (!bVar10) {
        uVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (uVar4 == 0) {
        if (uVar1 <= uVar2) {
          uVar4 = (uint)(uVar2 != uVar1);
          goto LAB_200a9213;
        }
LAB_200a9215:
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
LAB_200a9213:
        if ((int)uVar4 < 0) goto LAB_200a9215;
        puVar6 = (undefined4 *)*puVar5;
        local_8 = puVar5;
      }
      puVar5 = puVar6;
    } while (puVar6 != *(undefined4 **)(in_ECX + 8));
  }
  return local_8;
}

