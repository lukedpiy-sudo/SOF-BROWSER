// rea decompile_all
// name: FUN_20020ae0
// address: 0x20020ae0
// body: available
// range: 0x20020ae0-0x20020c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20020ae0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_2024af70 != '\0') {
    if (DAT_2024af84 < DAT_2024af80) {
      *(undefined1 *)(DAT_2024af7c + DAT_2024af84) = 1;
      DAT_2024af84 = DAT_2024af84 + 1;
    }
    DAT_2024af94 = 1;
    if (DAT_2024af98 <= DAT_2024af90) {
      DAT_2024afbd = '\x01';
    }
    cVar1 = *param_1;
    iVar4 = DAT_2024af98;
    while (iVar2 = (int)cVar1, iVar2 != 0) {
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          iVar3 = FUN_200faaf0(&DAT_20130610,(int)param_1[iVar5]);
          iVar4 = DAT_2024af98;
          if (iVar3 != 0) break;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_2024af98);
      }
      if ((iVar5 != iVar4) && (iVar4 < DAT_2024af90 + iVar5)) {
        DAT_2024afbd = '\x01';
      }
      param_1 = param_1 + 1;
      if (DAT_2024afbc != '\0') {
        DAT_2024af90 = 0;
        DAT_2024af88 = DAT_2024af88 + -1;
        DAT_2024afbc = '\0';
      }
      if (DAT_2024afbd != '\0') {
        FUN_200209d0();
        iVar4 = DAT_2024af94;
        if (DAT_2024af94 != 10) {
          if (DAT_2024af94 == 0xd) {
            DAT_2024afbc = '\x01';
          }
          else {
            if (DAT_2024af84 < DAT_2024af80) {
              *(char *)(DAT_2024af7c + DAT_2024af84) = (char)DAT_2024af94;
              DAT_2024af84 = DAT_2024af84 + 1;
            }
            if ((0x1f < iVar4) || (iVar4 < 0)) {
              DAT_2024af90 = DAT_2024af90 + 1;
              iVar4 = DAT_2024af94;
            }
          }
        }
        DAT_2024af94 = iVar4;
        DAT_2024afbd = '\0';
        iVar4 = DAT_2024af98;
      }
      if (iVar2 == 10) {
LAB_20020c72:
        DAT_2024afbd = '\x01';
      }
      else {
        if (iVar2 == 0xd) {
          DAT_2024afbc = '\x01';
          goto LAB_20020c72;
        }
        if (DAT_2024af84 < DAT_2024af80) {
          *(char *)(DAT_2024af7c + DAT_2024af84) = cVar1;
          DAT_2024af84 = DAT_2024af84 + 1;
          iVar4 = DAT_2024af98;
        }
        if ((0x1f < iVar2) || (iVar2 < 0)) {
          DAT_2024af90 = DAT_2024af90 + 1;
          iVar2 = DAT_2024af94;
        }
        DAT_2024af94 = iVar2;
        if (iVar4 <= DAT_2024af90) goto LAB_20020c72;
      }
      cVar1 = *param_1;
    }
  }
  return;
}

