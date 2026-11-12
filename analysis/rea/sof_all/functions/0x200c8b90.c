// rea decompile_all
// name: FUN_200c8b90
// address: 0x200c8b90
// body: available
// range: 0x200c8b90-0x200c8d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200c8c9e) */
/* WARNING: Removing unreachable block (ram,0x200c8cde) */

void FUN_200c8b90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  
  iVar1 = param_2;
  puVar3 = *(undefined1 **)(param_1 + 8);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_201116cc;
  }
  iVar4 = *(int *)(param_3 + 8);
  uVar7 = 0xffffffff;
  pcVar9 = puVar3 + iVar4 + 1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7 - 1;
  cVar2 = FUN_2000a6c0(uVar7,1);
  if (cVar2 != '\0') {
    pcVar9 = puVar3 + iVar4 + 1;
    pcVar6 = *(char **)(iVar1 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar6 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_2000a6a0(uVar7);
  }
  if (*(int *)(param_4 + 8) != 0) {
    param_1._0_1_ = 0x2e;
    iVar4 = FUN_2008c2d0(&param_1,0,1);
    if (iVar4 != 0) {
      param_1._0_1_ = 0x2a;
      iVar4 = FUN_2008c2d0(&param_1,0,1);
      if (iVar4 == -1) {
        pcVar9 = *(char **)(iVar1 + 8);
        param_1._0_1_ = '?';
        if ((pcVar9 != (char *)0x0) && (pcVar9 != (char *)0x0)) {
          pcVar6 = *(char **)(iVar1 + 4);
          pcVar5 = _memchr(pcVar6,0x3f,(size_t)pcVar9);
          while (pcVar5 != (char *)0x0) {
            if (*pcVar5 == (char)param_1) {
              if ((int)pcVar5 - *(int *)(iVar1 + 4) != -1) {
                return;
              }
              break;
            }
            pcVar9 = pcVar6 + (int)(pcVar9 + (-1 - (int)pcVar5));
            pcVar6 = pcVar5 + 1;
            pcVar5 = _memchr(pcVar6,0x3f,(size_t)pcVar9);
          }
        }
        uVar7 = *(uint *)(iVar1 + 8);
        if (uVar7 == 0) {
LAB_200c8cc4:
          param_3 = -1;
        }
        else {
          pcVar9 = *(char **)(iVar1 + 4);
          for (pcVar6 = pcVar9 + (uVar7 - 1); *pcVar6 != '.'; pcVar6 = pcVar6 + -1) {
            if (pcVar6 == pcVar9) goto LAB_200c8cc4;
          }
          param_3 = (int)pcVar6 - (int)pcVar9;
        }
        param_1 = CONCAT31(param_1._1_3_,0x2e);
        if (uVar7 == 0) {
LAB_200c8d02:
          uVar8 = 0xffffffff;
        }
        else {
          pcVar9 = *(char **)(iVar1 + 4);
          for (pcVar6 = pcVar9 + (uVar7 - 1); *pcVar6 != '.'; pcVar6 = pcVar6 + -1) {
            if (pcVar6 == pcVar9) goto LAB_200c8d02;
          }
          uVar8 = (int)pcVar6 - (int)pcVar9;
        }
        uVar10 = uVar7 - param_3;
        if (uVar7 < uVar8) {
          FUN_201077fc();
        }
        uVar7 = *(int *)(iVar1 + 8) - uVar8;
        if (uVar7 < uVar10) {
          uVar10 = uVar7;
        }
        if (uVar10 != 0) {
          if ((*(int *)(iVar1 + 4) != 0) && (*(char *)(*(int *)(iVar1 + 4) + -1) != '\0')) {
            FUN_2000a6c0(*(int *)(iVar1 + 8),0);
          }
          if (*(int *)(iVar1 + 4) != 0) {
            *(undefined1 *)(*(int *)(iVar1 + 4) + -1) = 0;
          }
          FUN_200fa360(*(int *)(iVar1 + 4) + uVar8,*(int *)(iVar1 + 4) + uVar10 + uVar8,
                       (*(int *)(iVar1 + 8) - uVar10) - uVar8);
          iVar4 = *(int *)(iVar1 + 8) - uVar10;
          cVar2 = FUN_2000a6c0(iVar4,0);
          if (cVar2 != '\0') {
            *(int *)(iVar1 + 8) = iVar4;
            *(undefined1 *)(iVar4 + *(int *)(iVar1 + 4)) = 0;
          }
        }
      }
    }
  }
  return;
}

