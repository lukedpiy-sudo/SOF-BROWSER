// rea decompile_all
// name: FUN_5000e9a0
// address: 0x5000e9a0
// body: available
// range: 0x5000e9a0-0x5000e9f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_5000e9a0(void *this,uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  FUN_5000b420(this,param_1,param_2,param_3,&DAT_5018bf0c,&DAT_5018bf0c,0,1e+11,0);
  *(undefined ***)this = &PTR_FUN_50125d78;
  *(undefined4 *)((int)this + 0x78) = 0;
  uVar1 = DAT_5015ccdc;
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x70) = uVar1;
  *(undefined ***)this = &PTR_FUN_50125cf0;
  return this;
}

