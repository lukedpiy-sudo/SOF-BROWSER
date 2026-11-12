// rea decompile_all
// name: FUN_20076600
// address: 0x20076600
// body: available
// range: 0x20076600-0x20076652 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20076600(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  uVar4 = 0xffffffff;
  uVar2 = *(uint *)(in_ECX + 8);
  pbVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  uVar5 = ~uVar4 - 1;
  uVar4 = uVar2;
  if (uVar5 <= uVar2) {
    uVar4 = uVar5;
  }
  bVar7 = false;
  uVar3 = 0;
  bVar8 = true;
  pbVar6 = *(byte **)(in_ECX + 4);
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar7 = *pbVar6 < *param_1;
    bVar8 = *pbVar6 == *param_1;
    pbVar6 = pbVar6 + 1;
    param_1 = param_1 + 1;
  } while (bVar8);
  if (!bVar8) {
    uVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
  }
  if (uVar3 == 0) {
    if (uVar2 < uVar5) {
      return 0xffffffff;
    }
    uVar3 = (uint)(uVar2 != uVar5);
  }
  return uVar3;
}

