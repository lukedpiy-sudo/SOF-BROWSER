// rea decompile_all
// name: FUN_50096050
// address: 0x50096050
// body: available
// range: 0x50096050-0x50096202 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50096050(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x2ec)) {
    if ((((*(float *)(param_1 + 0x10) < 90.0) &&
         (*(float *)(param_1 + 0x10) < -90.0 == (*(float *)(param_1 + 0x10) == -90.0))) &&
        (*(float *)(param_1 + 0x18) < 90.0)) &&
       (*(float *)(param_1 + 0x18) < -90.0 == (*(float *)(param_1 + 0x18) == -90.0))) {
      *(float *)(param_1 + 600) = *(float *)(param_1 + 600) * 1.6;
      *(float *)(param_1 + 0x260) = *(float *)(param_1 + 0x260) * 1.6;
      *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
      return;
    }
    if (90.0 <= *(float *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x10) = 0x42b40000;
    }
    if (*(float *)(param_1 + 0x10) < -90.0 != (*(float *)(param_1 + 0x10) == -90.0)) {
      *(undefined4 *)(param_1 + 0x10) = 0xc2b40000;
    }
    if (90.0 <= *(float *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x18) = 0x42b40000;
    }
    if (*(float *)(param_1 + 0x18) < -90.0 != (*(float *)(param_1 + 0x18) == -90.0)) {
      *(undefined4 *)(param_1 + 0x18) = 0xc2b40000;
    }
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 0x260) = 0;
    if (*(int *)(param_1 + 0x2ec) < 0x19) {
      *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.3;
      return;
    }
    if ((*(byte *)(param_1 + 0x1b8) & 4) == 0) {
      lVar2 = __ftol();
      uVar1 = (int)(uint)lVar2 >> 0x1f;
      if ((int)(((uint)lVar2 ^ uVar1) - uVar1) < 0x32) {
        lVar2 = __ftol();
        uVar1 = (int)(uint)lVar2 >> 0x1f;
        if ((int)(((uint)lVar2 ^ uVar1) - uVar1) < 0x32) {
          lVar2 = __ftol();
          uVar1 = (int)(uint)lVar2 >> 0x1f;
          if ((int)(((uint)lVar2 ^ uVar1) - uVar1) < 0x32) {
            FUN_50083d50(param_1 + 4,2,0);
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    *(undefined4 *)(param_1 + 0x288) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x19c) = 5;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0x124) + 6.0;
    (*DAT_5015cb28)(param_1);
  }
  return;
}

