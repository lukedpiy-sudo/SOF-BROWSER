// rea decompile_all
// name: FUN_50010040
// address: 0x50010040
// body: available
// range: 0x50010040-0x50010088 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_50010040(void *this,uint param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5,
            undefined4 *param_6,float param_7,undefined4 param_8)

{
  FUN_5000ee90(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,'\0',0);
  *(undefined ***)this = &PTR_FUN_50125998;
  *(undefined4 *)((int)this + 0x78) = 0;
  return this;
}

