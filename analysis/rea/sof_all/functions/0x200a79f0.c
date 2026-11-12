// rea decompile_all
// name: FUN_200a79f0
// address: 0x200a79f0
// body: available
// range: 0x200a79f0-0x200a7a9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a79f0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  
  puVar9 = *(undefined4 **)(in_ECX + 4);
  puVar6 = (undefined4 *)puVar9[1];
  if ((undefined4 *)puVar9[1] != *(undefined4 **)(in_ECX + 8)) {
    do {
      iVar3 = FUN_20023c40(param_2);
      if (iVar3 < 0) {
        puVar7 = (undefined4 *)puVar6[2];
      }
      else {
        puVar7 = (undefined4 *)*puVar6;
        puVar9 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != *(undefined4 **)(in_ECX + 8));
  }
  if (puVar9 != *(undefined4 **)(in_ECX + 4)) {
    uVar1 = puVar9[5];
    pbVar10 = (byte *)puVar9[4];
    if (pbVar10 == (byte *)0x0) {
      pbVar10 = &DAT_201116cc;
    }
    uVar2 = *(uint *)(param_2 + 8);
    uVar5 = uVar2;
    if (uVar1 <= uVar2) {
      uVar5 = uVar1;
    }
    bVar11 = false;
    uVar4 = 0;
    bVar12 = true;
    pbVar8 = *(byte **)(param_2 + 4);
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar11 = *pbVar8 < *pbVar10;
      bVar12 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar12);
    if (!bVar12) {
      uVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
    }
    if (uVar4 == 0) {
      if (uVar2 < uVar1) goto LAB_200a7a83;
      uVar4 = (uint)(uVar2 != uVar1);
    }
    if (-1 < (int)uVar4) {
      *param_1 = puVar9;
      return;
    }
  }
LAB_200a7a83:
  *param_1 = *(undefined4 **)(in_ECX + 4);
  return;
}

