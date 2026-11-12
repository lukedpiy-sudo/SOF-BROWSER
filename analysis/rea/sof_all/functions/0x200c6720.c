// rea decompile_all
// name: FUN_200c6720
// address: 0x200c6720
// body: available
// range: 0x200c6720-0x200c67c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200c6720(void)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  undefined1 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010df8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0xa4);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    puVar5 = *(undefined1 **)(in_ECX + 0x20);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_201116cc;
    }
    iVar3 = FUN_200e5d60(in_ECX,puVar5);
  }
  local_4 = 0xffffffff;
  if ((*(int *)(iVar3 + 0x10) != 0) && (*(char *)(iVar3 + 0x8a) != '\0')) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(iVar3 + 4) = uVar1;
    *(int *)(in_ECX + 4) = iVar3;
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  FUN_200e61a0();
  uVar4 = FUN_200f9f75(iVar3);
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}

