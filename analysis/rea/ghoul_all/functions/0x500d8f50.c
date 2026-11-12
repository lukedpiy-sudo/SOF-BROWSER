// rea decompile_all
// name: FUN_500d8f50
// address: 0x500d8f50
// body: available
// range: 0x500d8f50-0x500d8ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500d8f50(void *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x270) = *(undefined4 *)(param_1 + 0x270);
  *(undefined4 *)((int)this + 0x274) = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)((int)this + 0x278) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)((int)this + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  iVar1 = FUN_500ba8c0(*(int *)(param_1 + 0x280));
  *(int *)((int)this + 0x280) = iVar1;
  *(undefined4 *)((int)this + 0x284) = *(undefined4 *)(param_1 + 0x284);
  *(undefined4 *)((int)this + 0x288) = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)((int)this + 0x28c) = *(undefined4 *)(param_1 + 0x28c);
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)((int)this + 0x298) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)((int)this + 0x29c) = *(undefined4 *)(param_1 + 0x29c);
  return;
}

