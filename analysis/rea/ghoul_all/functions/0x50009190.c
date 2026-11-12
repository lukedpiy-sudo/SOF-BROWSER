// rea decompile_all
// name: FUN_50009190
// address: 0x50009190
// body: available
// range: 0x50009190-0x500094c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50009190(void *this,undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 0:
    *(undefined4 *)((int)this + 0x10) = 0x3f800000;
    *(undefined4 *)((int)this + 0xc) = 0x3e4ccccd;
    *(undefined4 *)((int)this + 0x14) = 0x40c00000;
    *(undefined4 *)((int)this + 0x18) = 0x41a00000;
    *(undefined4 *)((int)this + 0x1c) = 0;
    break;
  case 1:
    *(undefined4 *)((int)this + 0x10) = 0x3f800000;
    *(undefined4 *)((int)this + 0xc) = 0x3e800000;
    *(undefined4 *)((int)this + 0x14) = 0x40a00000;
    *(undefined4 *)((int)this + 0x18) = 0x42200000;
    *(undefined4 *)((int)this + 0x1c) = 0;
    break;
  case 2:
    *(undefined4 *)((int)this + 0x10) = 0x3f800000;
    *(undefined4 *)((int)this + 0x18) = 0x42f00000;
    *(undefined4 *)((int)this + 0x1c) = 0;
    goto LAB_50009266;
  case 3:
    *(undefined4 *)((int)this + 0x10) = 0x3f800000;
    *(undefined4 *)((int)this + 0xc) = 0x3eb33333;
    *(undefined4 *)((int)this + 0x14) = 0x40800000;
    *(undefined4 *)((int)this + 0x18) = 0x42a00000;
    *(undefined4 *)((int)this + 0x1c) = 0;
    break;
  case 4:
    *(undefined4 *)((int)this + 0x10) = 0x3f800000;
    *(undefined4 *)((int)this + 0xc) = 0x3eb33333;
    *(undefined4 *)((int)this + 0x14) = 0x40800000;
    *(undefined4 *)((int)this + 0x18) = 0x42f00000;
    *(undefined4 *)((int)this + 0x1c) = 0;
    break;
  case 5:
    *(undefined4 *)((int)this + 0x10) = 0x3f000000;
    *(undefined4 *)((int)this + 0x14) = 0x40600000;
    *(undefined4 *)((int)this + 0x18) = 0x430c0000;
    *(undefined4 *)((int)this + 0x1c) = 0;
    goto LAB_5000926d;
  case 6:
    *(undefined4 *)((int)this + 0x10) = 0x3f000000;
    *(undefined4 *)((int)this + 0x18) = 0x43480000;
    *(undefined4 *)((int)this + 0x1c) = 5;
LAB_50009266:
    *(undefined4 *)((int)this + 0x14) = 0x40400000;
LAB_5000926d:
    *(undefined4 *)((int)this + 0xc) = 0x3ecccccd;
    break;
  default:
    goto switchD_50009287_switchD;
  }
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
switchD_50009287_switchD:
  switch(param_2) {
  case 3:
    *(undefined4 *)this = 0x43c00000;
    *(undefined4 *)((int)this + 4) = 0x44400000;
    *(undefined4 *)((int)this + 8) = 0x3f800000;
    *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) * 0.5;
    return;
  case 4:
    *(undefined4 *)this = 0x43c00000;
    *(undefined4 *)((int)this + 4) = 0x44400000;
    *(undefined4 *)((int)this + 8) = 0x3f800000;
    *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) * 0.5;
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * 1.5;
    *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 0.9;
    return;
  case 5:
    *(undefined4 *)this = 0x43000000;
    *(undefined4 *)((int)this + 4) = 0x43800000;
    *(undefined4 *)((int)this + 8) = 0x3f800000;
    *(float *)((int)this + 0x10) = *(float *)((int)this + 0x10) * 0.0;
    *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) + *(float *)((int)this + 0x14);
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) + *(float *)((int)this + 0x18);
    *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 0.35;
    return;
  case 6:
    *(undefined4 *)((int)this + 8) = 0x3f800000;
    *(undefined4 *)this = 0x43400000;
    *(undefined4 *)((int)this + 4) = 0x43e00000;
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x10;
    *(float *)((int)this + 0x10) = *(float *)((int)this + 0x10) * 0.0;
    *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) + *(float *)((int)this + 0x14);
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * 2.5;
    *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 0.35;
    return;
  case 7:
    *(undefined4 *)this = 0x44000000;
    *(undefined4 *)((int)this + 4) = 0x44800000;
    *(undefined4 *)((int)this + 8) = 0;
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 10;
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) + *(float *)((int)this + 0x18);
    *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 3.0;
    return;
  case 9:
    *(undefined4 *)this = 0x43800000;
    *(undefined4 *)((int)this + 4) = 0x44000000;
    *(undefined4 *)((int)this + 8) = 0x3f800000;
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * 4.0;
    return;
  case 0xb:
    *(undefined4 *)this = 0x42c00000;
    *(undefined4 *)((int)this + 4) = 0x43400000;
    *(undefined4 *)((int)this + 8) = 0;
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) + *(float *)((int)this + 0x18);
    *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 0.3;
    return;
  case 0xc:
    *(undefined4 *)this = 0x43800000;
    *(undefined4 *)((int)this + 4) = 0x44000000;
    *(undefined4 *)((int)this + 8) = 0x3f800000;
    *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) * 1.5;
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * 4.0;
    *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 0.35;
    return;
  case 0xe:
    *(undefined4 *)this = 0x43800000;
    *(undefined4 *)((int)this + 4) = 0x44400000;
    *(undefined4 *)((int)this + 8) = 0;
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x15;
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * 7.0;
    return;
  case 0x10:
    *(undefined4 *)this = 0x43800000;
    *(undefined4 *)((int)this + 4) = 0x44000000;
    *(undefined4 *)((int)this + 8) = 0x3f800000;
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * 7.0;
    *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 0.4;
    return;
  case 0x12:
    *(undefined4 *)this = 0x42800000;
    *(undefined4 *)((int)this + 4) = 0x43200000;
    *(undefined4 *)((int)this + 8) = 0;
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x90;
    *(float *)((int)this + 0x10) = *(float *)((int)this + 0x10) * 0.0;
    *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) * 0.0;
    *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * 3.0;
    *(float *)((int)this + 0x20) = *(float *)((int)this + 0x20) + *(float *)((int)this + 0x20);
    *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 5.0;
  }
  return;
}

