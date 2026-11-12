// rea decompile_all
// name: FUN_5003d6b0
// address: 0x5003d6b0
// body: available
// range: 0x5003d6b0-0x5003d7a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5003d6b0(void *this,int *param_1,float param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x5c))();
  if (iVar1 != 4) {
    (**(code **)(*(int *)this + 8))(param_4);
    if (*(int *)((int)this + 0x60) != 0) {
      if (*(int *)((int)this + 0xb0) == 0) {
        if (0.25 < param_3) {
          (**(code **)(*(int *)this + 0x94))(param_1,param_2,(int)param_2 + 4);
          return;
        }
        FUN_5003cc10(this,param_1,param_2);
      }
      else if (*(char *)((int)this + 0x54) == '\0') {
        (**(code **)(*param_1 + 0x18c))();
        iVar1 = FUN_500af0d0(*(int *)((int)this + 0x60),*(int *)((int)this + 0xa8));
        if ((iVar1 == 0) && ((*(byte *)(*(int *)((int)this + 0x60) + 0x1b8) & 2) != 0)) {
          *(float *)((int)this + 0xa0) = DAT_5015ccdc - 1.0;
        }
        if (*(float *)((int)this + 0xa0) < DAT_5015ccdc !=
            (*(float *)((int)this + 0xa0) == DAT_5015ccdc)) {
          (**(code **)(*(int *)this + 0xb4))(param_1,param_2);
          return;
        }
      }
    }
  }
  return;
}

