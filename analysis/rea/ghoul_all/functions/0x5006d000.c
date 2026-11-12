// rea decompile_all
// name: FUN_5006d000
// address: 0x5006d000
// body: available
// range: 0x5006d000-0x5006d069 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5006d000(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *(int *)((int)this + 4) = param_1;
  piVar1 = (int *)(&PTR_DAT_50144c58)[param_1];
  *(int **)((int)this + 8) = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x8c))();
  puVar3 = &DAT_50144e4c;
  if (iVar2 == 0) {
    puVar3 = &DAT_50144958;
  }
  (*DAT_5015cb00)(0x20,puVar3);
  iVar2 = (**(code **)(**(int **)((int)this + 8) + 0x90))();
  puVar3 = &DAT_50144e4c;
  if (iVar2 == 0) {
    puVar3 = &DAT_50144958;
  }
  (*DAT_5015cb00)(0x21,puVar3);
  (**(code **)(**(int **)((int)this + 8) + 0x9c))();
  return;
}

