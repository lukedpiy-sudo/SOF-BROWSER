// rea decompile_all
// name: FUN_50027190
// address: 0x50027190
// body: available
// range: 0x50027190-0x50027262 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50027190(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0xb4))(param_1);
  switch(uVar1) {
  default:
    *(undefined4 *)((int)this + 0x1c4) = 1;
    return;
  case 3:
    *(undefined4 *)((int)this + 0x1c4) = 0x12;
    return;
  case 4:
    *(undefined4 *)((int)this + 0x1c4) = 9;
    return;
  case 5:
    *(undefined4 *)((int)this + 0x1c4) = 0x21;
    return;
  case 6:
    *(undefined4 *)((int)this + 0x1c4) = 0x28;
    return;
  case 7:
    *(undefined4 *)((int)this + 0x1c4) = 6;
    return;
  case 9:
    *(undefined4 *)((int)this + 0x1c4) = 10;
    return;
  case 0xb:
    *(undefined4 *)((int)this + 0x1c4) = 8;
    return;
  case 0xc:
    *(undefined4 *)((int)this + 0x1c4) = 0x1e;
    return;
  case 0xe:
    *(undefined4 *)((int)this + 0x1c4) = 4;
    return;
  case 0x10:
  case 0x11:
  case 0x1d:
    *(undefined4 *)((int)this + 0x1c4) = 100;
    return;
  case 0x12:
    *(undefined4 *)((int)this + 0x1c4) = 100000;
    return;
  }
}

