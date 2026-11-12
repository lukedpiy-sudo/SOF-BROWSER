// rea decompile_all
// name: FUN_200c5f10
// address: 0x200c5f10
// body: available
// range: 0x200c5f10-0x200c6058 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_200c5f10(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  int *in_ECX;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  if ((int *)*in_ECX != (int *)0x0) {
    uVar3 = (**(code **)(*(int *)*in_ECX + 0x3c))();
    switch(uVar3) {
    case 2:
      uVar1 = *(uint *)(param_1 + 0xc);
      pbVar4 = *(byte **)(param_1 + 8);
      if (pbVar4 == (byte *)0x0) {
        pbVar4 = &DAT_201116cc;
      }
      uVar2 = in_ECX[3];
      uVar6 = uVar2;
      if (uVar1 <= uVar2) {
        uVar6 = uVar1;
      }
      bVar8 = false;
      uVar5 = 0;
      bVar9 = true;
      pbVar7 = (byte *)in_ECX[2];
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        bVar8 = *pbVar7 < *pbVar4;
        bVar9 = *pbVar7 == *pbVar4;
        pbVar7 = pbVar7 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar9);
      if (!bVar9) {
        uVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          return true;
        }
        uVar5 = (uint)(uVar2 != uVar1);
      }
      return (int)uVar5 < 0;
    case 3:
      uVar1 = in_ECX[3];
      pbVar4 = &DAT_201116cc;
      if ((byte *)in_ECX[2] != (byte *)0x0) {
        pbVar4 = (byte *)in_ECX[2];
      }
      uVar2 = *(uint *)(param_1 + 0xc);
      uVar6 = uVar2;
      if (uVar1 <= uVar2) {
        uVar6 = uVar1;
      }
      bVar8 = false;
      uVar5 = 0;
      bVar9 = true;
      pbVar7 = *(byte **)(param_1 + 8);
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        bVar8 = *pbVar7 < *pbVar4;
        bVar9 = *pbVar7 == *pbVar4;
        pbVar7 = pbVar7 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar9);
      if (!bVar9) {
        uVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          return true;
        }
        uVar5 = (uint)(uVar2 != uVar1);
      }
      return (int)uVar5 < 0;
    case 4:
      return in_ECX[6] < *(int *)(param_1 + 0x18);
    case 5:
      return *(int *)(param_1 + 0x18) < in_ECX[6];
    case 6:
      return in_ECX[7] < *(int *)(param_1 + 0x1c);
    case 7:
      return *(int *)(param_1 + 0x1c) < in_ECX[7];
    }
  }
  return true;
}

