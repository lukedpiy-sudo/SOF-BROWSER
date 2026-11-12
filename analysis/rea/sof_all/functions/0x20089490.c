// rea decompile_all
// name: FUN_20089490
// address: 0x20089490
// body: available
// range: 0x20089490-0x20089648 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_20089490(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int local_40;
  undefined4 local_3c;
  int local_38 [2];
  undefined1 local_30 [4];
  char *local_2c;
  uint local_28;
  undefined1 local_20 [16];
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c380;
  local_c = ExceptionList;
  local_30[0] = param_1._0_1_;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  uVar5 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_2000a6c0(uVar5,1);
  if (cVar1 != '\0') {
    pcVar7 = local_2c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar7 = *param_1;
      param_1 = param_1 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_2000a6a0(uVar5);
  }
  uVar5 = 0;
  local_4 = 0;
  if (local_28 != 0) {
    do {
      if (local_2c == (char *)0x0) {
        pcVar7 = "";
      }
      else {
        FUN_2000a930();
        pcVar7 = local_2c + uVar5;
      }
      puVar4 = (undefined1 *)FUN_200483c0(uVar5);
      uVar2 = FUN_200fb2a2((int)*pcVar7);
      *puVar4 = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_28);
  }
  FUN_200a79f0(&local_40,local_30);
  if (local_40 == *(int *)(in_ECX + 0xf0)) {
    local_3c = FUN_20069fd0(local_30);
    FUN_2008d0c0(*(undefined4 *)(in_ECX + 0xe4),1,&local_3c);
    *(short *)(in_ECX + 0x10) = *(short *)(in_ECX + 0x10) + 1;
    FUN_200234d0(local_30);
    local_10 = 0;
    local_4._0_1_ = 1;
    FUN_2008dc10(local_38,local_20);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_2000a5b0(1);
    *(undefined2 *)(local_38[0] + 0x1c) = *(undefined2 *)(in_ECX + 0x10);
    uVar3 = *(undefined2 *)(in_ECX + 0x10);
    if (local_2c != (char *)0x0) {
      if (local_2c[-1] == '\0') {
        FUN_200f9f75(local_2c + -1);
      }
      else {
        local_2c[-1] = local_2c[-1] + -1;
      }
    }
  }
  else {
    uVar3 = *(undefined2 *)(local_40 + 0x1c);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
  }
  ExceptionList = local_c;
  return uVar3;
}

