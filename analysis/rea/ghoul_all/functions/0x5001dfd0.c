// rea decompile_all
// name: FUN_5001dfd0
// address: 0x5001dfd0
// body: available
// range: 0x5001dfd0-0x5001e045 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001dfd0(void *this,int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if (((*(int *)((int)this + 0x198) != 0) && (0 < *(int *)(param_1 + 0x2ec))) &&
     (*(float *)((int)this + 0x188) < DAT_5015ccdc)) {
    bVar1 = FUN_500887e0(param_1,param_2);
    if ((CONCAT31(extraout_var,bVar1) == 0) &&
       (iVar2 = (**(code **)(*(int *)this + 0xb4))(param_1), iVar2 != 0)) {
      return;
    }
    FUN_5001e420(this,param_1,0x3f666666);
    *(float *)((int)this + 0x188) = DAT_5015ccdc + 10.0;
  }
  return;
}

