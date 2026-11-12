// rea decompile_all
// name: FUN_200dbbd0
// address: 0x200dbbd0
// body: available
// range: 0x200dbbd0-0x200dbd68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dbbd0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined1 local_a5;
  int local_a4 [2];
  undefined1 local_9c [4];
  int local_98;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f2a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200ce840(param_1,0xc);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x23) = local_a5;
  FUN_2000a5b0(0);
  in_ECX[0x29] = 0xffffffff;
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x2a) = local_a5;
  FUN_2000a5b0(0);
  *(undefined1 *)(in_ECX + 0x2e) = local_a5;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  local_4._0_1_ = 3;
  *in_ECX = &PTR_FUN_20112b80;
  uVar1 = FUN_200c5b50(local_9c);
  local_4._0_1_ = 4;
  FUN_2000a3a0(uVar1,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (local_98 != 0) {
    if (*(char *)(local_98 + -1) == '\0') {
      FUN_200f9f75((char *)(local_98 + -1));
    }
    else {
      *(char *)(local_98 + -1) = *(char *)(local_98 + -1) + -1;
    }
  }
  in_ECX[8] = 0x80;
  if ((int *)in_ECX[0x1a] == (int *)0x0) {
    local_a4[0] = 0;
  }
  else {
    local_a4[0] = *(int *)in_ECX[0x1a];
  }
  local_a4[0] = local_a4[0] * 2;
  uVar1 = __ftol();
  in_ECX[10] = uVar1;
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)(in_ECX + 0x27) = 0;
  in_ECX[0x32] = 7;
  FUN_200601c0(s_current_20121258);
  Com_sprintf(local_8c,0x80,s_save___sof_20158edc);
  FUN_20025bb0(in_ECX + 0x2e,local_8c,0);
  puVar2 = (undefined4 *)FUN_200e6370(local_a4);
  in_ECX[0x29] = *puVar2;
  *(undefined1 *)((int)in_ECX + 99) = 1;
  *(undefined1 *)(in_ECX + 0x18) = 1;
  ExceptionList = local_c;
  return;
}

