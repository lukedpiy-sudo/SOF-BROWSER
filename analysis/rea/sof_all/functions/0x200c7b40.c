// rea decompile_all
// name: FUN_200c7b40
// address: 0x200c7b40
// body: available
// range: 0x200c7b40-0x200c7da8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200c7d0d to 0x200cbec0 FUN_200cbec0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200c7d45 to 0x200cbee0 FUN_200cbee0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200c7d6d to 0x200cbf70 FUN_200cbf70 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200c7d7a to 0x200cbfb0 FUN_200cbfb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200c7d87 to 0x200cbff0 FUN_200cbff0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200c7d94 to 0x200cc030 FUN_200cc030 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c7b40(int param_1)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((DAT_20406554 != (char *)0x0) && (*DAT_20406554 != '\0')) {
    piVar1 = *(int **)(DAT_20406554 + 0x30);
    if (piVar1 == (int *)0x0) {
      cVar3 = FUN_2004b3c0(0x12);
      if ((cVar3 == '\0') && (cVar3 = FUN_2004b3c0(0x17), cVar3 == '\0')) {
        switch(param_1) {
        case 2:
          FUN_200cbf00();
          FUN_200cbf40(param_1);
          return;
        case 9:
          FUN_200cbf10();
          FUN_200cbf40(param_1);
          return;
        case 0xd:
        case 0xe:
          FUN_200cbf40(1);
          FUN_200cbf40(param_1);
          return;
        case 0x18:
switchD_200c7bca_caseD_18:
          FUN_200cbee0();
          return;
        case 0x1b:
          if (DAT_20406554 != (char *)0x0) {
            iVar4 = FUN_200cbe30(0);
            if (iVar4 != 0) {
              uVar5 = FUN_20055450(s_menu__s_20158398,iVar4,1);
              FUN_200c79c0(uVar5);
              return;
            }
            iVar4 = FUN_200cbe70();
            if (iVar4 != 0) {
              uVar5 = FUN_20055450(s_exec_menus__s_20158388,iVar4,1);
              FUN_200c79c0(uVar5);
            }
            cVar3 = FUN_200cbd20();
            pcVar2 = DAT_20406554;
            if (cVar3 == '\0') {
              if (DAT_20406554 != (char *)0x0) {
                FUN_200cb840();
                FUN_200f9f75(pcVar2);
                DAT_20406554 = (char *)0x0;
              }
              FUN_200216c0(0);
              FUN_20057f40(4);
              FUN_20012810();
              Cvar_SetValue(s_menu_animated_20158360,0);
              return;
            }
          }
          break;
        case 0x26:
          cVar3 = FUN_2004b3c0(0x10);
          if ((cVar3 == '\0') && (cVar3 = FUN_2004b3c0(0x15), cVar3 == '\0')) {
            FUN_200cbf40(param_1);
            return;
          }
        case 0x19:
          FUN_200cbec0();
          return;
        case 0x28:
          cVar3 = FUN_2004b3c0(0x10);
          if ((cVar3 != '\0') || (cVar3 = FUN_2004b3c0(0x15), cVar3 != '\0'))
          goto switchD_200c7bca_caseD_18;
        default:
          FUN_200cbf40(param_1);
          return;
        }
      }
      else {
        switch(param_1) {
        case 0x11:
        case 0x16:
          FUN_200cbf40(1);
          break;
        case 0x25:
          FUN_200cbff0();
          return;
        case 0x26:
          FUN_200cbf70();
          return;
        case 0x27:
          FUN_200cc030();
          return;
        case 0x28:
          FUN_200cbfb0();
          return;
        }
      }
    }
    else {
      if (param_1 == 0x1b) {
        pcVar2 = DAT_20406554;
        pcVar2[0x30] = '\0';
        pcVar2[0x31] = '\0';
        pcVar2[0x32] = '\0';
        pcVar2[0x33] = '\0';
        return;
      }
      cVar3 = FUN_2004b460(param_1);
      if (cVar3 != '`') {
        (**(code **)(*piVar1 + 0x20))(param_1);
        return;
      }
    }
  }
  return;
}

