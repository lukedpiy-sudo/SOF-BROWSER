// rea decompile_all
// name: FUN_200c6b50
// address: 0x200c6b50
// body: available
// range: 0x200c6b50-0x200c6d8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200c6b50(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  
  cVar1 = FUN_200eafe0(1);
  do {
    if (cVar1 != '\0') {
      return 1;
    }
    pcVar10 = s_border_20158348;
    pcVar2 = (char *)FUN_200eb440(0);
    iVar3 = __strcmpi(pcVar2,pcVar10);
    if (iVar3 == 0) {
      FUN_200eafe0(3);
      uVar4 = FUN_200eb440(2);
      uVar5 = FUN_200eb440(1);
      uVar6 = FUN_200eb440(0);
      FUN_200c6460(uVar6,uVar5,uVar4);
    }
    else {
      pcVar10 = &DAT_20158340;
      pcVar2 = (char *)FUN_200eb440(0);
      iVar3 = __strcmpi(pcVar2,pcVar10);
      if (iVar3 == 0) {
        FUN_200eafe0(1);
        pcVar2 = (char *)FUN_200eb440(0);
        uVar7 = 0xffffffff;
        pcVar10 = pcVar2;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7 - 1;
        cVar1 = FUN_2000a6c0(uVar7,1);
        if (cVar1 != '\0') {
          pcVar10 = *(char **)(in_ECX + 0x20);
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
            pcVar2 = pcVar2 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar10 = *pcVar2;
            pcVar2 = pcVar2 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(uint *)(in_ECX + 0x24) = uVar7;
          *(undefined1 *)(uVar7 + *(int *)(in_ECX + 0x20)) = 0;
        }
      }
      else {
        pcVar10 = s_cpage_20158338;
        pcVar2 = (char *)FUN_200eb440(0);
        iVar3 = __strcmpi(pcVar2,pcVar10);
        if (iVar3 == 0) {
          FUN_200eafe0(1);
          uVar6 = 0;
          uVar5 = 0;
          puVar9 = &DAT_2015ee44;
          uVar4 = FUN_200eb440(0);
          iVar3 = Cvar_Get(uVar4,puVar9,uVar5,uVar6);
          *(int *)(in_ECX + 0x2c) = iVar3;
          pcVar2 = *(char **)(iVar3 + 4);
          uVar7 = 0xffffffff;
          pcVar10 = pcVar2;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7 - 1;
          cVar1 = FUN_2000a6c0(uVar7,1);
          if (cVar1 != '\0') {
            pcVar10 = *(char **)(in_ECX + 0x20);
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
              pcVar2 = pcVar2 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar10 = *pcVar2;
              pcVar2 = pcVar2 + 1;
              pcVar10 = pcVar10 + 1;
            }
            *(uint *)(in_ECX + 0x24) = uVar7;
            *(undefined1 *)(uVar7 + *(int *)(in_ECX + 0x20)) = 0;
          }
          *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x14) = 0;
        }
        else {
          pcVar10 = &DAT_20158334;
          pcVar2 = (char *)FUN_200eb440(0);
          iVar3 = __strcmpi(pcVar2,pcVar10);
          if (iVar3 == 0) {
            FUN_200eafe0(1);
            pcVar2 = (char *)FUN_200eb440(0);
            uVar7 = 0xffffffff;
            pcVar10 = pcVar2;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7 - 1;
            cVar1 = FUN_2000a6c0(uVar7,1);
            if (cVar1 != '\0') {
              pcVar10 = *(char **)(in_ECX + 0x34);
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
                pcVar2 = pcVar2 + 4;
                pcVar10 = pcVar10 + 4;
              }
              for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar10 = *pcVar2;
                pcVar2 = pcVar2 + 1;
                pcVar10 = pcVar10 + 1;
              }
              *(uint *)(in_ECX + 0x38) = uVar7;
              *(undefined1 *)(uVar7 + *(int *)(in_ECX + 0x34)) = 0;
            }
          }
          else {
            pcVar10 = s_backfill_20158328;
            pcVar2 = (char *)FUN_200eb440(0);
            iVar3 = __strcmpi(pcVar2,pcVar10);
            if (iVar3 == 0) {
              FUN_200eafe0(1);
              uVar4 = FUN_200eb440(0);
              if (*(int *)(in_ECX + 8) != 0) {
                uVar4 = FUN_200c9de0(uVar4);
                FUN_200c4950(uVar4);
              }
            }
          }
        }
      }
    }
    cVar1 = FUN_200eafe0(1);
  } while( true );
}

