// rea decompile_all
// name: FUN_500887e0
// address: 0x500887e0
// body: available
// range: 0x500887e0-0x50088b55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_500887e0(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  int *piVar10;
  bool bVar11;
  byte abStack_400 [512];
  byte abStack_200 [512];
  
  bVar11 = true;
  if (param_1 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(param_1 + 0x450);
  }
  if (param_2 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = *(int **)(param_2 + 0x450);
  }
  if ((((param_1 != 0) && (param_2 != 0)) &&
      ((piVar6 == (int *)0x0 || (cVar2 = (**(code **)(*piVar6 + 0x108))(), cVar2 == '\0')))) &&
     ((piVar10 == (int *)0x0 || (cVar2 = (**(code **)(*piVar10 + 0x108))(), cVar2 == '\0')))) {
    if (*(int **)(param_1 + 0x450) == (int *)0x0) {
      if (*(int *)(param_2 + 0x450) == 0) {
        iVar3 = *(int *)(DAT_5015c8c8 + 0x18);
        if (((iVar3 == 0x40800000) || (iVar3 == 0x40c00000)) ||
           ((iVar3 == 0x40e00000 &&
            ((iVar3 = (**(code **)(*DAT_5015c4d8 + 0x7c))(), iVar3 != 0 &&
             (iVar3 = (**(code **)(*DAT_5015c4d8 + 0x58))(), iVar3 != 0)))))) {
          if ((*(int *)(param_1 + 0x74) != 0) &&
             ((*(int *)(param_2 + 0x74) != 0 &&
              (*(int *)(*(int *)(param_1 + 0x74) + 0x324) ==
               *(int *)(*(int *)(param_2 + 0x74) + 0x324))))) {
            return true;
          }
        }
        else {
          iVar3 = (**(code **)(*DAT_5015c4d8 + 0x58))();
          if (iVar3 != 0) {
            DAT_5015c578 = 0;
            iVar3 = *(int *)(param_1 + 0x74);
            if (iVar3 == 0) {
              pbVar7 = &DAT_5015c578;
            }
            else if (*(int *)(iVar3 + 0x324) == 1) {
              pbVar7 = &DAT_50146a90;
            }
            else if (*(int *)(iVar3 + 0x324) == 2) {
              pbVar7 = &DAT_50146a98;
            }
            else {
              pcVar5 = FUN_500fe320((byte *)(iVar3 + 0xcc),(byte *)s_teamname_50144e40);
              pcVar9 = (char *)&DAT_5015c578;
              do {
                cVar2 = *pcVar5;
                pcVar5 = pcVar5 + 1;
                *pcVar9 = cVar2;
                pcVar9 = pcVar9 + 1;
              } while (cVar2 != '\0');
              pbVar7 = &DAT_5015c578;
            }
            pbVar8 = abStack_200;
            do {
              DAT_5015c578 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              *pbVar8 = DAT_5015c578;
              pbVar8 = pbVar8 + 1;
            } while (DAT_5015c578 != 0);
            iVar3 = *(int *)(param_2 + 0x74);
            if (iVar3 == 0) {
              pbVar7 = &DAT_5015c578;
            }
            else if (*(int *)(iVar3 + 0x324) == 1) {
              pbVar7 = &DAT_50146a90;
            }
            else if (*(int *)(iVar3 + 0x324) == 2) {
              pbVar7 = &DAT_50146a98;
            }
            else {
              pcVar5 = FUN_500fe320((byte *)(iVar3 + 0xcc),(byte *)s_teamname_50144e40);
              pcVar9 = (char *)&DAT_5015c578;
              do {
                cVar2 = *pcVar5;
                pcVar5 = pcVar5 + 1;
                *pcVar9 = cVar2;
                pcVar9 = pcVar9 + 1;
              } while (cVar2 != '\0');
              pbVar7 = &DAT_5015c578;
            }
            pbVar8 = abStack_400;
            do {
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              *pbVar8 = bVar1;
              pbVar8 = pbVar8 + 1;
            } while (bVar1 != 0);
            pbVar7 = abStack_400;
            pbVar8 = abStack_200;
            while( true ) {
              bVar1 = *pbVar8;
              bVar11 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) break;
              if (bVar1 == 0) {
                return true;
              }
              bVar1 = pbVar8[1];
              bVar11 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) break;
              pbVar8 = pbVar8 + 2;
              pbVar7 = pbVar7 + 2;
              if (bVar1 == 0) {
                return true;
              }
            }
            return 1 - bVar11 == (uint)(bVar11 != 0);
          }
        }
      }
      else {
        if ((*(int *)(param_1 + 0x74) != 0) && (*(float *)(DAT_5015c8c8 + 0x18) != 0.0)) {
          pcVar5 = FUN_500fe320((byte *)(*(int *)(param_1 + 0x74) + 0xcc),
                                (byte *)s_teamname_50144e40);
          iVar3 = 8;
          bVar11 = true;
          pcVar9 = s_mullins_50146a9c;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar11 = *pcVar5 == *pcVar9;
            pcVar5 = pcVar5 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar11);
        }
        iVar3 = (**(code **)(**(int **)(param_2 + 0x450) + 0x10))(param_2);
        if ((iVar3 == 0) && (bVar11)) {
          return true;
        }
      }
    }
    else {
      piVar6 = *(int **)(param_2 + 0x450);
      if (piVar6 != (int *)0x0) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 0x10))(param_1);
        iVar4 = (**(code **)(*piVar6 + 0x10))(param_2);
        return iVar3 == iVar4;
      }
      if ((*(int *)(param_2 + 0x74) != 0) && (*(float *)(DAT_5015c8c8 + 0x18) != 0.0)) {
        pcVar5 = FUN_500fe320((byte *)(*(int *)(param_2 + 0x74) + 0xcc),(byte *)s_teamname_50144e40)
        ;
        iVar3 = 8;
        bVar11 = true;
        pcVar9 = s_mullins_50146a9c;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar11 = *pcVar5 == *pcVar9;
          pcVar5 = pcVar5 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar11);
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 0x10))(param_1);
      if ((((iVar3 == 0) || (!bVar11)) && (*(int *)(param_2 + 0x74) != 0)) && (bVar11)) {
        return true;
      }
    }
  }
  return false;
}

