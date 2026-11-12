// rea decompile_all
// name: FUN_20025bb0
// address: 0x20025bb0
// body: available
// range: 0x20025bb0-0x20025fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20025bb0(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int local_1e4;
  uint local_1e0;
  undefined1 local_1dc [4];
  byte local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  int local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b005;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200251c0(param_2);
  local_1e0 = 1;
  pcVar2 = DAT_2026aa78;
  do {
    if ((pcVar2 == (char *)0x0) || (local_1e0 == 0)) {
      ExceptionList = local_c;
      return;
    }
    local_1e0 = param_3 & 0xff;
    if (*(int *)(pcVar2 + 0x80) == 0) {
      uVar3 = FUN_200c5de0(pcVar2,2);
      local_4 = 6;
      FUN_20027630(*(undefined4 *)(param_1 + 8),1,uVar3);
      local_4 = 8;
      FUN_2000a5b0(1);
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      Com_sprintf(local_8c,0x80,s__s__s_2011f104,pcVar2,param_2);
      uVar7 = 0xffffffff;
      pcVar6 = pcVar2;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar6 = (char *)FUN_20055a40(local_8c,0,4,local_1dc);
      while (pcVar6 != (char *)0x0) {
        uVar8 = 0xffffffff;
        pcVar9 = pcVar6;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        local_1e4 = uVar8 - 1;
        if ((pcVar6[uVar8 - 2] != '.') && (pcVar6[uVar8 - 3] != '.')) {
          if ((local_1d8 & 0x10) == 0) {
            uVar3 = FUN_200c5cb0(pcVar6 + ~uVar7,0,local_1d4,local_1d0);
            local_4 = 0xc;
            FUN_20027630(*(undefined4 *)(param_1 + 8),1,uVar3);
            local_4 = 0xe;
            FUN_2000a5b0(1);
            local_4 = CONCAT31(local_4._1_3_,0xd);
            FUN_2000a5b0(1);
            local_4 = 0xffffffff;
            if (local_1c4 != 0) {
              if (*(char *)(local_1c4 + -1) == '\0') {
                FUN_200f9f75((char *)(local_1c4 + -1));
              }
              else {
                *(char *)(local_1c4 + -1) = *(char *)(local_1c4 + -1) + -1;
              }
            }
            local_1c4 = 0;
            local_1c0 = 0;
            local_1bc = 0;
          }
          else {
            uVar3 = FUN_200c5cb0(pcVar6 + ~uVar7,1,0,local_1d0);
            local_4 = 9;
            FUN_20027630(*(undefined4 *)(param_1 + 8),1,uVar3);
            local_4 = 0xb;
            FUN_2000a5b0(1);
            local_4 = CONCAT31(local_4._1_3_,10);
            FUN_2000a5b0(1);
            local_4 = 0xffffffff;
            if (local_184 != 0) {
              if (*(char *)(local_184 + -1) != '\0') {
                *(char *)(local_184 + -1) = *(char *)(local_184 + -1) + -1;
                local_184 = 0;
                local_180 = 0;
                local_17c = 0;
                goto LAB_20025f81;
              }
              FUN_200f9f75((char *)(local_184 + -1));
            }
            local_184 = 0;
            local_180 = 0;
            local_17c = 0;
          }
        }
LAB_20025f81:
        pcVar6 = (char *)FUN_20055980(0,4,local_1dc);
      }
      FUN_20055bb0();
    }
    else {
      uVar3 = FUN_200c5de0(pcVar2,3);
      local_4 = 0;
      FUN_20027630(*(undefined4 *)(param_1 + 8),1,uVar3);
      local_4 = 2;
      FUN_2000a5b0(1);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      iVar4 = FUN_2004fb90(&local_1e4,1);
      while (iVar4 != 0) {
        iVar5 = FUN_20025a70(param_2,iVar4);
        if (iVar5 != 0) {
          uVar3 = FUN_200c5cb0(iVar4,0,local_1e4,0);
          local_4 = 3;
          FUN_20027630(*(undefined4 *)(param_1 + 8),1,uVar3);
          local_4 = 5;
          FUN_2000a5b0(1);
          local_4 = CONCAT31(local_4._1_3_,4);
          FUN_2000a5b0(1);
          local_4 = 0xffffffff;
          FUN_2000a5b0(1);
        }
        iVar4 = FUN_2004fb90(&local_1e4,0);
      }
    }
    pcVar2 = *(char **)(pcVar2 + 0x84);
  } while( true );
}

