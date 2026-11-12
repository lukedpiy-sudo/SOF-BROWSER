// rea decompile_all
// name: FUN_50062260
// address: 0x50062260
// body: available
// range: 0x50062260-0x50062346 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50062260(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ('\0' < param_1) {
    if (*(int *)((int)this + 0x98) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)((int)this + 0x9c) - *(int *)((int)this + 0x98)) / 0x1c;
    }
    if (((uint)(int)param_1 < uVar2) &&
       (iVar1 = *(int *)((int)this + 0x98) + param_1 * 0x1c, iVar1 != 0)) {
      FUN_500adb20((byte *)s_PATH__d__start_node____d__end_no_50143400);
      iVar3 = 0;
      if (*(char *)(iVar1 + 0x18) < '\x01') {
        return;
      }
      do {
        FUN_500adb20((byte *)s____with_path__d_between_nodes__d_501433d4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(char *)(iVar1 + 0x18));
      return;
    }
  }
  FUN_500adb20((byte *)s__d_is_not_a_valid_path__501433b8);
  return;
}

