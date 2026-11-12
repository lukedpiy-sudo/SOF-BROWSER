// rea decompile_all
// name: FUN_50086790
// address: 0x50086790
// body: available
// range: 0x50086790-0x50086814 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50086790(float param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  *(undefined4 *)((int)param_1 + 0x19c) = 10;
  FUN_500b4b50(param_1);
  fVar2 = (float10)*(float *)((int)param_1 + 0x14) * (float10)0.01745329252;
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  *(undefined4 *)((int)param_1 + 0x288) = 0;
  fVar3 = (float10)fsin(fVar2);
  *(float *)((int)param_1 + 0x250) =
       (float)((float10)*(float *)((int)param_1 + 0x220) * (float10)-1.0 * fVar3);
  fVar2 = (float10)fcos(fVar2);
  *(float *)((int)param_1 + 0x24c) = (float)(fVar2 * (float10)*(float *)((int)param_1 + 0x220));
  fVar1 = DAT_5015ccdc + 0.1;
  *(code **)((int)param_1 + 0x2b8) = FUN_500866d0;
  *(undefined4 *)((int)param_1 + 0x2c4) = 0;
  *(undefined4 *)((int)param_1 + 0x2c8) = 0;
  *(float *)((int)param_1 + 0x2b4) = fVar1;
  FUN_500a7170((int)param_1);
  return;
}

