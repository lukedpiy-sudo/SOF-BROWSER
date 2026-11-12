// rea decompile_all
// name: FUN_50044680
// address: 0x50044680
// body: available
// range: 0x50044680-0x50044744 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50044680(void *this,undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 3;
  pcVar1 = this;
  do {
    FUN_5010784a(pcVar1,4,1,(int *)*param_1);
    pcVar1 = pcVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_5010784a((char *)((int)this + 0x1a),1,1,(int *)*param_1);
  FUN_5010784a((char *)((int)this + 0x10),2,1,(int *)*param_1);
  pcVar1 = (char *)((int)this + 0x1c);
  iVar2 = 0xc;
  do {
    FUN_5010784a(pcVar1,2,1,(int *)*param_1);
    pcVar1 = pcVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_5010784a((char *)((int)this + 0x12),2,1,(int *)*param_1);
  FUN_5010784a((char *)((int)this + 0x14),2,1,(int *)*param_1);
  FUN_5010784a((char *)((int)this + 0x16),2,1,(int *)*param_1);
  FUN_5010784a((char *)((int)this + 0x18),2,1,(int *)*param_1);
  FUN_5010784a((char *)((int)this + 0xc),4,1,(int *)*param_1);
  return;
}

