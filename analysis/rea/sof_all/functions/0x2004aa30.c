// rea decompile_all
// name: FUN_2004aa30
// address: 0x2004aa30
// body: available
// range: 0x2004aa30-0x2004ab72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004aa30(void)

{
  int iVar1;
  UINT UVar2;
  UINT UVar3;
  MMRESULT MVar4;
  undefined4 *puVar5;
  tagJOYCAPSA *ptVar6;
  tagJOYCAPSA local_194;
  
  iVar1 = Cvar_Get(s_in_initjoy_2013532c,&DAT_2011d31c,8,0);
  if ((*(float *)(iVar1 + 0x18) != 0.0) && (UVar2 = joyGetNumDevs(), UVar2 != 0)) {
    DAT_20364744 = 0;
    UVar3 = UVar2;
    if (0 < (int)UVar2) {
      do {
        UVar3 = DAT_20364744;
        puVar5 = &DAT_203646e0;
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        DAT_203646e0 = 0x34;
        DAT_203646e4 = 0x400;
        UVar3 = joyGetPosEx(UVar3,(LPJOYINFOEX)&DAT_203646e0);
        if (UVar3 == 0) goto LAB_2004aaea;
        DAT_20364744 = DAT_20364744 + 1;
      } while ((int)DAT_20364744 < (int)UVar2);
    }
    if (UVar3 != 0) {
      Com_Printf(s_joystick_not_found____no_valid_j_201352f8,UVar3);
      return;
    }
LAB_2004aaea:
    ptVar6 = &local_194;
    for (iVar1 = 0x65; iVar1 != 0; iVar1 = iVar1 + -1) {
      ptVar6->wMid = 0;
      ptVar6->wPid = 0;
      ptVar6 = (tagJOYCAPSA *)ptVar6->szPname;
    }
    MVar4 = joyGetDevCapsA(DAT_20364744,&local_194,0x194);
    if (MVar4 != 0) {
      Com_Printf(s_joystick_not_found____invalid_jo_201352bc,MVar4);
      return;
    }
    DAT_20364760 = local_194.wCaps & 0x10;
    DAT_20364640 = local_194.wNumButtons;
    DAT_20364658 = 0;
    DAT_203646b0 = 0;
    Cvar_SetValue(s_joy_avail_20135214,0x3f800000);
    DAT_203646d8 = 0;
    Com_Printf(s_joystick_detected_201352a4);
  }
  return;
}

