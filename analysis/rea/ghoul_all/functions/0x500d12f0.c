// rea decompile_all
// name: FUN_500d12f0
// address: 0x500d12f0
// body: available
// range: 0x500d12f0-0x500d1396 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_500d12f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((-1 < param_1) && (param_1 <= *(int *)((int)this + 0x298))) &&
     (*(int *)((int)this + 0x294) != 0)) {
    iVar2 = 0;
    for (iVar1 = *(int *)((int)this + 0x290); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
      if ((((*(float *)(iVar1 + 0x10) == 0.0) && (*(float *)(iVar1 + 0x14) == 0.0)) &&
          ((*(float *)(iVar1 + 0x18) == 0.0 &&
           ((*(float *)(iVar1 + 0x1c) == 0.0 && (*(float *)(iVar1 + 0x20) == 0.0)))))) &&
         (*(float *)(iVar1 + 0x24) == 0.0)) {
        if (iVar2 == param_1) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return 0;
}

