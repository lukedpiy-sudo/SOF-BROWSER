// rea decompile_all
// name: FUN_5000bd00
// address: 0x5000bd00
// body: available
// range: 0x5000bd00-0x5000bd5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5000bd00(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18c))();
  if (iVar1 == 0) {
    (*DAT_5015ca24)(s_action__NextMovement__ai_has_no_b_5012f6e4);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
  (**(code **)(*piVar2 + 0x7c))(param_2,param_3,*(undefined4 *)((int)this + 0x34));
  return;
}

