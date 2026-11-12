// rea decompile_all
// name: FUN_20065cf0
// address: 0x20065cf0
// body: available
// range: 0x20065cf0-0x20065e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_20065cf0(void)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  LPSTR lpCommandLine;
  HANDLE hMem;
  SIZE_T SVar4;
  void *pvVar5;
  _STARTUPINFOA *p_Var6;
  char *pcVar7;
  _PROCESS_INFORMATION local_70;
  tagMSG local_60;
  _STARTUPINFOA local_44;
  
  iVar2 = PeekMessageA(&local_60,(HWND)0x0,0,0,0);
  while( true ) {
    if (iVar2 == 0) {
      DAT_20403528 = (void *)timeGetTime();
      return DAT_20403528;
    }
    BVar3 = GetMessageA(&local_60,(HWND)0x0,0,0);
    if (BVar3 == 0) break;
    DAT_204034fc = local_60.time;
    TranslateMessage(&local_60);
    DispatchMessageA(&local_60);
    iVar2 = PeekMessageA(&local_60,(HWND)0x0,0,0,0);
  }
  timeEndPeriod(1);
  FUN_2000dde0();
  FUN_2001fb10();
  if ((DAT_20249618 != 0) && (*(float *)(DAT_20249618 + 0x18) != 0.0)) {
    SetConsoleCtrlHandler((PHANDLER_ROUTINE)0x200656b0,0);
    FUN_200fa9ae(DAT_2040350c);
    FUN_200fa9ae(DAT_20403500);
    FUN_200fa9ae(DAT_20403518);
    FreeConsole();
  }
  if (DAT_2040353c != 0) {
    p_Var6 = &local_44;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      p_Var6->cb = 0;
      p_Var6 = (_STARTUPINFOA *)&p_Var6->lpReserved;
    }
    local_70.hProcess = (HANDLE)0x0;
    local_44.cb = 0x44;
    local_70.hThread = (HANDLE)0x0;
    local_70.dwProcessId = 0;
    local_70.dwThreadId = 0;
    if (DAT_20403538 == '\0') {
      pcVar7 = s_cmd_exe__c_start__s_2013a8d4;
    }
    else {
      pcVar7 = s_start_exe__s_2013a8e8;
    }
    lpCommandLine = (LPSTR)FUN_20055450(pcVar7,DAT_2040353c);
    CreateProcessA((LPCSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                   ,0x20,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_70);
    FUN_200f9f75(DAT_2040353c);
  }
  FUN_200fb67c(0);
  pvVar5 = (void *)0x0;
  BVar3 = OpenClipboard((HWND)0x0);
  if (BVar3 != 0) {
    hMem = GetClipboardData(1);
    if ((hMem != (HANDLE)0x0) && (pcVar7 = GlobalLock(hMem), pcVar7 != (char *)0x0)) {
      SVar4 = GlobalSize(hMem);
      pvVar5 = _malloc(SVar4 + 1);
      iVar2 = (int)pvVar5 - (int)pcVar7;
      do {
        cVar1 = *pcVar7;
        pcVar7[iVar2] = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      GlobalUnlock(hMem);
    }
    CloseClipboard();
  }
  return pvVar5;
}

