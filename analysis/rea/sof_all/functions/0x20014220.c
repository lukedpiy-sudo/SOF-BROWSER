// rea decompile_all
// name: FUN_20014220
// address: 0x20014220
// body: available
// range: 0x20014220-0x200144d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20014220(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;
  
  if ((*(float *)(DAT_20230324 + 0x18) != 0.0) || (*(float *)(DAT_202259e8 + 0x18) != 0.0)) {
    if (0 < DAT_20225a38) {
      DAT_20225a38 = 0;
    }
    if (DAT_20225a40 < 0) {
      DAT_20225a40 = 0;
    }
    if (0 < DAT_20225a3c) {
      DAT_20225a3c = 0;
    }
    if (DAT_20225a44 < 0) {
      DAT_20225a44 = 0;
    }
    iVar1 = DAT_20403660 + -1;
    iVar2 = DAT_2040365c + -1;
    if (iVar2 < DAT_20225a38) {
      DAT_20225a38 = iVar2;
    }
    if (DAT_20225a40 < iVar2) {
      DAT_20225a40 = iVar2;
    }
    if (iVar1 < DAT_20225a3c) {
      DAT_20225a3c = iVar1;
    }
    if (DAT_20225a44 < iVar1) {
      DAT_20225a44 = iVar1;
    }
  }
  iVar2 = DAT_20225a44;
  iVar1 = DAT_20225a38;
  if ((DAT_20225e98 != 1.0) && (*(int *)(DAT_20225e94 + 0x18) != 0x42c80000)) {
    local_8 = DAT_20225a40;
    piVar3 = &DAT_2022598c;
    iVar7 = DAT_20225a38;
    iVar8 = DAT_20225a44;
    iVar9 = DAT_20225a3c;
    do {
      if (piVar3[-2] < iVar7) {
        iVar7 = piVar3[-2];
      }
      if (local_8 < *piVar3) {
        local_8 = *piVar3;
      }
      if (piVar3[-1] < iVar9) {
        iVar9 = piVar3[-1];
      }
      if (iVar8 < piVar3[1]) {
        iVar8 = piVar3[1];
      }
      piVar3 = piVar3 + 4;
    } while ((int)piVar3 < 0x202259ac);
    DAT_20225994 = DAT_20225984;
    DAT_20225998 = DAT_20225988;
    DAT_2022599c = DAT_2022598c;
    DAT_202259a0 = DAT_20225990;
    DAT_20225988 = DAT_20225a3c;
    DAT_2022598c = DAT_20225a40;
    DAT_20225a38 = 9999;
    DAT_20225a40 = -9999;
    DAT_20225a3c = 9999;
    DAT_20225a44 = -9999;
    DAT_20225984 = iVar1;
    DAT_20225990 = iVar2;
    iVar4 = __ftol();
    iVar2 = DAT_20225ed4;
    iVar1 = DAT_20225ed0;
    if (iVar9 <= iVar4) {
      iVar9 = iVar4;
    }
    if (iVar9 < iVar8) {
      iVar4 = DAT_20225edc + -1 + DAT_20225ed4;
      iVar6 = DAT_20225ed8 + -1 + DAT_20225ed0;
      if (iVar9 < DAT_20225ed4) {
        iVar5 = DAT_20225ed4 + -1;
        if (iVar8 < DAT_20225ed4 + -1) {
          iVar5 = iVar8;
        }
        (*DAT_204035e0)(iVar7,iVar9,(local_8 - iVar7) + 1,(iVar5 - iVar9) + 1,
                        s_pics_console_backtile_2011f6d0);
        iVar9 = iVar2;
      }
      if (iVar4 < iVar8) {
        iVar2 = iVar4 + 1;
        if (iVar4 + 1 < iVar9) {
          iVar2 = iVar9;
        }
        (*DAT_204035e0)(iVar7,iVar2,(local_8 - iVar7) + 1,(iVar8 - iVar2) + 1,
                        s_pics_console_backtile_2011f6d0);
        iVar8 = iVar4;
      }
      if (iVar7 < iVar1) {
        iVar2 = iVar1 + -1;
        if (local_8 < iVar1 + -1) {
          iVar2 = local_8;
        }
        (*DAT_204035e0)(iVar7,iVar9,(iVar2 - iVar7) + 1,(iVar8 - iVar9) + 1,
                        s_pics_console_backtile_2011f6d0);
        iVar7 = iVar1;
      }
      if (iVar6 < local_8) {
        iVar6 = iVar6 + 1;
        if (iVar7 <= iVar6) {
          iVar7 = iVar6;
        }
        (*DAT_204035e0)(iVar7,iVar9,(local_8 - iVar7) + 1,(iVar8 - iVar9) + 1,
                        s_pics_console_backtile_2011f6d0);
      }
    }
  }
  return;
}

