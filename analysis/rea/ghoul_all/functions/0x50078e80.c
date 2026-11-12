// rea decompile_all
// name: FUN_50078e80
// address: 0x50078e80
// body: available
// range: 0x50078e80-0x50078ece inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50078e80(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(*(undefined4 *)((int)this + 0x48)) {
  case 0xfffffffc:
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x74) != 0)) {
      return *(int *)(iVar1 + 0x74) + 0x14;
    }
    break;
  case 0xfffffffd:
  case 0xfffffffe:
  case 0xffffffff:
    break;
  default:
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if (iVar1 != 0) {
      iVar2 = *(int *)((int)this + 0x48) + iVar1;
    }
  }
  return iVar2;
}

