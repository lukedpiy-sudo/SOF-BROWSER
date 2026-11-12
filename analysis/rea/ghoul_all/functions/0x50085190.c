// rea decompile_all
// name: FUN_50085190
// address: 0x50085190
// body: available
// range: 0x50085190-0x500852d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50085190(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)((int)this + 4) != 0) {
    (*DAT_5015ca70)(*(int *)((int)this + 4));
    if ((*(byte *)((int)this + 4) & 1) != 0) {
      (*DAT_5015ca74)((int)*(short *)((int)this + 8));
    }
    if ((*(byte *)((int)this + 4) & 2) != 0) {
      (*DAT_5015ca70)(*(undefined1 *)((int)this + 10));
    }
    if ((*(byte *)((int)this + 4) & 4) != 0) {
      (*DAT_5015ca84)((int)this + 0xc);
    }
    if ((*(byte *)((int)this + 4) & 8) != 0) {
      fStack_c = *(float *)((int)this + 0x18) * 2048.0;
      fStack_8 = *(float *)((int)this + 0x1c) * 2048.0;
      fStack_4 = *(float *)((int)this + 0x20) * 2048.0;
      (*DAT_5015ca84)(&fStack_c);
    }
    if ((*(byte *)((int)this + 4) & 0x10) != 0) {
      (*DAT_5015ca84)((int)this + 0x24);
    }
    if ((*(byte *)((int)this + 4) & 0x20) != 0) {
      (*DAT_5015ca84)((int)this + 0x30);
    }
    if ((*(byte *)((int)this + 4) & 0x40) != 0) {
      (*DAT_5015ca74)((int)*(short *)((int)this + 0x3c));
    }
    if (*(char *)((int)this + 4) < '\0') {
      (*DAT_5015ca70)(*(undefined1 *)((int)this + 0x3e));
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)this = 0;
  if (param_3 != 0) {
    (*DAT_5015ca64)(param_1,param_2,(param_3 - DAT_5015cca0) / 0x464);
    return;
  }
  (*DAT_5015ca60)(param_1,param_2);
  return;
}

