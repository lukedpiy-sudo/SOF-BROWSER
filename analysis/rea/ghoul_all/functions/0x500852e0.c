// rea decompile_all
// name: FUN_500852e0
// address: 0x500852e0
// body: available
// range: 0x500852e0-0x5008533f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_500852e0(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  if (param_1 != 0) {
    (*DAT_5015ca70)(5);
    (*DAT_5015ca70)(param_1);
    uVar1 = *(uint *)this;
    *(uint *)this = uVar1 | 1;
    if (*(int *)((int)this + 4) != 0) {
      *(uint *)this = uVar1 | 0x81;
    }
    (*DAT_5015ca70)(*(undefined4 *)this);
    (*DAT_5015ca84)(param_2);
    FUN_50085190(this,param_2,param_3,param_4);
  }
  return;
}

