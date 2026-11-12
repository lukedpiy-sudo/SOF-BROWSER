// rea decompile_all
// name: FUN_20022fe0
// address: 0x20022fe0
// body: available
// range: 0x20022fe0-0x200232ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_20022fe0(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint local_4a0;
  undefined4 local_49c;
  undefined1 local_498 [4];
  char *local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined1 local_488 [4];
  char *local_484;
  undefined1 local_478 [4];
  undefined1 local_474 [4];
  int local_470;
  undefined1 local_468 [16];
  undefined4 local_458;
  undefined1 local_454 [128];
  undefined1 local_3d4 [388];
  char local_250 [580];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010aec1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  uVar6 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_2000a6c0(uVar6,1);
  if (cVar1 != '\0') {
    pcVar5 = param_1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_484 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_484 = local_484 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_484 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_484 = local_484 + 1;
    }
    FUN_2000a6a0(uVar6);
  }
  local_4 = 0;
  FUN_200a79f0(&local_4a0,local_488);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  if (local_4a0 == DAT_2024b1e4) {
    if (DAT_20130e04 < 500) {
      uVar6 = 0xffffffff;
      pcVar5 = param_1;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = __strcmpi(param_1 + (~uVar6 - 5),&DAT_2011f2f0);
      if (iVar4 == 0) {
        uVar6 = 0xffffffff;
        pcVar5 = param_1;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        param_1[~uVar6 - 5] = '\0';
      }
      Com_sprintf(local_454,0x80,s_textures__s_m32_2011f32c,param_1);
      iVar4 = FS_FOpenFile(local_454,&local_49c,0);
      if (iVar4 == -1) {
        puVar3 = &DAT_2024b1f8;
      }
      else {
        FUN_200252d0(local_3d4,0x3c8,local_49c);
        FS_FCloseFile(local_49c);
        iVar4 = DAT_20130e04 * 0x102;
        puVar3 = (undefined4 *)((int)&DAT_2024b1f8 + iVar4);
        puVar9 = puVar3;
        DAT_20130e04 = DAT_20130e04 + 1;
        for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = 0;
        pcVar5 = param_1;
        do {
          cVar1 = *pcVar5;
          pcVar5[(int)puVar3 - (int)param_1] = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar5 = local_250;
        do {
          cVar1 = *pcVar5;
          pcVar5[(int)(&DAT_2024b278 + (iVar4 - (int)local_250))] = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar6 = 0xffffffff;
        (&DAT_2024b2f9)[iVar4] = SUB41(local_250._320_4_,3);
        pcVar5 = param_1;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6 - 1;
        local_494 = (char *)0x0;
        local_490 = 0;
        local_48c = 0;
        local_4a0 = uVar6;
        cVar1 = FUN_2000a6c0(uVar6,1);
        if (cVar1 != '\0') {
          pcVar5 = local_494;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
            param_1 = param_1 + 4;
            pcVar5 = pcVar5 + 4;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar5 = *param_1;
            param_1 = param_1 + 1;
            pcVar5 = pcVar5 + 1;
          }
          FUN_2000a6a0(uVar6);
        }
        local_4 = 1;
        FUN_200234d0(local_498);
        local_458 = 0;
        local_4._0_1_ = 2;
        FUN_20023600(local_478,local_468);
        FUN_2008c5b0(local_478,local_474);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_2000a5b0(1);
        *(undefined4 **)(local_470 + 0x1c) = puVar3;
        local_4 = 0xffffffff;
        if (local_494 != (char *)0x0) {
          if (local_494[-1] == '\0') {
            FUN_200f9f75(local_494 + -1);
          }
          else {
            local_494[-1] = local_494[-1] + -1;
          }
        }
        local_494 = (char *)0x0;
        local_490 = 0;
        local_48c = 0;
        if ((&DAT_2024b278)[iVar4] == '\0') {
          (&DAT_2024b2f8)[iVar4] = 0;
        }
        else {
          uVar2 = __ftol();
          (&DAT_2024b2f8)[iVar4] = uVar2;
          FUN_20022fe0(&DAT_2024b278 + iVar4);
        }
      }
    }
    else {
      puVar3 = &DAT_2024b1f8;
    }
  }
  else {
    puVar3 = *(undefined4 **)(local_4a0 + 0x1c);
  }
  ExceptionList = local_c;
  return puVar3;
}

