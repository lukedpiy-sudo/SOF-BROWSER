// rea decompile_all
// name: FUN_200c8d90
// address: 0x200c8d90
// body: available
// range: 0x200c8d90-0x200c912e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c8d90(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  undefined1 local_2c;
  undefined1 *local_28;
  int local_24;
  undefined1 local_1c;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e160;
  local_c = ExceptionList;
  local_1c = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_2c = (undefined1)param_2;
  local_4 = 0;
  FUN_2000a5b0(0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || ((uint)(*(int *)(param_1 + 8) - iVar5 >> 6) < 2)) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_2000a5b0(1);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    ExceptionList = local_c;
    return;
  }
LAB_200c8e2a:
  do {
    bVar2 = true;
    local_3c = 0;
    uVar9 = 0;
    while( true ) {
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 8) - iVar5 >> 6;
      }
      if (iVar3 - 1U <= uVar9) break;
      if (!bVar2) goto LAB_200c8e2a;
      puVar4 = *(undefined1 **)(local_3c + 8 + iVar5);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      uVar8 = 0xffffffff;
      pcVar10 = puVar4 + *(int *)(param_2 + 8) + 1;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(puVar4 + *(int *)(param_2 + 8) + 1,~uVar8 - 1);
      if (*(int *)(param_3 + 8) != 0) {
        local_44[0] = 0x2e;
        iVar5 = FUN_2008c2d0(local_44,0,1);
        if (iVar5 != 0) {
          local_44[0] = 0x2a;
          iVar5 = FUN_2008c2d0(local_44,0,1);
          if (iVar5 == -1) {
            local_44[0] = 0x3f;
            iVar3 = FUN_2008c2d0(local_44,0,1);
            iVar5 = local_14;
            if (iVar3 == -1) {
              local_40[0] = 0x2e;
              local_44[0] = 0x2e;
              uVar6 = FUN_200c94a0(local_44,0xffffffff,1);
              iVar3 = FUN_200c94a0(local_40,0xffffffff,1);
              FUN_20027e40(uVar6,iVar5 - iVar3);
            }
          }
        }
      }
      local_38 = uVar9 + 1;
      iVar3 = local_3c;
      local_30 = local_38;
      while( true ) {
        iVar3 = iVar3 + 0x40;
        iVar5 = *(int *)(param_1 + 4);
        local_34 = iVar3;
        if (((iVar5 == 0) || ((uint)(*(int *)(param_1 + 8) - iVar5 >> 6) <= local_38)) || (!bVar2))
        break;
        puVar4 = *(undefined1 **)(iVar5 + 8 + iVar3);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_201116cc;
        }
        uVar9 = 0xffffffff;
        pcVar10 = puVar4 + *(int *)(param_2 + 8) + 1;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_2000a600(puVar4 + *(int *)(param_2 + 8) + 1,~uVar9 - 1);
        if (*(int *)(param_3 + 8) != 0) {
          local_40[0] = 0x2e;
          iVar5 = FUN_2008c2d0(local_40,0,1);
          if (iVar5 != 0) {
            local_40[0] = 0x2a;
            iVar5 = FUN_2008c2d0(local_40,0,1);
            if (iVar5 == -1) {
              local_40[0] = 0x3f;
              iVar7 = FUN_2008c2d0(local_40,0,1);
              iVar5 = local_24;
              if (iVar7 == -1) {
                local_44[0] = 0x2e;
                local_40[0] = 0x2e;
                uVar6 = FUN_200c94a0(local_40,0xffffffff,1);
                iVar7 = FUN_200c94a0(local_44,0xffffffff,1);
                FUN_20027e40(uVar6,iVar5 - iVar7);
              }
            }
          }
        }
        puVar4 = local_28;
        if (local_28 == (undefined1 *)0x0) {
          puVar4 = &DAT_201116cc;
        }
        iVar5 = FUN_20023c90(0,local_14,puVar4,local_24);
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 8);
          iVar7 = *(int *)(param_1 + 4) + iVar3;
          while (iVar7 = iVar7 + 0x40, iVar7 != iVar5) {
            FUN_20027bd0(iVar7);
            iVar3 = local_34;
          }
          iVar7 = *(int *)(param_1 + 8);
          for (iVar5 = iVar7 + -0x40; iVar5 != iVar7; iVar5 = iVar5 + 0x40) {
            FUN_200c9520(0);
          }
          bVar2 = false;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x40;
        }
        local_38 = local_38 + 1;
      }
      local_3c = local_3c + 0x40;
      uVar9 = local_30;
    }
    if (bVar2) {
      local_4 = local_4 & 0xffffff00;
      FUN_2000a5b0(1);
      if (local_18 != 0) {
        if (*(char *)(local_18 + -1) != '\0') {
          *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
          ExceptionList = local_c;
          return;
        }
        FUN_200f9f75((char *)(local_18 + -1));
      }
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

