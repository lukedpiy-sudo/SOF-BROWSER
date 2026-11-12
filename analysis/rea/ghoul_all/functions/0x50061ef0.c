// rea decompile_all
// name: FUN_50061ef0
// address: 0x50061ef0
// body: available
// range: 0x50061ef0-0x50061fad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50061ef0(void *this,ushort param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x18) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  if ((param_1 != 0) && (uVar1 = (uint)param_1, (int)uVar1 < iVar3)) {
    if ((param_2 == 0) || (uVar2 = (uint)param_2, iVar3 <= (int)uVar2)) {
      if (param_2 == 0) {
        iVar3 = *(int *)(*(int *)((int)this + 0x18) + 0x28 + uVar1 * 0x34);
        if (iVar3 != 0) {
          *(undefined4 *)(*(int *)((int)this + 0x18) + 0x28 + iVar3 * 0x34) = 0;
          *(undefined4 *)(uVar1 * 0x34 + 0x28 + *(int *)((int)this + 0x18)) = 0;
        }
      }
    }
    else {
      iVar3 = *(int *)((int)this + 0x18);
      if ((*(int *)(iVar3 + 0x28 + uVar1 * 0x34) == 0) &&
         (*(int *)(uVar2 * 0x34 + 0x28 + iVar3) == 0)) {
        *(uint *)(iVar3 + 0x28 + uVar1 * 0x34) = uVar2;
        *(uint *)(uVar2 * 0x34 + 0x28 + *(int *)((int)this + 0x18)) = uVar1;
        return;
      }
    }
  }
  return;
}

