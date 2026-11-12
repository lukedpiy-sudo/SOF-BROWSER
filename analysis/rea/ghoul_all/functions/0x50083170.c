// rea decompile_all
// name: FUN_50083170
// address: 0x50083170
// body: available
// range: 0x50083170-0x500831e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50083170(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(char *)(*(int *)(param_1 + 4) + -1) == '\0'))
  goto LAB_500831d6;
  uVar1 = *(uint *)(param_1 + 8);
  if (0xfffffffd < uVar1) {
    FUN_50106b6b();
  }
  if (uVar1 < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 8) = uVar1;
  }
  puVar2 = *(undefined1 **)(param_1 + 4);
  if ((puVar2 == (undefined1 *)0x0) || (puVar2[-1] == '\0')) {
    if (uVar1 == 0) {
      if (puVar2 != (undefined1 *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *puVar2 = 0;
      }
      goto LAB_500831d6;
    }
    if (uVar1 <= *(uint *)(param_1 + 0xc)) goto LAB_500831d6;
  }
  else if (uVar1 == 0) {
    puVar2[-1] = puVar2[-1] + -1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    goto LAB_500831d6;
  }
  FUN_50083080(uVar1);
LAB_500831d6:
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0;
  }
  return;
}

