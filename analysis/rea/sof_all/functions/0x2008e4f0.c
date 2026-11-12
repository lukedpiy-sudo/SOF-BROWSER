// rea decompile_all
// name: FUN_2008e4f0
// address: 0x2008e4f0
// body: available
// range: 0x2008e4f0-0x2008e58e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008e4f0(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010c611;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined2 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    if (*(int *)(param_2 + 6) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 6) >> 1;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 2);
    *(undefined2 **)(param_1 + 6) = puVar3;
    puVar1 = *(undefined2 **)(param_2 + 8);
    for (puVar4 = *(undefined2 **)(param_2 + 6); puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = *puVar4;
      }
      puVar3 = puVar3 + 1;
    }
    *(undefined2 **)(param_1 + 8) = puVar3;
    *(undefined2 **)(param_1 + 10) = puVar3;
  }
  ExceptionList = local_c;
  return;
}

