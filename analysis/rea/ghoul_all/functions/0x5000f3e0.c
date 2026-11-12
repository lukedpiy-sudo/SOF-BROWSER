// rea decompile_all
// name: FUN_5000f3e0
// address: 0x5000f3e0
// body: available
// range: 0x5000f3e0-0x5000f43f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5000f3e0(void *this,int *param_1,int param_2)

{
  int *piVar1;
  
  (**(code **)(*(int *)this + 0x90))(param_1,param_2,(int)this + 0x14);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_2 + 0x24c);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_2 + 0x250);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)((int)this + 0x78) = 0;
  piVar1 = (int *)(**(code **)(*param_1 + 0x18c))();
  (**(code **)(*piVar1 + 0x60))(param_2);
  (**(code **)(*(int *)this + 0xc))(param_1,param_2);
  return;
}

