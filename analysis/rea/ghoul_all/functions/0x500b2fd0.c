// rea decompile_all
// name: FUN_500b2fd0
// address: 0x500b2fd0
// body: available
// range: 0x500b2fd0-0x500b309b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_500b2fd0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    FUN_500adb20((byte *)s_WARNING__Can_t_set_skin_for_NULL_5014d268);
  }
  else {
    FUN_500b2ec0(*(int **)(param_1 + 0x164),param_2,param_3,param_4);
    if ((param_6 != 0) && (iVar1 = *(int *)(param_1 + 0x210), iVar1 != 0)) {
      if ((iVar1 != -0x14) && (uVar6 = 1, 0 < *(int *)(iVar1 + 0x24))) {
        do {
          iVar2 = *(int *)(param_1 + 0x210);
          if (iVar2 != 0) {
            iVar3 = *(int *)(iVar2 + 4);
            if (iVar3 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(int *)(iVar2 + 8) - iVar3 >> 2;
            }
            if ((((uVar6 <= uVar5) && (0 < (int)uVar6)) &&
                (iVar2 = *(int *)(iVar3 + -4 + uVar6 * 4), iVar2 != 0)) &&
               (piVar4 = *(int **)(iVar2 + 0x1c), piVar4 != (int *)0x0)) {
              FUN_500b2ec0(piVar4,param_2,param_3,param_4);
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 <= *(int *)(iVar1 + 0x24));
        return;
      }
    }
  }
  return;
}

