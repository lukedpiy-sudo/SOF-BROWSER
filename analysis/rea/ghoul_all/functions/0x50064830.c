// rea decompile_all
// name: FUN_50064830
// address: 0x50064830
// body: available
// range: 0x50064830-0x500648e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50064830(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_501142c1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    param_1[8] = param_2[8];
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc) >> 2;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 4);
    *(undefined4 **)(param_1 + 0xc) = puVar3;
    puVar1 = *(undefined4 **)(param_2 + 0x10);
    for (puVar4 = *(undefined4 **)(param_2 + 0xc); puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
      }
      puVar3 = puVar3 + 1;
    }
    *(undefined4 **)(param_1 + 0x10) = puVar3;
    *(undefined4 **)(param_1 + 0x14) = puVar3;
    param_1[0x18] = param_2[0x18];
  }
  ExceptionList = local_c;
  return;
}

