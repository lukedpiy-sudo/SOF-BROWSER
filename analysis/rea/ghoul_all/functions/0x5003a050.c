// rea decompile_all
// name: FUN_5003a050
// address: 0x5003a050
// body: available
// range: 0x5003a050-0x5003a15e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_5003a050(void *this,undefined4 param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  
  *(undefined ***)this = &PTR_LAB_50127920;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0x3f000000;
  *(float *)((int)this + 4) = DAT_5015ccdc;
  *(float *)((int)this + 0x1c) = DAT_5015ccdc;
  *(undefined4 *)((int)this + 0x20) = 0;
  fVar1 = DAT_5015ccdc;
  if (param_3 < 0.1) {
    param_3 = 1e+09;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x18) = 1;
  }
  *(float *)((int)this + 0x14) = fVar1 + param_3;
  *(undefined ***)this = &PTR_LAB_50128238;
  *(float *)((int)this + 0x24) = DAT_5015ccdc;
  *(float *)((int)this + 0x28) = DAT_5015ccdc - 1.0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  fVar1 = DAT_5015ccdc - 1000.0;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(float *)((int)this + 0x5c) = fVar1;
  *(float *)((int)this + 0x70) = DAT_5015ccdc - 1000.0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x84) = 1;
  *(undefined4 *)((int)this + 0x88) = 0;
  return this;
}

