// rea decompile_all
// name: FUN_2006fa80
// address: 0x2006fa80
// body: available
// range: 0x2006fa80-0x2006fbba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006fa80(void)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *in_ECX;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010bb43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = local_11;
  in_ECX[1] = local_11;
  in_ECX[0xc] = 0;
  pvVar1 = operator_new(0x10);
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined1 *)((int)pvVar1 + 0xe) = 1;
  *(undefined1 *)((int)pvVar1 + 0xf) = 0;
  *(void **)(in_ECX + 8) = pvVar1;
  *(undefined1 *)((int)pvVar1 + 0xf) = 1;
  **(undefined4 **)(in_ECX + 8) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 8) + 8) = 0;
  uVar2 = FUN_20074df0(*(undefined4 *)(in_ECX + 8),0);
  *(undefined4 *)(in_ECX + 4) = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0;
  in_ECX[0x14] = local_11;
  in_ECX[0x15] = local_11;
  in_ECX[0x20] = 0;
  pvVar1 = operator_new(0x10);
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined1 *)((int)pvVar1 + 0xe) = 1;
  *(undefined1 *)((int)pvVar1 + 0xf) = 0;
  *(void **)(in_ECX + 0x1c) = pvVar1;
  *(undefined1 *)((int)pvVar1 + 0xf) = 1;
  **(undefined4 **)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 8) = 0;
  uVar2 = FUN_20074df0(*(undefined4 *)(in_ECX + 0x1c),0);
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(int *)(*(int *)(in_ECX + 0x18) + 8) = *(int *)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x24) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0x28] = local_11;
  in_ECX[0x29] = local_11;
  in_ECX[0x34] = 0;
  pvVar1 = operator_new(0x10);
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined1 *)((int)pvVar1 + 0xe) = 1;
  *(undefined1 *)((int)pvVar1 + 0xf) = 0;
  *(void **)(in_ECX + 0x30) = pvVar1;
  *(undefined1 *)((int)pvVar1 + 0xf) = 1;
  **(undefined4 **)(in_ECX + 0x30) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x30) + 8) = 0;
  uVar2 = *(undefined4 *)(in_ECX + 0x30);
  pvVar1 = operator_new(0x10);
  *(undefined4 *)((int)pvVar1 + 4) = uVar2;
  *(undefined1 *)((int)pvVar1 + 0xe) = 0;
  *(undefined1 *)((int)pvVar1 + 0xf) = 0;
  *(void **)(in_ECX + 0x2c) = pvVar1;
  *(void **)pvVar1 = pvVar1;
  *(int *)(*(int *)(in_ECX + 0x2c) + 8) = *(int *)(in_ECX + 0x2c);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  ExceptionList = local_c;
  return;
}

