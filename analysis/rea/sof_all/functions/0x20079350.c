// rea decompile_all
// name: FUN_20079350
// address: 0x20079350
// body: available
// range: 0x20079350-0x2007949b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20079350(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *local_20 [2];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_2010befc;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_20083280(local_20,**(undefined4 **)(in_ECX + 0xd8),*(undefined4 **)(in_ECX + 0xd8));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xd8));
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xdc));
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0xc4);
  local_20[0] = (undefined4 *)*puVar1;
  local_4 = local_4 & 0xffffff00;
  if (((*(int *)(in_ECX + 0xd0) == 0) ||
      (piVar2 = (int *)FUN_20083550(local_18), local_20[0] != (undefined4 *)*piVar2)) ||
     (puVar1 != *(undefined4 **)(in_ECX + 0xc4))) {
    while (local_20[0] != puVar1) {
      puVar3 = (undefined4 *)FUN_20084c50(local_18,0);
      FUN_20082b00(local_10,*puVar3);
    }
  }
  else {
    FUN_20084920((*(undefined4 **)(in_ECX + 0xc4))[1]);
    *(undefined4 *)(*(int *)(in_ECX + 0xc4) + 4) = *(undefined4 *)(in_ECX + 200);
    *(undefined4 *)(in_ECX + 0xd0) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(in_ECX + 0xc4);
    *(int *)(*(int *)(in_ECX + 0xc4) + 8) = *(int *)(in_ECX + 0xc4);
    FUN_20083550(local_14);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc4));
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 200));
  *(undefined4 *)(in_ECX + 200) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xb4));
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  ExceptionList = local_c;
  return;
}

