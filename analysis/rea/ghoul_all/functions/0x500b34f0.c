// rea decompile_all
// name: FUN_500b34f0
// address: 0x500b34f0
// body: available
// range: 0x500b34f0-0x500b3566 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b34f0(int param_1)

{
  float local_8c;
  undefined1 local_88 [64];
  undefined4 local_48 [17];
  undefined4 local_4;
  
  local_48[0] = 0;
  local_8c = 0.0;
  local_4 = 0;
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 8))(local_88);
    FUN_500ed060(&stack0xffffff30,param_1);
    FUN_500ed0d0(local_48,(float *)&stack0xffffff30,&local_8c);
    (**(code **)**(undefined4 **)(param_1 + 0x164))(local_48);
  }
  return;
}

