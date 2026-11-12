// rea decompile_all
// name: FUN_5004d600
// address: 0x5004d600
// body: available
// range: 0x5004d600-0x5004d693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __thiscall FUN_5004d600(void *this,float param_1,float param_2)

{
  int iVar1;
  float local_c [3];
  
  if ((((*(float *)(DAT_5015cca4 + 0x18) == 0.0) && (*(int *)this != 0)) &&
      (0 < *(int *)((int)this + 0x10))) && (DAT_5015d1ec != 0)) {
    FUN_500fdd70((float *)(DAT_5015d1ec + 0x10),local_c,(float *)0x0,(float *)0x0);
    iVar1 = *(int *)((int)this + 0x24);
    *(int *)((int)this + 0x24) = iVar1 + 1;
    iVar1 = FUN_5004bec0((float)iVar1,param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}

