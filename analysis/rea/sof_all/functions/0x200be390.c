// rea decompile_all
// name: FUN_200be390
// address: 0x200be390
// body: available
// range: 0x200be390-0x200be4f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_200be390(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if ((param_2 == 0) || (*(char *)(in_ECX + 0x14) != '\0')) {
    return *(undefined1 *)(in_ECX + 0x14);
  }
  iVar4 = *(int *)(in_ECX + 4);
  uVar5 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(in_ECX + 8) - iVar4;
  }
  iVar2 = *(int *)(in_ECX + 0x10);
  iVar1 = iVar2 + -1 + param_2;
  if (uVar3 <= (uint)((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3)) {
    *(undefined1 *)(in_ECX + 0x14) = 1;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  iVar1 = iVar2 + (1 - ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3)) * 8;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  if (iVar1 == 8) {
    pbVar7 = (byte *)(iVar2 + iVar4);
    pbVar8 = param_1;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar8 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    }
  }
  else {
    iVar4 = 0;
    if (0 < (int)uVar5) {
      do {
        pbVar7 = (byte *)(iVar2 + *(int *)(in_ECX + 4));
        iVar2 = iVar2 + 1;
        iVar6 = iVar4 + 1;
        param_1[iVar4] = *pbVar7 >> ((byte)iVar1 & 0x1f);
        iVar4 = iVar6;
      } while (iVar6 < (int)uVar5);
    }
    iVar2 = (int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >> 3;
    pbVar7 = param_1;
    for (iVar4 = 8 - iVar1; iVar4 < param_2; iVar4 = iVar4 + 8) {
      iVar2 = iVar2 + 1;
      *pbVar7 = *pbVar7 | *(char *)(*(int *)(in_ECX + 4) + iVar2) << ((byte)(8 - iVar1) & 0x1f);
      pbVar7 = pbVar7 + 1;
    }
  }
  param_1[uVar5 - 1] =
       param_1[uVar5 - 1] & (byte)(0xff >> ((char)uVar5 * '\b' - (char)param_2 & 0x1fU));
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + param_2;
  return 0;
}

