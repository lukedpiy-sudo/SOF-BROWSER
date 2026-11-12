// rea decompile_all
// name: FUN_500fc150
// address: 0x500fc150
// body: available
// range: 0x500fc150-0x500fc1dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_500fc150(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50115afb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x2c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    pvVar2 = operator_new(0xc);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)pvVar2 + 8) = 0;
    }
    *(void **)((int)pvVar2 + 4) = pvVar2;
    *(void **)pvVar2 = pvVar2;
    puVar1[1] = pvVar2;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[7] = 0;
    *puVar1 = &PTR_LAB_5012982c;
    *(undefined1 *)(puVar1 + 3) = 1;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

