// rea decompile_all
// name: FUN_5006b450
// address: 0x5006b450
// body: available
// range: 0x5006b450-0x5006b4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_5006b450(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = &PTR_LAB_50128eb8;
  *(undefined1 *)(param_1 + 4) = local_1;
  *(undefined1 *)((int)param_1 + 0x11) = local_1;
  *(undefined1 *)(param_1 + 7) = 1;
  pvVar2 = operator_new(0x20);
  *(undefined1 *)((int)pvVar2 + 0x1c) = 1;
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x1d) = 0;
  param_1[6] = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x1d) = 1;
  *(undefined4 *)param_1[6] = 0;
  *(undefined4 *)(param_1[6] + 8) = 0;
  uVar1 = param_1[6];
  pvVar2 = operator_new(0x20);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x1c) = 0;
  *(undefined1 *)((int)pvVar2 + 0x1d) = 0;
  param_1[5] = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(undefined4 *)(param_1[5] + 8) = param_1[5];
  param_1[8] = 0;
  *param_1 = &PTR_LAB_50128da8;
  return param_1;
}

