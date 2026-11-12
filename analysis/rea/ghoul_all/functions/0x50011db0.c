// rea decompile_all
// name: FUN_50011db0
// address: 0x50011db0
// body: available
// range: 0x50011db0-0x50011df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50011db0(void *this,undefined4 param_1,int param_2,float param_3,int param_4)

{
  float fVar1;
  
  if (*(int *)((int)this + 0x20) == 0) {
    if (param_4 != 0) goto LAB_50011de1;
  }
  else {
    if (param_4 != 0) goto LAB_50011de1;
    if (param_2 != 5) {
      return;
    }
  }
  if (((*(int *)((int)this + 0x1c) == 5) || (*(int *)((int)this + 0x1c) == 4)) && (param_2 != 5)) {
    return;
  }
LAB_50011de1:
  *(int *)((int)this + 0x1c) = param_2;
  fVar1 = DAT_5015ccdc + param_3;
  *(int *)((int)this + 0x20) = param_4;
  *(float *)((int)this + 0x18) = fVar1;
  return;
}

