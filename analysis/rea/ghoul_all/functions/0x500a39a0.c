// rea decompile_all
// name: FUN_500a39a0
// address: 0x500a39a0
// body: available
// range: 0x500a39a0-0x500a3a4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500a39a0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar1 = **(int **)((int)this + 4);
  local_8 = *(int *)((int)this + 8);
  if (0 < local_8) {
    do {
      iVar2 = *(int *)(iVar1 + 8);
      iVar3 = **(int **)(iVar2 + 4);
      iVar4 = *(int *)(iVar2 + 8);
      if (0 < iVar4) {
        do {
          FUN_500a2ca0(*(void **)(iVar3 + 8),param_1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (*(int **)(iVar2 + 0x1c) != (int *)0x0) {
        (**(code **)(**(int **)(iVar2 + 0x1c) + 0x54))(param_1);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if (*(int *)((int)this + 0x10) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x10) + 0x164) = 0;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x10) + 0x74);
  if (*(int *)(iVar1 + 0x7c) != 0) {
    *(undefined4 *)(iVar1 + 0x7c) = 0;
  }
  *(int *)((int)this + 0x10) = param_1;
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)((int)this + 0xc);
                    /* WARNING: Could not recover jumptable at 0x500a3a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)((int)this + 0x10) + 0x164) + 0x54))();
  return;
}

