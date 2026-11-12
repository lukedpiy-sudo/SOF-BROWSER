// rea decompile_all
// name: FUN_500576b0
// address: 0x500576b0
// body: available
// range: 0x500576b0-0x5005781f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_500576b0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_50113cdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 3) = local_11;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = local_11;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = 1;
  uStack_3 = 0;
  *(undefined1 *)(param_1 + 0xb) = local_11;
  *(undefined1 *)((int)param_1 + 0x2d) = local_11;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_5005baa0((int)(param_1 + 0xb));
  local_4 = 2;
  *(undefined1 *)(param_1 + 0x23) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0x24] = pvVar1;
  param_1[0x25] = 0;
  local_4 = 3;
  *(undefined1 *)(param_1 + 0x26) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0x27] = pvVar1;
  param_1[0x28] = 0;
  local_4 = 4;
  *(undefined1 *)(param_1 + 0x29) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0x2a] = pvVar1;
  param_1[0x2b] = 0;
  _local_4 = CONCAT31(uStack_3,5);
  puVar2 = param_1 + 0x2c;
  iVar3 = 0x20;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    *(undefined1 *)((int)puVar2 + 0xd) = 0;
    puVar2 = puVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0x40;
  param_1[0x10] = 0;
  FUN_500fe2b0();
  puVar2 = param_1 + 0x2e;
  iVar3 = 0x20;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 0;
    puVar2 = puVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0xec] = 0;
  *(undefined1 *)(param_1 + 0xed) = 1;
  ExceptionList = local_c;
  return param_1;
}

