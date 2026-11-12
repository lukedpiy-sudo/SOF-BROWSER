// rea decompile_all
// name: FUN_200ca8c0
// address: 0x200ca8c0
// body: available
// range: 0x200ca8c0-0x200ca9cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ca8c0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010e318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(in_ECX + 0x24) != 0) {
    uStack_30 = 0x200ca8ea;
    ExceptionList = &local_c;
    uVar2 = FUN_200c6a60();
    *(undefined4 *)(in_ECX + 0x78) = uVar2;
  }
  if ((*(int **)(in_ECX + 0x78) != (int *)0x0) && (**(int **)(in_ECX + 0x78) != 0)) {
    local_14 = *(undefined4 *)(in_ECX + 0xac);
    uStack_30 = 0x200ca913;
    puStack_18 = (undefined1 *)FUN_200cbe80();
    uStack_30 = 0x200ca92c;
    uVar2 = __ftol();
    puStack_18 = *(undefined1 **)(in_ECX + 0xac);
    iVar1 = *(int *)(in_ECX + 0x78);
    uStack_30 = 0x200ca943;
    local_14 = FUN_200cbe90();
    uStack_30 = 0x200ca959;
    uVar3 = __ftol();
    uStack_30 = 0x200ca969;
    local_14 = __ftol();
    uStack_30 = 0x200ca97b;
    uVar4 = __ftol();
    uStack_30 = 0;
    puStack_18 = auStack_40;
    FUN_20070070(*(undefined4 *)(iVar1 + 0x18),&uStack_19);
    uStack_4 = 0xffffffff;
    puVar5 = (undefined4 *)FUN_2000a7e0();
    FUN_200c8960(uVar2,uVar3,local_14,uVar4,*puVar5);
  }
  ExceptionList = local_c;
  return;
}

