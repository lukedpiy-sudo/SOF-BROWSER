// rea decompile_all
// name: FUN_500850a0
// address: 0x500850a0
// body: available
// range: 0x500850a0-0x5008517b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500850a0(int param_1)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if ((char)(uVar2 >> 8) < '\0') {
    sVar1 = *(short *)(param_1 + 0x60);
    if (sVar1 < 1) {
      if ((float)((int)sVar1 + *(int *)(param_1 + 0x5c)) * 0.001 <= DAT_5015ccdc) {
        *(uint *)(param_1 + 0x30) = uVar2 & 0xffff7fff;
        *(undefined2 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if (*(int **)(param_1 + 0x164) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x164) + 0x40))
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000);
        }
        FUN_50083bb0(param_1,0x16);
      }
    }
    else if ((float)((int)sVar1 + *(int *)(param_1 + 0x5c)) * 0.001 <= DAT_5015ccdc) {
      *(uint *)(param_1 + 0x30) = uVar2 & 0xffff7fff;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (*(int **)(param_1 + 0x164) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x164) + 0x40))(0x3f800000,0x3f800000,0x3f800000,0);
      }
      return 1;
    }
  }
  return 0;
}

