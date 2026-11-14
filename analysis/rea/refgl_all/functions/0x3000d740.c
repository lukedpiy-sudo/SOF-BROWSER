// rea decompile_all
// name: FUN_3000d740
// address: 0x3000d740
// body: available
// range: 0x3000d740-0x3000d7e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_3000d740(void *this,uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0xbe3) {
    if (param_1 == 0xbe2) {
      uVar1 = 1;
    }
    else {
      switch(param_1) {
      case 0xb44:
        uVar1 = 2;
        break;
      default:
switchD_3000d763_caseD_b45:
                    /* WARNING: Could not recover jumptable at 0x3000d7a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_300a44ec)();
        return;
      case 0xb60:
        uVar1 = 0x10;
        break;
      case 0xb71:
        uVar1 = 8;
        break;
      case 0xbc0:
        uVar1 = 4;
      }
    }
  }
  else if (param_1 == 0xc60) {
    uVar1 = 0x40;
  }
  else if (param_1 == 0xc61) {
    uVar1 = 0x80;
  }
  else {
    if (param_1 != 0x8037) goto switchD_3000d763_caseD_b45;
    uVar1 = 0x100;
  }
  DAT_300a46e0 = DAT_300a46e0 & ~uVar1;
  if ((uVar1 & DAT_300a4588) == 0) {
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  }
  return;
}

