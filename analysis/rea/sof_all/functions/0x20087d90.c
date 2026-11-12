// rea decompile_all
// name: FUN_20087d90
// address: 0x20087d90
// body: available
// range: 0x20087d90-0x20087fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_20087d90(char *param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  ushort uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *in_ECX;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char local_40 [4];
  int local_3c;
  uint local_38;
  char acStack_30 [4];
  undefined1 *puStack_2c;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c238;
  local_c = ExceptionList;
  uVar10 = 0;
  local_40[0] = param_2;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  pcVar5 = param_1;
  uVar9 = 0xffffffff;
  pcVar11 = param_1;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(param_1,~uVar9 - 1);
  local_4 = 0;
  if (local_38 != 0) {
    do {
      pcVar5 = (char *)FUN_200483c0(uVar10);
      if (*pcVar5 == '\\') {
        puVar6 = (undefined1 *)FUN_200483c0(uVar10);
        *puVar6 = 0x2f;
      }
      else {
        pcVar5 = (char *)FUN_200483c0(uVar10);
        puVar6 = (undefined1 *)FUN_200483c0(uVar10);
        uVar3 = FUN_200fb2a2((int)*pcVar5);
        *puVar6 = uVar3;
      }
      uVar10 = uVar10 + 1;
      pcVar5 = param_1;
    } while (uVar10 < local_38);
  }
  if (param_2 == '\0') {
    uVar8 = FUN_20069fd0(local_40);
    uVar4 = FUN_20087fe0(local_40,uVar8);
    if (local_3c != 0) {
      if (*(char *)(local_3c + -1) == '\0') {
        FUN_200f9f75((char *)(local_3c + -1));
      }
      else {
        *(char *)(local_3c + -1) = *(char *)(local_3c + -1) + -1;
      }
    }
  }
  else {
    uVar4 = (**(code **)*in_ECX)(pcVar5,0);
    if ((uVar4 != 0) &&
       (*(int *)(in_ECX[0x13] + *(int *)(in_ECX[0x17] + -8 + (uint)uVar4 * 8) * 4) != 0)) {
      FUN_2008c380(&param_1,0,&param_2);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_200a6d40(auStack_20);
      cVar1 = param_2;
      piVar2 = (int *)*piStack_1c;
      while (piVar2 != piStack_1c) {
        acStack_30[0] = cVar1;
        FUN_2000a5b0(0);
        local_4._0_1_ = 2;
        FUN_20087b30(local_40,piVar2 + 3,acStack_30);
        puVar6 = puStack_2c;
        if (puStack_2c == (undefined1 *)0x0) {
          puVar6 = &DAT_201116cc;
        }
        (**(code **)*in_ECX)(puVar6,0);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_2000a5b0(1);
        FUN_20027950();
      }
      local_4 = local_4 & 0xffffff00;
      puVar7 = (undefined4 *)FUN_20083550(&param_2);
      FUN_2008c420(&param_1,*puVar7,piStack_1c);
      FUN_200f9f75(piStack_1c);
      piStack_1c = (int *)0x0;
      uStack_10 = 0;
      FUN_200f9f75(uStack_18);
      uStack_18 = 0;
    }
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
  }
  ExceptionList = local_c;
  return uVar4;
}

