// rea decompile_all
// name: FUN_50004d40
// address: 0x50004d40
// body: available
// range: 0x50004d40-0x50004dde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_50004d40(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)((int)this + 0x250);
  if (piVar2 != *(int **)((int)this + 0x250)) {
    do {
      iVar1 = (**(code **)(*(int *)piVar2[2] + 0x38))(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x250));
  }
  piVar2 = (int *)**(int **)((int)this + 0x25c);
  if (piVar2 != *(int **)((int)this + 0x25c)) {
    do {
      iVar1 = (**(code **)(*(int *)piVar2[2] + 0x58))(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x25c));
  }
  piVar2 = (int *)**(int **)((int)this + 0x268);
  if (piVar2 != *(int **)((int)this + 0x268)) {
    do {
      iVar1 = (**(code **)(*(int *)piVar2[2] + 0x44))(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x268));
  }
  if ((*(int **)((int)this + 0x18c) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0x18c) + 0x58))(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

