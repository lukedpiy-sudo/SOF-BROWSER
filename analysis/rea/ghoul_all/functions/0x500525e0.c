// rea decompile_all
// name: FUN_500525e0
// address: 0x500525e0
// body: available
// range: 0x500525e0-0x500526c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500525e0(int param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x45c);
  if (iVar1 != 0) {
    if ((((*(int *)(iVar1 + 0x40) != 0) && (*(int *)(*(int *)(iVar1 + 0x40) + 0x10) == 0xb)) &&
        (*(int *)(iVar1 + 0x44) != 0)) && (*(int *)(*(int *)(iVar1 + 0x44) + 0x10) == 10)) {
      *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(DAT_5015c96c + 0x18);
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 100) = 0;
      return;
    }
    iVar1 = FUN_50052110(param_1,param_2,0x5a);
    if (iVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x5c) = *(undefined4 *)(DAT_5015c96c + 0x18);
    }
    else {
      iVar1 = FUN_50052210(param_1,param_2,0x5a);
      if (iVar1 == 1) {
        *(float *)(*(int *)(param_1 + 0x45c) + 0x5c) = -*(float *)(DAT_5015c96c + 0x18);
      }
    }
    iVar1 = FUN_50052300(param_1,param_2,0x2d);
    if (iVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x60) = *(undefined4 *)(DAT_5015c96c + 0x18);
      return;
    }
    iVar1 = FUN_50052400(param_1,param_2,0x2d);
    if (iVar1 == 1) {
      *(float *)(*(int *)(param_1 + 0x45c) + 0x60) = -*(float *)(DAT_5015c96c + 0x18);
    }
  }
  return;
}

