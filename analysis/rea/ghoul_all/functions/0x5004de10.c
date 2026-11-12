// rea decompile_all
// name: FUN_5004de10
// address: 0x5004de10
// body: available
// range: 0x5004de10-0x5004de5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5004de10(void *this,int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)this + 8))(param_1);
  if ((cVar1 != '\0') && ((float)param_1[4] <= *(float *)((int)this + 0x24))) {
    *param_1 = *(int *)((int)this + 0x14);
    param_1[1] = *(int *)((int)this + 0x18);
    param_1[2] = *(int *)((int)this + 0x1c);
    param_1[3] = *(int *)((int)this + 0x20);
    param_1[4] = *(int *)((int)this + 0x24);
    param_1[5] = *(int *)((int)this + 0x28);
  }
  return;
}

