// rea decompile_all
// name: FUN_200c4220
// address: 0x200c4220
// body: available
// range: 0x200c4220-0x200c46a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200c4220(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  cVar1 = FUN_200eafe0();
  while (cVar1 == '\0') {
    pcVar8 = &DAT_201582a8;
    pcVar2 = (char *)FUN_200eb440();
    iVar3 = __strcmpi(pcVar2,pcVar8);
    if (iVar3 == 0) {
      FUN_200eafe0();
      pcVar2 = (char *)FUN_200eb440();
      uVar5 = 0xffffffff;
      pcVar8 = pcVar2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_2000a6c0();
      if (cVar1 != '\0') {
        pcVar8 = (char *)in_ECX[4];
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar8 = pcVar8 + 1;
        }
        in_ECX[5] = uVar5;
        *(undefined1 *)(uVar5 + in_ECX[4]) = 0;
      }
      FUN_2000a5b0(0);
      FUN_2000a3a0(in_ECX + 3,0,0xffffffff);
      FUN_200c87f0(*in_ECX,in_ECX + 7,in_ECX + 8);
      in_ECX[1] = 1;
    }
    else {
      pcVar8 = s_stretch_201582a0;
      pcVar2 = (char *)FUN_200eb440();
      iVar3 = __strcmpi(pcVar2,pcVar8);
      if (iVar3 == 0) {
        FUN_200eafe0();
        pcVar2 = (char *)FUN_200eb440();
        uVar5 = 0xffffffff;
        pcVar8 = pcVar2;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar1 = FUN_2000a6c0();
        if (cVar1 != '\0') {
          pcVar8 = (char *)in_ECX[4];
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
            pcVar2 = pcVar2 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar8 = *pcVar2;
            pcVar2 = pcVar2 + 1;
            pcVar8 = pcVar8 + 1;
          }
          in_ECX[5] = uVar5;
          *(undefined1 *)(uVar5 + in_ECX[4]) = 0;
        }
        FUN_2000a5b0(0);
        FUN_2000a3a0(in_ECX + 3,0,0xffffffff);
        FUN_200c87f0(*in_ECX,in_ECX + 7,in_ECX + 8);
        in_ECX[1] = 2;
      }
      else {
        pcVar8 = s_center_20158298;
        pcVar2 = (char *)FUN_200eb440();
        iVar3 = __strcmpi(pcVar2,pcVar8);
        if (iVar3 == 0) {
          FUN_200eafe0();
          pcVar2 = (char *)FUN_200eb440();
          uVar5 = 0xffffffff;
          pcVar8 = pcVar2;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5 - 1;
          cVar1 = FUN_2000a6c0();
          if (cVar1 != '\0') {
            pcVar8 = (char *)in_ECX[4];
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
              pcVar2 = pcVar2 + 4;
              pcVar8 = pcVar8 + 4;
            }
            for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar8 = *pcVar2;
              pcVar2 = pcVar2 + 1;
              pcVar8 = pcVar8 + 1;
            }
            in_ECX[5] = uVar5;
            *(undefined1 *)(uVar5 + in_ECX[4]) = 0;
          }
          FUN_2000a5b0(0);
          FUN_2000a3a0(in_ECX + 3,0,0xffffffff);
          FUN_200c87f0(*in_ECX,in_ECX + 7,in_ECX + 8);
          in_ECX[1] = 3;
        }
        else {
          pcVar8 = s_right_20158290;
          pcVar2 = (char *)FUN_200eb440();
          iVar3 = __strcmpi(pcVar2,pcVar8);
          if (iVar3 == 0) {
            FUN_200eafe0();
            pcVar2 = (char *)FUN_200eb440();
            uVar5 = 0xffffffff;
            pcVar8 = pcVar2;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5 - 1;
            cVar1 = FUN_2000a6c0();
            if (cVar1 != '\0') {
              pcVar8 = (char *)in_ECX[4];
              for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
                pcVar2 = pcVar2 + 4;
                pcVar8 = pcVar8 + 4;
              }
              for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar8 = *pcVar2;
                pcVar2 = pcVar2 + 1;
                pcVar8 = pcVar8 + 1;
              }
              in_ECX[5] = uVar5;
              *(undefined1 *)(uVar5 + in_ECX[4]) = 0;
            }
            FUN_2000a3a0(in_ECX + 3,0,0xffffffff);
            FUN_200c87f0(*in_ECX,in_ECX + 7,in_ECX + 8);
            in_ECX[1] = 5;
          }
          else {
            pcVar8 = &DAT_20158288;
            pcVar2 = (char *)FUN_200eb440();
            iVar3 = __strcmpi(pcVar2,pcVar8);
            if (iVar3 == 0) {
              FUN_200eafe0();
              pcVar2 = (char *)FUN_200eb440();
              uVar5 = 0xffffffff;
              pcVar8 = pcVar2;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              uVar5 = ~uVar5 - 1;
              cVar1 = FUN_2000a6c0();
              if (cVar1 != '\0') {
                pcVar8 = (char *)in_ECX[4];
                for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
                  pcVar2 = pcVar2 + 4;
                  pcVar8 = pcVar8 + 4;
                }
                for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar8 = *pcVar2;
                  pcVar2 = pcVar2 + 1;
                  pcVar8 = pcVar8 + 1;
                }
                in_ECX[5] = uVar5;
                *(undefined1 *)(uVar5 + in_ECX[4]) = 0;
              }
              FUN_2000a3a0(in_ECX + 3,0,0xffffffff);
              FUN_200c87f0(*in_ECX,in_ECX + 7,in_ECX + 8);
              in_ECX[1] = 4;
            }
            else {
              pcVar8 = s_bgcolor_20158280;
              pcVar2 = (char *)FUN_200eb440();
              iVar3 = __strcmpi(pcVar2,pcVar8);
              if (iVar3 == 0) {
                FUN_200eafe0();
                FUN_200eb440();
                puVar4 = (undefined4 *)FUN_200c9de0();
                in_ECX[2] = *puVar4;
              }
            }
          }
        }
      }
    }
    cVar1 = FUN_200eafe0();
  }
  if (((int)in_ECX[7] < 0) || ((int)in_ECX[8] < 0)) {
    uVar5 = 0xffffffff;
    pcVar2 = &DAT_2015ee44;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_2000a6c0();
    if (cVar1 != '\0') {
      puVar4 = (undefined4 *)&DAT_2015ee44;
      puVar7 = (undefined4 *)in_ECX[4];
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      in_ECX[5] = uVar5;
      *(undefined1 *)(uVar5 + in_ECX[4]) = 0;
    }
    Com_Printf();
  }
  return 1;
}

