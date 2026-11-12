// rea decompile_all
// name: FUN_200670c0
// address: 0x200670c0
// body: available
// range: 0x200670c0-0x20067316 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200670c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  DWORD dwStyle;
  int Y;
  int X;
  int nHeight;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  BOOL bRepaint;
  undefined1 local_78 [4];
  tagRECT tStack_74;
  undefined1 local_64 [100];
  
  if (*(int *)(DAT_2040355c + 0x14) != 0) {
    if (*(float *)(DAT_2040355c + 0x18) == 0.0) {
      if (DAT_20403558 != '\0') {
        if (DAT_20403538 == '\0') {
          UnregisterHotKey((HWND)0x0,0);
          UnregisterHotKey((HWND)0x0,1);
        }
        else {
          SystemParametersInfoA(0x61,0,local_78,0);
        }
        DAT_20403558 = '\0';
      }
    }
    else if (DAT_20403558 == '\0') {
      if (DAT_20403538 == '\0') {
        RegisterHotKey((HWND)0x0,0,1,9);
        RegisterHotKey((HWND)0x0,1,1,0xd);
        DAT_20403558 = '\x01';
      }
      else {
        SystemParametersInfoA(0x61,1,local_78,0);
        DAT_20403558 = '\x01';
      }
    }
    *(undefined4 *)(DAT_2040355c + 0x14) = 0;
  }
  if (*(int *)(DAT_20403550 + 0x14) != 0) {
    DAT_201e7596 = 1;
    if (DAT_20390d4c != (code *)0x0) {
      (*DAT_20390d4c)();
    }
    FUN_20030a80();
  }
  piVar3 = (int *)(DAT_20403550 + 0x14);
  iVar1 = *(int *)(DAT_20403550 + 0x14);
  do {
    if (iVar1 == 0) {
      if ((*(int *)(DAT_2040364c + 0x14) != 0) || (*(int *)(DAT_20403650 + 0x14) != 0)) {
        if (*(float *)(DAT_20403658 + 0x18) == 0.0) {
          tStack_74.left = 0;
          tStack_74.top = 0;
          tStack_74.right = DAT_2040365c;
          tStack_74.bottom = DAT_20403660;
          dwStyle = GetWindowLongA(DAT_20403564,-0x10);
          AdjustWindowRect(&tStack_74,dwStyle,0);
          iVar1 = tStack_74.right - tStack_74.left;
          nHeight = tStack_74.bottom - tStack_74.top;
          bRepaint = 1;
          Y = __ftol();
          X = __ftol();
          MoveWindow(DAT_20403564,X,Y,iVar1,nHeight,bRepaint);
        }
        *(undefined4 *)(DAT_2040364c + 0x14) = 0;
        *(undefined4 *)(DAT_20403650 + 0x14) = 0;
      }
      return;
    }
    *piVar3 = 0;
    *(undefined4 *)(DAT_20403658 + 0x14) = 1;
    DAT_201e7594 = 0;
    DAT_201c1f24 = 1;
    Com_sprintf(local_64,100,s_ref__s_dll_2013ad34,*(undefined4 *)(DAT_20403550 + 4));
    iVar1 = FUN_20066e10(local_64);
    if (iVar1 == 0) {
      bVar6 = true;
      iVar1 = 3;
      pcVar4 = *(char **)(DAT_20403550 + 4);
      pcVar5 = &DAT_2013ad30;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        uVar2 = FUN_20058110(0x413);
        Com_Error(0,uVar2);
      }
      Cvar_Set(s_vid_ref_2013ad28,&DAT_2013ad30);
      if (DAT_201c1f04 != 1) {
        FUN_20020370();
      }
    }
    if (DAT_201c1f00 < 8) {
      DAT_201c1f24 = 0;
    }
    piVar3 = (int *)(DAT_20403550 + 0x14);
    iVar1 = *piVar3;
  } while( true );
}

