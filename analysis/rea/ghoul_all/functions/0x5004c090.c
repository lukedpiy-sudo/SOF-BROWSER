// rea decompile_all
// name: FUN_5004c090
// address: 0x5004c090
// body: available
// range: 0x5004c090-0x5004c11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5004c090(void *this,float param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  
  if ((*(char *)((int)&DAT_5015cdb8 + *(int *)this) == '\0') &&
     (iVar1 = (*DAT_5015cad0)((int)this + 4,DAT_5015d1ec + 4), iVar1 != 0)) {
    *(undefined1 *)((int)&DAT_5015cdb8 + *(int *)this) = 1;
  }
  *(float *)((int)this + 0x38) = param_1;
  if ((*(char *)((int)&DAT_5015cdb8 + *(int *)this) != '\0') &&
     (iVar1 = 0, 0 < *(int *)((int)this + 0x10))) {
    iVar2 = 0;
    do {
      this_00 = (void *)(*(int *)(iVar2 + *(int *)((int)this + 0x14)) * 0x50 + DAT_50159124);
      if (*(float *)((int)this_00 + 0x38) != param_1) {
        FUN_5004c090(this_00,param_1);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *(int *)((int)this + 0x10));
  }
  return;
}

