// rea decompile_all
// name: FUN_5000bd60
// address: 0x5000bd60
// body: available
// range: 0x5000bd60-0x5000bdc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_5000bd60(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x18c))();
  if (iVar1 == 0) {
    (*DAT_5015ca24)(s_action__NextTurn__ai_has_no_body_5012f70c);
    *param_4 = 0;
    param_4[1] = 0;
    return;
  }
  piVar2 = (int *)(**(code **)(*param_2 + 0x18c))();
  (**(code **)(*piVar2 + 0x80))(param_1,param_3,*(undefined4 *)((int)this + 0x38),param_4);
  return;
}

