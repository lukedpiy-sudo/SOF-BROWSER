// rea decompile_all
// name: FUN_20037e40
// address: 0x20037e40
// body: available
// range: 0x20037e40-0x20038046 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_20037e40(char *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_5c;
  undefined1 local_58 [8];
  undefined1 local_50 [4];
  char *local_4c;
  undefined1 local_40 [4];
  char *local_3c;
  undefined1 local_30 [4];
  char *local_2c;
  undefined1 local_20 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b190;
  local_c = ExceptionList;
  local_50[0] = param_1._0_1_;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  pcVar8 = param_1;
  uVar5 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_2000a6c0(uVar5,1);
  if (cVar2 != '\0') {
    pcVar7 = pcVar8;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_4c = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      local_4c = local_4c + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_4c = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_4c = local_4c + 1;
    }
    FUN_2000a6a0(uVar5);
  }
  local_4 = 0;
  FUN_200a79f0(&local_5c,local_50);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  pcVar7 = local_5c;
  if (local_5c == DAT_202b3498) {
    local_40[0] = param_1._0_1_;
    FUN_2000a5b0(0);
    uVar5 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_2000a6c0(uVar5,1);
    if (cVar2 != '\0') {
      pcVar7 = pcVar8;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)local_3c = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        local_3c = local_3c + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_3c = *pcVar7;
        pcVar7 = pcVar7 + 1;
        local_3c = local_3c + 1;
      }
      FUN_2000a6a0(uVar5);
    }
    local_4 = 1;
    FUN_200234d0(local_40);
    local_10 = 0;
    local_4._0_1_ = 2;
    piVar3 = (int *)FUN_2003c140(local_58,local_20);
    iVar1 = *piVar3;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_2000a5b0(1);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    local_30[0] = param_1._0_1_;
    FUN_2000a5b0(0);
    uVar5 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_2000a6c0(uVar5,1);
    if (cVar2 != '\0') {
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)local_2c = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        local_2c = local_2c + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_2c = *pcVar8;
        pcVar8 = pcVar8 + 1;
        local_2c = local_2c + 1;
      }
      FUN_2000a6a0(uVar5);
    }
    local_4 = 3;
    FUN_200a79f0(&param_1,local_30);
    pcVar7 = param_1;
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
  }
  puVar4 = *(undefined1 **)(pcVar7 + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_201116cc;
  }
  ExceptionList = local_c;
  return puVar4;
}

