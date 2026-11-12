// rea decompile_all
// name: FUN_50069aa0
// address: 0x50069aa0
// body: available
// range: 0x50069aa0-0x50069b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50069aa0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  switch(param_1) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    uVar2 = 0xc0c00000;
    break;
  case 10:
  case 0x23:
    uVar2 = 0;
    break;
  case 0xb:
  case 0x11:
    uVar2 = 0x3f800000;
    break;
  case 0x10:
    uVar2 = 0xbf000000;
    break;
  case 0x12:
  case 0x13:
    uVar2 = 0xbfc00000;
    break;
  case 0x14:
  case 0x18:
  case 0x19:
    uVar2 = 0xc0400000;
    break;
  case 0x15:
  case 0x16:
    uVar2 = 0xc0000000;
    break;
  case 0x17:
    uVar2 = 0xc1080000;
    break;
  case 0x1a:
    uVar2 = 0xc1280000;
    break;
  case 0x1b:
    uVar2 = 0xc1000000;
    break;
  case 0x1c:
    uVar2 = 0xc0200000;
    break;
  case 0x1e:
    uVar2 = 0xc1100000;
    break;
  case 0x1f:
  case 0x21:
    uVar2 = 0xc0a00000;
    break;
  case 0x20:
    uVar2 = 0xc0900000;
    break;
  case 0x22:
    uVar2 = 0x3f000000;
  }
  iVar1 = *(int *)((int)this + param_1 * 4 + 4);
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = uVar2;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  return;
}

