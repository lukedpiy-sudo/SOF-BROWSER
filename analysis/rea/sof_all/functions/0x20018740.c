// rea decompile_all
// name: FUN_20018740
// address: 0x20018740
// body: available
// range: 0x20018740-0x20018920 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_20018740(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  
  iVar9 = 0;
  iVar3 = FUN_2001e9b0();
  iVar10 = 1;
  if (1 < iVar3) {
    do {
      pcVar4 = (char *)FUN_2001e9c0(iVar10);
      uVar6 = 0xffffffff;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar10 = iVar10 + 1;
      iVar9 = ~uVar6 + iVar9;
    } while (iVar10 < iVar3);
    if (iVar9 != 0) {
      pcVar4 = (char *)Z_Malloc(iVar9 + 1);
      iVar10 = 1;
      *pcVar4 = '\0';
      do {
        pcVar5 = (char *)FUN_2001e9c0(iVar10);
        uVar6 = 0xffffffff;
        do {
          pcVar11 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar7 = -1;
        pcVar5 = pcVar4;
        do {
          pcVar13 = pcVar5;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        pcVar5 = pcVar11 + -uVar6;
        pcVar11 = pcVar13 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar11 = pcVar11 + 1;
        }
        if (iVar10 != iVar3 + -1) {
          iVar7 = -1;
          pcVar5 = pcVar4;
          do {
            pcVar11 = pcVar5;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar11 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar11;
          } while (cVar1 != '\0');
          *(undefined2 *)(pcVar11 + -1) = DAT_2011d72c;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar3);
      pcVar5 = (char *)Z_Malloc(iVar9 + 1);
      iVar3 = 0;
      *pcVar5 = '\0';
      if (0 < iVar9 + -1) {
        do {
          if (pcVar4[iVar3] == '+') {
            iVar3 = iVar3 + 1;
            pcVar11 = pcVar4 + iVar3;
            cVar1 = pcVar4[iVar3];
            while (((cVar1 != '+' && (cVar1 != '-')) && (cVar1 != '\0'))) {
              iVar10 = iVar3 + 1;
              iVar3 = iVar3 + 1;
              cVar1 = pcVar4[iVar10];
            }
            cVar1 = pcVar4[iVar3];
            uVar6 = 0xffffffff;
            pcVar4[iVar3] = '\0';
            do {
              pcVar13 = pcVar11;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar11 + 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar13;
            } while (cVar2 != '\0');
            uVar6 = ~uVar6;
            iVar10 = -1;
            pcVar11 = pcVar5;
            do {
              pcVar12 = pcVar11;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar12 = pcVar11 + 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar2 != '\0');
            pcVar11 = pcVar13 + -uVar6;
            pcVar13 = pcVar12 + -1;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar13 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar13 = pcVar13 + 1;
            }
            iVar10 = -1;
            pcVar11 = pcVar5;
            do {
              pcVar13 = pcVar11;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar13 = pcVar11 + 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar13;
            } while (cVar2 != '\0');
            *(undefined2 *)(pcVar13 + -1) = DAT_2011dd40;
            pcVar4[iVar3] = cVar1;
            iVar3 = iVar3 + -1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar9 + -1);
      }
      cVar1 = *pcVar5;
      if (cVar1 != '\0') {
        uVar6 = 0xffffffff;
        pcVar11 = pcVar5;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        if ((int)((~uVar6 - 1) + DAT_2023f830) < DAT_2023f82c) {
          uVar6 = 0xffffffff;
          pcVar11 = pcVar5;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          FUN_2001e7b0(&DAT_2023f824,pcVar5,~uVar6 - 1);
        }
        else {
          Com_Printf(s_Cbuf_AddText__overflow_201200b8);
        }
      }
      Z_Free(pcVar4);
      Z_Free(pcVar5);
      return cVar1 != '\0';
    }
  }
  return false;
}

