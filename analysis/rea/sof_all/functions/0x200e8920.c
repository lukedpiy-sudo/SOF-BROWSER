// rea decompile_all
// name: FUN_200e8920
// address: 0x200e8920
// body: available
// range: 0x200e8920-0x200e8ba6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e8920(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *in_ECX;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2011024b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_200eafe0(1);
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_c;
      return 1;
    }
    pcVar12 = s_noborder_201588b0;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar12);
    if (iVar4 == 0) {
      if (in_ECX[0x14] != 0) {
        FUN_200f9f75(in_ECX[0x14]);
        in_ECX[0x14] = 0;
      }
    }
    else {
      pcVar12 = s_border_20158348;
      pcVar3 = (char *)FUN_200eb440(0);
      iVar4 = __strcmpi(pcVar3,pcVar12);
      if (iVar4 == 0) {
        FUN_200eafe0(3);
        pvVar5 = operator_new(0x20);
        local_4 = 0;
        if (pvVar5 == (void *)0x0) {
          local_4 = 0xffffffff;
          in_ECX[0x14] = 0;
        }
        else {
          uVar6 = FUN_200eb440(2);
          uVar13 = 0x3f800000;
          uVar6 = FUN_200c9de0(uVar6);
          uVar7 = FUN_200eb440(1);
          uVar8 = FUN_200eb440(0);
          uVar6 = FUN_200c46d0(uVar8,uVar7,uVar6,uVar13);
          local_4 = 0xffffffff;
          in_ECX[0x14] = uVar6;
        }
      }
      else {
        pcVar12 = s_tiptint_20159304;
        pcVar3 = (char *)FUN_200eb440(0);
        iVar4 = __strcmpi(pcVar3,pcVar12);
        if (iVar4 == 0) {
          FUN_200eafe0(1);
          uVar6 = FUN_200eb440(0);
          iVar4 = *(int *)*in_ECX;
          puVar9 = (undefined4 *)FUN_200c9de0(uVar6);
          *(undefined4 *)(iVar4 + 0x60) = *puVar9;
        }
        else {
          pcVar12 = s_tipbtint_201592f8;
          pcVar3 = (char *)FUN_200eb440(0);
          iVar4 = __strcmpi(pcVar3,pcVar12);
          if (iVar4 == 0) {
            FUN_200eafe0(1);
            uVar6 = FUN_200eb440(0);
            iVar4 = *(int *)*in_ECX;
            puVar9 = (undefined4 *)FUN_200c9de0(uVar6);
            *(undefined4 *)(iVar4 + 100) = *puVar9;
          }
          else {
            pcVar12 = s_tipfont_201592f0;
            pcVar3 = (char *)FUN_200eb440(0);
            iVar4 = __strcmpi(pcVar3,pcVar12);
            if (iVar4 != 0) {
              FUN_200eb490(param_1,s_Unrecognised_default_parameter_201592d0);
              ExceptionList = local_c;
              return 0;
            }
            FUN_200eafe0(1);
            pcVar3 = (char *)FUN_200eb440(0);
            iVar4 = *(int *)*in_ECX;
            uVar10 = 0xffffffff;
            pcVar12 = pcVar3;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            uVar10 = ~uVar10 - 1;
            if (0xfffffffd < uVar10) {
              FUN_201075d0();
            }
            iVar1 = *(int *)(iVar4 + 0x6c);
            *(undefined4 *)(iVar4 + 0x70) = 0;
            if ((iVar1 == 0) || (*(char *)(iVar1 + -1) == '\0')) {
              if (uVar10 != 0) {
                if ((0x1f < *(uint *)(iVar4 + 0x74)) || (*(uint *)(iVar4 + 0x74) < uVar10)) {
                  FUN_2000a5b0(1);
                  goto LAB_200e8b3c;
                }
                goto LAB_200e8b44;
              }
              FUN_2000a5b0(1);
            }
            else if (uVar10 == 0) {
              *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
              *(undefined4 *)(iVar4 + 0x6c) = 0;
              *(undefined4 *)(iVar4 + 0x70) = 0;
              *(undefined4 *)(iVar4 + 0x74) = 0;
            }
            else {
LAB_200e8b3c:
              FUN_2000a840(uVar10);
LAB_200e8b44:
              pcVar12 = *(char **)(iVar4 + 0x6c);
              for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
                pcVar3 = pcVar3 + 4;
                pcVar12 = pcVar12 + 4;
              }
              for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar12 = *pcVar3;
                pcVar3 = pcVar3 + 1;
                pcVar12 = pcVar12 + 1;
              }
              *(uint *)(iVar4 + 0x70) = uVar10;
              *(undefined1 *)(uVar10 + *(int *)(iVar4 + 0x6c)) = 0;
            }
          }
        }
      }
    }
    cVar2 = FUN_200eafe0(1);
  } while( true );
}

