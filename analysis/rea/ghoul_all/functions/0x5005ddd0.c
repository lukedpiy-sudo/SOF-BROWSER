// rea decompile_all
// name: FUN_5005ddd0
// address: 0x5005ddd0
// body: available
// range: 0x5005ddd0-0x5005dea0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5005ddd0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_8;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x34;
  }
  if (1 < iVar4 + -1) {
    iVar5 = 0x34;
    iVar4 = iVar4 + -2;
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      local_8 = *(float *)(iVar5 + 0x38 + iVar3);
      fVar1 = *(float *)(iVar5 + 0x3c + iVar3);
      fVar2 = *(float *)(iVar5 + 8 + iVar3);
      local_10 = 0;
      local_18 = *(float *)(iVar5 + iVar3) - *(float *)(iVar5 + 0x34 + iVar3);
      local_14 = *(float *)(iVar5 + 4 + iVar3) - local_8;
      fVar6 = FUN_500fe130(&local_18);
      if ((64.0 < fVar1 - fVar2) && (fVar6 < (float10)64.0)) {
        *(undefined4 *)(iVar5 + 0x10 + *(int *)(param_1 + 0x18)) = 10;
        *(undefined4 *)(iVar5 + 0x44 + *(int *)(param_1 + 0x18)) = 0xb;
      }
      iVar5 = iVar5 + 0x34;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

