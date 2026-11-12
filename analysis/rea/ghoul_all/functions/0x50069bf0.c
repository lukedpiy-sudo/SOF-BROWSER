// rea decompile_all
// name: FUN_50069bf0
// address: 0x50069bf0
// body: available
// range: 0x50069bf0-0x50069c79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50069bf0(void *this,int param_1)

{
  switch(param_1) {
  case 2:
  case 5:
  case 8:
  case 0xb:
  case 0x14:
  case 0x17:
  case 0x1a:
  case 0x23:
  case 0x26:
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 4) + 0xf0) = 0x3fe00000;
    break;
  case 3:
  case 6:
  case 9:
  case 0x12:
  case 0x15:
  case 0x18:
  case 0x1b:
  case 0x1e:
  case 0x21:
  case 0x24:
  case 0x27:
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 4) + 0xf0) = 0x3fe00000;
    return;
  case 4:
  case 7:
  case 10:
  case 0x13:
  case 0x16:
  case 0x19:
  case 0x1c:
  case 0x1f:
  case 0x22:
  case 0x25:
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 4) + 0xf0) = 0x3fe00000;
    return;
  case 0xc:
  case 0xf:
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 4) + 0xf0) = 0x40000000;
    return;
  case 0xd:
  case 0x10:
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 4) + 0xf0) = 0x40000000;
    return;
  case 0xe:
  case 0x11:
  case 0x20:
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 4) + 0xf0) = 0x40000000;
    return;
  case 0x1d:
    *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 4) + 0xf0) = 0x3fa00000;
    return;
  }
  return;
}

