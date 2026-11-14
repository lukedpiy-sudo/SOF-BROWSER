// rea decompile_all
// name: FUN_30017ae0
// address: 0x30017ae0
// body: available
// range: 0x30017ae0-0x30017b7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_30017ae0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  if ((8191.0 < ABS(*(float *)((int)this + 4))) &&
     (fVar3 = (float10)(*DAT_3008fe28)(0,0x3f800000), (float10)0.333 < fVar3)) {
    return 0;
  }
  while( true ) {
    if (this == param_2) {
      return 1;
    }
    fVar1 = SQRT((param_1[1] - *(float *)((int)this + 4)) * (param_1[1] - *(float *)((int)this + 4))
                 + (*param_1 - *(float *)this) * (*param_1 - *(float *)this));
    if (fVar1 < 800.0) break;
    if (fVar1 < 2000.0) {
      if (1 < iVar2) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    }
    this = (void *)((int)this + 0x48);
  }
  return 0;
}

