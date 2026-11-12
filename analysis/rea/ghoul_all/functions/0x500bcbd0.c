// rea decompile_all
// name: FUN_500bcbd0
// address: 0x500bcbd0
// body: available
// range: 0x500bcbd0-0x500bcc9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __fastcall FUN_500bcbd0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == -1) {
    fVar2 = (float10)0.4;
  }
  else if (iVar1 == 0) {
    fVar2 = (float10)2.0;
  }
  else {
    fVar2 = (float10)1.0 - (float10)iVar1 * (float10)0.05;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    fVar2 = fVar2 * (float10)0.5;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    fVar2 = fVar2 * (float10)0.3;
  }
  else if (iVar1 == 4) {
    fVar2 = fVar2 * (float10)4.0;
  }
  else {
    fVar2 = (float10)iVar1 * (float10)0.3 + fVar2;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    fVar2 = fVar2 * (float10)0.3;
  }
  else if (iVar1 == 4) {
    fVar2 = fVar2 * (float10)3.0;
  }
  else {
    fVar2 = (float10)iVar1 * (float10)0.4 + fVar2;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    fVar3 = (float10)0.5;
  }
  else {
    fVar3 = (float10)10.0 / (float10)*(int *)(param_1 + 0x1c);
  }
  fVar2 = fVar2 * fVar3;
  if (fVar2 < (float10)0.2) {
    fVar2 = (float10)0.2;
  }
  return fVar2;
}

