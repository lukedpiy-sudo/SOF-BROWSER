// rea decompile_all
// name: FUN_500071c0
// address: 0x500071c0
// body: available
// range: 0x500071c0-0x50007208 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_500071c0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if ((-1 < param_1) && (param_1 < 9)) {
    *(undefined4 *)((int)this + param_1 * 0xc + 0x2c) = param_2;
    *(undefined4 *)((int)this + param_1 * 0xc + 0x30) = param_3;
    *(undefined4 *)((int)this + param_1 * 0xc + 0x34) = param_4;
    *(undefined4 *)((int)this + param_1 * 0xc + 0x98) = param_5;
    *(undefined4 *)((int)this + param_1 * 0xc + 0x9c) = param_6;
    *(undefined4 *)((int)this + param_1 * 0xc + 0xa0) = param_7;
  }
  return;
}

