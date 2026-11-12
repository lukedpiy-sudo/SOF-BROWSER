// rea decompile_all
// name: FUN_200df2a0
// address: 0x200df2a0
// body: available
// range: 0x200df2a0-0x200df53a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200df2a0(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f6b8;
  local_c = ExceptionList;
  if (*(int *)(param_3 + 0x30) == 0) {
    local_48 = 0;
  }
  else {
    local_48 = *(int *)(param_3 + 0x34) - *(int *)(param_3 + 0x30) >> 4;
  }
  ExceptionList = &local_c;
  uVar3 = FUN_200f9e13(param_2);
  if (uVar3 != 0) {
    bVar1 = true;
    local_44 = 0;
    if (0 < local_48) {
      local_4c = 0;
      do {
        if ((uVar3 & 1 << ((byte)local_44 & 0x1f)) != 0) {
          pcVar4 = *(char **)(local_4c + 4 + *(int *)(param_3 + 0x30));
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "";
          }
          iVar5 = -1;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          if (iVar5 != -2) {
            if (bVar1) {
              pcVar4 = *(char **)(param_3 + 0x20);
              if (pcVar4 == (char *)0x0) {
                pcVar4 = "";
              }
              local_2c[0] = (undefined1)param_3;
              FUN_2000a5b0(0);
              uVar6 = 0xffffffff;
              pcVar9 = pcVar4;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar2 != '\0');
              uVar6 = ~uVar6 - 1;
              cVar2 = FUN_2000a6c0(uVar6,1);
              if (cVar2 != '\0') {
                pcVar9 = local_28;
                for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
                  pcVar4 = pcVar4 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar9 = *pcVar4;
                  pcVar4 = pcVar4 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                FUN_2000a6a0(uVar6);
              }
              local_4 = 0;
              FUN_2008ce10(*(undefined4 *)(param_1 + 8),1,local_2c);
              local_4 = 0xffffffff;
              FUN_2000a5b0(1);
              bVar1 = false;
            }
            else {
              local_1c[0] = (undefined1)param_3;
              FUN_2000a5b0(0);
              uVar6 = 0xffffffff;
              pcVar4 = &DAT_2015ee44;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar2 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar2 != '\0');
              uVar6 = ~uVar6 - 1;
              cVar2 = FUN_2000a6c0(uVar6,1);
              if (cVar2 != '\0') {
                puVar8 = (undefined4 *)&DAT_2015ee44;
                puVar10 = local_18;
                for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar10 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar10 = puVar10 + 1;
                }
                for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
                  puVar8 = (undefined4 *)((int)puVar8 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                }
                FUN_2000a6a0(uVar6);
              }
              local_4 = 1;
              FUN_2008ce10(*(undefined4 *)(param_1 + 8),1,local_1c);
              local_4 = 0xffffffff;
              FUN_2000a5b0(1);
            }
            pcVar4 = *(char **)(local_4c + 4 + *(int *)(param_3 + 0x30));
            if (pcVar4 == (char *)0x0) {
              pcVar4 = "";
            }
            local_3c[0] = (undefined1)param_3;
            uVar6 = 0xffffffff;
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
            pcVar9 = pcVar4;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            FUN_2000a600(pcVar4,~uVar6 - 1);
            local_4 = 2;
            FUN_2008ce10(*(undefined4 *)(param_1 + 8),1,local_3c);
            local_4 = 0xffffffff;
            if (local_38 != 0) {
              if (*(char *)(local_38 + -1) == '\0') {
                FUN_200f9f75((char *)(local_38 + -1));
              }
              else {
                *(char *)(local_38 + -1) = *(char *)(local_38 + -1) + -1;
              }
            }
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
          }
        }
        local_44 = local_44 + 1;
        local_4c = local_4c + 0x10;
      } while (local_44 < local_48);
    }
  }
  ExceptionList = local_c;
  return;
}

