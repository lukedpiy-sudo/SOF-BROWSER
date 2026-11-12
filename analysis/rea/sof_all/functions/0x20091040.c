// rea decompile_all
// name: FUN_20091040
// address: 0x20091040
// body: available
// range: 0x20091040-0x200910e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20091040(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int in_ECX;
  
  uVar2 = FUN_200c2870(*(int *)(*param_1 * 4 + *(int *)(param_1[3] + 0x14)) +
                       *(int *)(*param_1 * 4 + *(int *)(param_1[3] + 4)));
  FUN_200c2e40(param_1,in_ECX + 0x74,param_2,in_ECX + 0xcc);
  FUN_200aaed0(param_1,param_2);
  iVar1 = *(int *)(in_ECX + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(iVar1 + 0x68);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(iVar1 + 0x6c);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(iVar1 + 0x70);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(iVar1 + 0x74);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(iVar1 + 0x78);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(iVar1 + 0x7c);
  *(undefined1 *)(in_ECX + 0x104) = *(undefined1 *)(iVar1 + 0x80);
  *(undefined1 *)(in_ECX + 0x105) = *(undefined1 *)(iVar1 + 0x81);
  return CONCAT31((int3)((uint)(iVar1 + 0x68) >> 8),uVar2);
}

