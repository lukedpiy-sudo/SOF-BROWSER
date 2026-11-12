// rea decompile_all
// name: FUN_20066300
// address: 0x20066300
// body: available
// range: 0x20066300-0x20066440 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20066300(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 unaff_EDI;
  DWORD DStack_8;
  
  if (param_2 == 0) {
    DAT_20403510 = param_1;
    DAT_2040352c = DAT_204083b4;
    DAT_20403524 = DAT_204083b0;
    if ((1 < DAT_204083b0) &&
       (iVar1 = __strcmpi(*(char **)(DAT_204083b4 + 4),&DAT_2013aaa4), iVar1 == 0)) {
      FUN_200514b0(unaff_EDI);
    }
    FUN_2001f390(DAT_20403524,DAT_2040352c);
    iVar1 = FUN_20055930();
    do {
      if ((DAT_20403514 != '\0') ||
         ((DAT_20249618 != 0 && (*(float *)(DAT_20249618 + 0x18) != 0.0)))) {
        Sleep(1);
      }
      if (DAT_20403539 != '\0') {
        FUN_2001cac0();
      }
      iVar2 = PeekMessageA((LPMSG)&stack0xffffffe8,(HWND)0x0,0,0,0);
      while (iVar2 != 0) {
        BVar3 = GetMessageA((LPMSG)&stack0xffffffe8,(HWND)0x0,0,0);
        if (BVar3 == 0) {
          FUN_2001cac0();
        }
        DAT_204034fc = DStack_8;
        TranslateMessage((MSG *)&stack0xffffffe8);
        DispatchMessageA((MSG *)&stack0xffffffe8);
        iVar2 = PeekMessageA((LPMSG)&stack0xffffffe8,(HWND)0x0,0,0,0);
      }
      do {
        iVar2 = FUN_20055930();
      } while (iVar2 - iVar1 < 1);
      FUN_200fc546(0x20000,0x30000);
      FUN_2001f720(iVar2 - iVar1);
      iVar1 = iVar2;
    } while( true );
  }
  return 0;
}

