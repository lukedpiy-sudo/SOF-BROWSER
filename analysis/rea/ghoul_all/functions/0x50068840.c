// rea decompile_all
// name: FUN_50068840
// address: 0x50068840
// body: available
// range: 0x50068840-0x50068967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x500688c7) */

void __fastcall FUN_50068840(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_5011460c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_50128820;
  local_4 = 1;
  iVar2 = 0x28;
  piVar3 = param_1;
  do {
    piVar3 = piVar3 + 1;
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    *piVar3 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)param_1[0x2a];
  if (piVar3 != (int *)param_1[0x2b]) {
    do {
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar3)(1);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)param_1[0x2b]);
  }
  param_1[0x2b] = param_1[0x2a];
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2d])(1);
  }
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  puVar1 = (undefined4 *)param_1[0x32];
  local_4 = local_4 & 0xffffff00;
  param_1[0x31] = (int)&PTR_FUN_50128824;
  while (puVar1 != (undefined4 *)0x0) {
    param_1[0x32] = puVar1[1];
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)param_1[0x32];
  }
  param_1[0x33] = 0;
  FUN_50106b60((undefined *)param_1[0x2a]);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  ExceptionList = pvStack_c;
  return;
}

