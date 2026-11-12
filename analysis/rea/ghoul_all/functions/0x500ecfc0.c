// rea decompile_all
// name: FUN_500ecfc0
// address: 0x500ecfc0
// body: available
// range: 0x500ecfc0-0x500ed055 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500ecfc0(void *this,float param_1,float param_2,float param_3)

{
  float local_110 [16];
  undefined4 local_d0;
  float local_cc [16];
  undefined4 local_8c;
  float local_88 [16];
  undefined4 local_48;
  float local_44 [16];
  undefined4 local_4;
  
  local_4 = 0;
  local_d0 = 0;
  local_48 = 0;
  local_8c = 0;
  FUN_500ecef0(local_44,0,param_1);
  FUN_500ecef0(local_110,1,param_2);
  FUN_500ecef0(local_88,2,param_3);
  FUN_500ed0d0(local_cc,local_110,local_88);
  FUN_500ed0d0(this,local_44,local_cc);
  return;
}

