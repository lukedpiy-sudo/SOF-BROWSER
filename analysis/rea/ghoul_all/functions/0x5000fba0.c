// rea decompile_all
// name: FUN_5000fba0
// address: 0x5000fba0
// body: available
// range: 0x5000fba0-0x5000fbfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_5000fba0(void *this,uint param_1,uint param_2,uint param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,float param_7,undefined4 param_8)

{
  FUN_5000b420(this,param_1,param_2,param_3,param_5,param_6,0,param_7,param_8);
  *(undefined ***)this = &PTR_FUN_50125f50;
  *(undefined4 *)((int)this + 0x14) = *param_5;
  *(undefined4 *)((int)this + 0x18) = param_5[1];
  *(undefined4 *)((int)this + 0x1c) = param_5[2];
  *(undefined4 *)((int)this + 0x6c) = param_4;
  *(undefined ***)this = &PTR_FUN_50125ac0;
  return this;
}

