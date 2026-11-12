// rea decompile_all
// name: FUN_2004f820
// address: 0x2004f820
// body: available
// range: 0x2004f820-0x2004fa3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004f820(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  int local_68;
  undefined1 local_64 [8];
  undefined1 local_5c [4];
  char *local_58;
  undefined1 local_4c [4];
  char *local_48;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b3e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_20107ed2(param_1);
  local_4c[0] = param_1._0_1_;
  FUN_2000a5b0(0);
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar2 = FUN_2000a6c0(uVar3,1);
  if (cVar2 != '\0') {
    pcVar5 = param_1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_48 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_48 = local_48 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_48 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_48 = local_48 + 1;
    }
    FUN_2000a6a0(uVar3);
  }
  iVar1 = *(int *)(in_ECX + 8);
  local_4 = 0;
  FUN_200a79f0(&local_68,local_4c);
  bVar6 = local_68 == iVar1;
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  if (bVar6) {
    local_5c[0] = bVar6;
    FUN_2000a5b0(0);
    uVar3 = 0xffffffff;
    pcVar5 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar2 = FUN_2000a6c0(uVar3,1);
    if (cVar2 != '\0') {
      pcVar5 = local_58;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar5 = *param_1;
        param_1 = param_1 + 1;
        pcVar5 = pcVar5 + 1;
      }
      FUN_2000a6a0(uVar3);
    }
    local_4 = 1;
    local_3c[0] = local_5c[0];
    FUN_2000a5b0(0);
    FUN_2000a3a0(local_5c,0,0xffffffff);
    local_2c = param_2;
    local_28 = param_3;
    local_24[0] = local_3c[0];
    local_4._0_1_ = 2;
    FUN_2000a5b0(0);
    FUN_2000a3a0(local_3c,0,0xffffffff);
    local_14 = local_2c;
    local_10 = local_28;
    local_4._0_1_ = 3;
    FUN_200500c0(local_64,local_24);
    local_4._0_1_ = 2;
    FUN_2000a5b0(1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_2000a5b0(1);
    if (local_58 != (char *)0x0) {
      if (local_58[-1] == '\0') {
        FUN_200f9f75(local_58 + -1);
      }
      else {
        local_58[-1] = local_58[-1] + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

