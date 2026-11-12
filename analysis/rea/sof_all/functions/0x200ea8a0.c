// rea decompile_all
// name: FUN_200ea8a0
// address: 0x200ea8a0
// body: available
// range: 0x200ea8a0-0x200eab0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ea8a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_20110368;
  local_c = ExceptionList;
  local_40 = 0xffffffff;
  if (*(char *)(param_1 + 0x8e) != '\0') {
    ExceptionList = &local_c;
    if (*(char *)(in_ECX + 0x20) == '\0') {
      ExceptionList = &local_c;
      iVar1 = FUN_20055930();
      if ((*(int *)(in_ECX + 0x1c) >> 2) + *(int *)(in_ECX + 0x18) < iVar1) {
        *(undefined1 *)(in_ECX + 0x20) = 1;
        (*DAT_20390d94)(s_menu_small_hilite_wav_20158530);
      }
      if (*(char *)(in_ECX + 0x20) == '\0') {
        ExceptionList = local_c;
        return;
      }
    }
    uVar2 = FUN_200eab30(local_2c);
    puVar3 = *(undefined1 **)(in_ECX + 4);
    uStack_4 = 0;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_201116cc;
    }
    iVar1 = (*DAT_2040363c)(puVar3,uVar2);
    iVar1 = iVar1 + 4;
    uStack_4 = 0xffffffff;
    FUN_2000a5b0(1);
    uVar2 = FUN_200eab30(local_2c);
    uStack_4 = 1;
    iStack_30 = (*DAT_20403640)(uVar2);
    iStack_30 = iStack_30 + 4;
    uStack_4 = 0xffffffff;
    FUN_2000a5b0(1);
    iStack_38 = *(int *)(in_ECX + 0x14);
    iVar7 = *(int *)(in_ECX + 0x10) + *(int *)(param_1 + 0x9c);
    if (DAT_2040365c < iVar1 + iVar7) {
      iVar7 = DAT_2040365c - iVar1;
    }
    local_40 = *(undefined4 *)(param_1 + 100);
    uStack_3c = CONCAT31(uStack_3c._1_3_,0xff);
    iStack_34 = FUN_20055930();
    iStack_34 = iStack_34 - *(int *)(in_ECX + 0x18);
    iVar4 = *(int *)(in_ECX + 0x1c) >> 4;
    iVar5 = iStack_34 - (*(int *)(in_ECX + 0x1c) >> 2);
    if (iVar5 < iVar4) {
      uStack_3c = CONCAT31(uStack_3c._1_3_,(char)((iVar5 * 0xff) / iVar4));
    }
    if (*(int *)(in_ECX + 0x1c) - iVar4 < iStack_34) {
      iVar5 = *(int *)(in_ECX + 0x1c) - iStack_34;
      if (iVar5 < 1) {
        uStack_3c = (uint)uStack_3c._1_3_ << 8;
      }
      else {
        uStack_3c = CONCAT31(uStack_3c._1_3_,(char)((int)((uStack_3c & 0xff) * iVar5) / iVar4));
      }
    }
    local_40 = CONCAT13((undefined1)uStack_3c,(undefined3)local_40);
    (*DAT_204035e8)(iVar7 + -2,iStack_38 + -2,iVar1,iStack_30,&local_40);
    local_40 = *(undefined4 *)(param_1 + 0x60);
    uStack_3c = CONCAT31(uStack_3c._1_3_,0xff);
    iVar4 = FUN_20055930();
    iVar1 = *(int *)(in_ECX + 0x1c);
    iVar4 = iVar4 - *(int *)(in_ECX + 0x18);
    iVar5 = iVar1 >> 4;
    iVar6 = iVar4 - (iVar1 >> 2);
    if (iVar6 < iVar5) {
      uStack_3c = CONCAT31(uStack_3c._1_3_,(char)((iVar6 * 0xff) / iVar5));
    }
    if (iVar1 - iVar5 < iVar4) {
      if (iVar1 - iVar4 < 1) {
        uStack_3c = (uint)uStack_3c._1_3_ << 8;
      }
      else {
        uStack_3c = CONCAT31(uStack_3c._1_3_,
                             (char)((int)((uStack_3c & 0xff) * (iVar1 - iVar4)) / iVar5));
      }
    }
    local_40 = CONCAT13((undefined1)uStack_3c,(undefined3)local_40);
    uVar2 = FUN_200eab30(auStack_1c);
    puVar3 = *(undefined1 **)(in_ECX + 4);
    uStack_4 = 2;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_201116cc;
    }
    (*DAT_20403638)(iVar7,iStack_38,puVar3,local_40,uVar2,0);
    if (iStack_18 != 0) {
      if (*(char *)(iStack_18 + -1) == '\0') {
        FUN_200f9f75((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = *(char *)(iStack_18 + -1) + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

