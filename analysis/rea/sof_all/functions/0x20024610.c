// rea decompile_all
// name: FUN_20024610
// address: 0x20024610
// body: available
// range: 0x20024610-0x200246ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20024610(void)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 *in_ECX;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010aef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = local_11;
  in_ECX[1] = local_11;
  in_ECX[0xc] = 0;
  pvVar2 = operator_new(0x20);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x1c) = 1;
  *(undefined1 *)((int)pvVar2 + 0x1d) = 0;
  *(void **)(in_ECX + 8) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x1d) = 1;
  **(undefined4 **)(in_ECX + 8) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 8) + 8) = 0;
  uVar1 = *(undefined4 *)(in_ECX + 8);
  pvVar2 = operator_new(0x20);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x1c) = 0;
  *(undefined1 *)((int)pvVar2 + 0x1d) = 0;
  *(void **)(in_ECX + 4) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0;
  in_ECX[0x14] = local_11;
  pvVar2 = operator_new(0x18);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)(in_ECX + 0x18) = pvVar2;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  ExceptionList = local_c;
  return;
}

