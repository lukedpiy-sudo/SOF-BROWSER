// rea decompile_all
// name: FUN_2009c3c0
// address: 0x2009c3c0
// body: available
// range: 0x2009c3c0-0x2009c649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2009c3c0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 local_439;
  int local_438;
  undefined1 local_434 [4];
  char *local_430;
  uint local_42c;
  undefined4 local_428;
  undefined1 *local_424;
  int local_420;
  undefined1 local_41c [4];
  undefined1 local_418 [4];
  undefined1 *local_414;
  int local_410;
  undefined1 local_408 [16];
  undefined4 local_3f8;
  char local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010cfcc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_438 = in_ECX;
  local_420 = FUN_20068dc0(param_1);
  iVar8 = 0;
  if (0 < local_420) {
    do {
      puVar3 = operator_new(0xd0);
      local_4 = 0;
      local_414 = puVar3;
      if (puVar3 == (undefined1 *)0x0) {
        local_424 = (undefined1 *)0x0;
      }
      else {
        puVar3[8] = local_439;
        FUN_2000a5b0(0);
        local_4._0_1_ = 1;
        FUN_2009df30(&local_439);
        local_4._0_1_ = 2;
        FUN_200920f0();
        local_4._0_1_ = 3;
        FUN_200920f0();
        local_4._0_1_ = 4;
        FUN_20092130();
        local_4._0_1_ = 5;
        FUN_20092130();
        local_4._0_1_ = 6;
        FUN_20092130();
        local_4 = CONCAT31(local_4._1_3_,7);
        FUN_20092130();
        *puVar3 = 0;
        local_424 = puVar3;
      }
      local_4 = 0xffffffff;
      FUN_200a8890(*(undefined4 *)(in_ECX + 0x30),1,&local_424);
      FUN_2009ba50(param_1);
      local_434[0] = local_439;
      FUN_2000a5b0(0);
      local_4 = 8;
      pcVar4 = *(char **)(*(int *)(*(int *)(in_ECX + 0x2c) + iVar8 * 4) + 0xc);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "";
      }
      pcVar7 = local_3f4;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar7 = cVar2;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      FUN_20107ed2(local_3f4);
      uVar5 = 0xffffffff;
      pcVar4 = local_3f4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar2 = FUN_2000a6c0(uVar5,1);
      if (cVar2 != '\0') {
        pcVar4 = local_3f4;
        pcVar7 = local_430;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar7 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar7 = pcVar7 + 1;
        }
        local_430[uVar5] = '\0';
        local_42c = uVar5;
      }
      FUN_200234d0(local_434);
      local_3f8 = 0;
      local_4._0_1_ = 9;
      FUN_2004c7a0(local_41c,local_408);
      FUN_2008c5b0(local_41c,local_418);
      iVar1 = local_410;
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_2000a5b0(1);
      *(int *)(iVar1 + 0x1c) = iVar8;
      local_4 = 0xffffffff;
      if (local_430 != (char *)0x0) {
        if (local_430[-1] == '\0') {
          FUN_200f9f75(local_430 + -1);
        }
        else {
          local_430[-1] = local_430[-1] + -1;
        }
      }
      iVar8 = iVar8 + 1;
      local_430 = (char *)0x0;
      local_42c = 0;
      local_428 = 0;
      in_ECX = local_438;
    } while (iVar8 < local_420);
  }
  ExceptionList = local_c;
  return 1;
}

