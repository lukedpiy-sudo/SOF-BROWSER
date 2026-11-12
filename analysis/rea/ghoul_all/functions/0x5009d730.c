// rea decompile_all
// name: FUN_5009d730
// address: 0x5009d730
// body: available
// range: 0x5009d730-0x5009d83b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009d730(int param_1)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    if (*(float *)(param_1 + 0x21c) == 0.0) {
      *(undefined4 *)(param_1 + 0x21c) = 0x40a00000;
    }
    if (*(int *)(param_1 + 0x318) == 0) {
      *(undefined4 *)(param_1 + 0x318) = 0x5a;
    }
    lVar4 = __ftol();
    *(int *)(param_1 + 0x318) = (int)lVar4;
    *(int *)(param_1 + 0x3bc) = (int)lVar4 / 2;
    uVar3 = (*DAT_5015c9f4)(s_Ambient_Models_Camera_MoveLP_wav_5014afec);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    *(undefined4 *)(param_1 + 0x40) = 0xf8;
    *(code **)(param_1 + 0x2b8) = FUN_5009d6a0;
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  }
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if ((uVar1 & 8) != 0) {
    if (*(float *)(param_1 + 0x35c) == 0.0) {
      *(undefined4 *)(param_1 + 0x35c) = 0x41f00000;
    }
    if ((uVar1 & 4) == 0) {
      *(code **)(param_1 + 0x2b8) = FUN_5009d5c0;
      fVar2 = DAT_5015ccdc + 1.0;
      *(uint *)(param_1 + 0x1b8) = uVar1 | 2;
      *(float *)(param_1 + 0x2b4) = fVar2;
      return;
    }
    *(float *)(param_1 + 0x2d4) = DAT_5015ccdc + 1.0;
  }
  *(uint *)(param_1 + 0x1b8) = uVar1 | 2;
  return;
}

