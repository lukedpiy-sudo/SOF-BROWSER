// rea decompile_all
// name: FUN_3000a540
// address: 0x3000a540
// body: available
// range: 0x3000a540-0x3000a5e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3000a540(int param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float local_300 [2];
  undefined4 local_2f8 [190];
  
  DAT_3007c67c = param_1;
  uVar4 = (uint)*(ushort *)(param_1 + 10);
  uVar6 = 0;
  if (uVar4 != 0) {
    iVar8 = *(int *)(param_1 + 0xc) << 2;
    puVar5 = local_2f8;
    uVar7 = uVar4;
    do {
      iVar3 = *(int *)(iVar8 + *(int *)(DAT_3007c678 + 0xc0));
      if (iVar3 < 1) {
        uVar2 = *(ushort *)(*(int *)(DAT_3007c678 + 0x94) + iVar3 * -4 + 2);
      }
      else {
        uVar2 = *(ushort *)(*(int *)(DAT_3007c678 + 0x94) + iVar3 * 4);
      }
      iVar8 = iVar8 + 4;
      puVar1 = (undefined4 *)(*(int *)(DAT_3007c678 + 0x8c) + (uint)uVar2 * 0xc);
      uVar7 = uVar7 - 1;
      puVar5[-2] = *puVar1;
      puVar5[-1] = puVar1[1];
      *puVar5 = puVar1[2];
      puVar5 = puVar5 + 3;
      uVar6 = uVar4;
    } while (uVar7 != 0);
  }
  FUN_3000a5f0(uVar6,local_300);
  return;
}

