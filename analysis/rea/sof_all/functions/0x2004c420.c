// rea decompile_all
// name: FUN_2004c420
// address: 0x2004c420
// body: available
// range: 0x2004c420-0x2004c6f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2004c4ff to 0x20020370 FUN_20020370 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004c420(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined1 local_400 [1024];
  
  if (((param_1 & 0x1000000) == 0) && ((&DAT_2013535c)[param_1 * 0x10] != 0)) {
    param_1 = (uint)(byte)(&DAT_2013535c)[param_1 * 0x10];
  }
  param_1 = param_1 & 0xff;
  if (param_2 == 0) {
    (&DAT_20365a98)[param_1] = 0;
  }
  else {
    iVar1 = (&DAT_20365a98)[param_1];
    (&DAT_20365a98)[param_1] = iVar1 + 1;
    if ((((param_1 != 8) && (param_1 != 0x13)) && (param_1 != 0x21)) &&
       (((param_1 != 0x69 && (param_1 != 0x22)) &&
        ((param_1 != 99 && ((1 < iVar1 + 1 && (DAT_201c1f04 != 3)))))))) {
      return;
    }
  }
  iVar4 = FUN_20057c80();
  iVar1 = DAT_201c1f04;
  if ((DAT_203647b0 == 0) && (DAT_203647c4 == 0)) {
    cVar3 = (&DAT_20135354)[iVar4 + param_1 * 0x10];
  }
  else {
    cVar3 = (&DAT_20135358)[iVar4 + param_1 * 0x10];
  }
  iVar4 = param_1 * 0x10;
  if ((cVar3 == '`') && (DAT_201c1f04 != 3)) {
    if (param_2 == 0) {
      return;
    }
    FUN_20020370();
    return;
  }
  if (((DAT_201e947c != '\0') && (DAT_201c1f04 != 3)) || (param_1 == 0x1b)) {
    if (param_2 == 0) {
      return;
    }
    switch(DAT_201c1f04) {
    case 0:
    case 1:
      FUN_20018180(s_menu_main_20136860);
      return;
    case 2:
      FUN_2004bcd0(0x1b);
      return;
    case 3:
      FUN_200c7b40(0x1b);
      return;
    }
    goto switchD_2004c527_default;
  }
  (&DAT_20364770)[param_1] = param_2;
  if (param_2 == 0) {
    DAT_20364e90 = DAT_20364e90 + -1;
    if (DAT_20364e90 < 0) {
      DAT_20364e90 = 0;
    }
    pcVar2 = (char *)(&DAT_20365298)[param_1];
    if ((pcVar2 != (char *)0x0) && (*pcVar2 == '+')) {
      Com_sprintf(local_400,0x400,s___s__i__i_20136854,pcVar2 + 1,param_1,param_3);
      FUN_20018180(local_400);
    }
    (&DAT_20364e98)[param_1] = param_3;
    return;
  }
  if ((&DAT_20365a98)[param_1] == 1) {
    DAT_20364e90 = DAT_20364e90 + 1;
  }
  if (iVar1 == 3) {
    if ((&DAT_2013535d)[iVar4] != '\0') goto LAB_2004c62d;
  }
  else {
    if (iVar1 == 1) {
      cVar3 = (&DAT_2013535e)[iVar4];
    }
    else {
      if (iVar1 != 0) goto switchD_2004c611_switchD;
      if (DAT_201c1f00 == 8) goto LAB_2004c62d;
      cVar3 = (&DAT_2013535e)[iVar4];
    }
    if (cVar3 == '\0') {
LAB_2004c62d:
      pcVar2 = (char *)(&DAT_20365298)[param_1];
      if (pcVar2 != (char *)0x0) {
        if (*pcVar2 == '+') {
          Com_sprintf(local_400,0x400,s__s__i__i_20136848,pcVar2,param_1,param_3);
          FUN_20018180(local_400);
          (&DAT_20365698)[param_1] = param_3;
          return;
        }
        FUN_20018180(pcVar2);
        FUN_20018180(&DAT_2011dd40);
        FUN_20011ef0(pcVar2);
      }
      (&DAT_20365698)[param_1] = param_3;
      return;
    }
  }
switchD_2004c611_switchD:
  switch(iVar1) {
  case 0:
  case 1:
    FUN_2004bae0(param_1);
    return;
  case 2:
    FUN_2004bcd0(param_1);
    return;
  case 3:
    FUN_200c7b40(param_1);
    return;
  }
switchD_2004c527_default:
  Com_Error(0,s_Bad_cls_key_dest_20136834);
  return;
}

