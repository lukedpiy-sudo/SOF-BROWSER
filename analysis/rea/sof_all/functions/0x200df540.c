// rea decompile_all
// name: FUN_200df540
// address: 0x200df540
// body: available
// range: 0x200df540-0x200df775 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200df540(undefined1 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int in_ECX;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = (int)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f6e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200e37e0(*(undefined4 *)((int)param_1 + 4),*(undefined4 *)((int)param_1 + 8));
  param_1 = &DAT_201116cc;
  if (*(undefined1 **)((int)param_2 + 4) != (undefined1 *)0x0) {
    param_1 = *(undefined1 **)((int)param_2 + 4);
  }
  uVar5 = FUN_20055590(param_1,s_deathmatch_2011d664);
  iVar6 = FUN_200f9e13(uVar5);
  iVar1 = *(int *)**(undefined4 **)(in_ECX + 4);
  piVar2 = *(int **)(iVar1 + 0xec);
  piVar12 = (int *)*piVar2;
  if (piVar12 != piVar2) {
    do {
      if ((piVar12[2] == 0) || (piVar12[2] == iVar6)) {
        puVar7 = (undefined1 *)piVar12[4];
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_201116cc;
        }
        pcVar8 = (char *)FUN_20055590(param_1,puVar7);
        iVar9 = -1;
        pcVar13 = pcVar8;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar4 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar4 != '\0');
        if (iVar9 != -2) {
          if ((piVar12[0xc] == 0) || (piVar12[0xd] - piVar12[0xc] >> 4 == 0)) {
            param_2 = "";
            if ((char *)piVar12[8] != (char *)0x0) {
              param_2 = (char *)piVar12[8];
            }
            local_1c[0] = param_1._0_1_;
            FUN_2000a5b0(0);
            uVar10 = 0xffffffff;
            pcVar13 = param_2;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar4 = *pcVar13;
              pcVar13 = pcVar13 + 1;
            } while (cVar4 != '\0');
            uVar10 = ~uVar10 - 1;
            cVar4 = FUN_2000a6c0(uVar10,1);
            if (cVar4 != '\0') {
              pcVar13 = local_18;
              for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)param_2;
                param_2 = param_2 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar13 = *param_2;
                param_2 = param_2 + 1;
                pcVar13 = pcVar13 + 1;
              }
              local_18[uVar10] = '\0';
              local_14 = uVar10;
            }
            local_4 = 0;
            FUN_2008ce10(*(undefined4 *)(iVar3 + 8),1,local_1c);
            local_4 = 0xffffffff;
            FUN_2000a5b0(1);
            uVar10 = 0xffffffff;
            pcVar13 = pcVar8;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar4 = *pcVar13;
              pcVar13 = pcVar13 + 1;
            } while (cVar4 != '\0');
            local_2c[0] = param_1._0_1_;
            local_28 = 0;
            local_24 = 0;
            local_20 = 0;
            FUN_2000a600(pcVar8,~uVar10 - 1);
            local_4 = 1;
            FUN_2008ce10(*(undefined4 *)(iVar3 + 8),1,local_2c);
            local_4 = 0xffffffff;
            if (local_28 != 0) {
              if (*(char *)(local_28 + -1) == '\0') {
                FUN_200f9f75((char *)(local_28 + -1));
              }
              else {
                *(char *)(local_28 + -1) = *(char *)(local_28 + -1) + -1;
              }
            }
            local_28 = 0;
            local_24 = 0;
            local_20 = 0;
          }
          else {
            FUN_200df2a0(iVar3,pcVar8,piVar12);
          }
        }
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)*(int *)(iVar1 + 0xec));
  }
  ExceptionList = local_c;
  return;
}

