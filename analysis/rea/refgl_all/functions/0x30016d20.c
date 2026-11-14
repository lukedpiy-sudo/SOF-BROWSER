// rea decompile_all
// name: FUN_30016d20
// address: 0x30016d20
// body: available
// range: 0x30016d20-0x30016d5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_30016d20(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (undefined4 *)*param_1 + 1;
  *(undefined4 *)this = uVar1;
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (undefined4 *)*param_1 + 1;
  *(undefined4 *)((int)this + 4) = uVar1;
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (undefined4 *)*param_1 + 1;
  *(undefined4 *)((int)this + 8) = uVar1;
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (undefined4 *)*param_1 + 1;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return 1;
}

