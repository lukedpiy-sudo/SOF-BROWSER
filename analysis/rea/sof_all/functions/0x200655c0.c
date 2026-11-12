// rea decompile_all
// name: FUN_200655c0
// address: 0x200655c0
// body: available
// range: 0x200655c0-0x200656d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200655c0(void)

{
  LPSTR lpCommandLine;
  int iVar1;
  _STARTUPINFOA *p_Var2;
  char *pcVar3;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
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
    p_Var2 = &local_44;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      p_Var2->cb = 0;
      p_Var2 = (_STARTUPINFOA *)&p_Var2->lpReserved;
    }
    local_54.hProcess = (HANDLE)0x0;
    local_54.hThread = (HANDLE)0x0;
    local_44.cb = 0x44;
    local_54.dwProcessId = 0;
    local_54.dwThreadId = 0;
    if (DAT_20403538 == '\0') {
      pcVar3 = s_cmd_exe__c_start__s_2013a8d4;
    }
    else {
      pcVar3 = s_start_exe__s_2013a8e8;
    }
    lpCommandLine = (LPSTR)FUN_20055450(pcVar3,DAT_2040353c);
    CreateProcessA((LPCSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                   ,0x20,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
    FUN_200f9f75(DAT_2040353c);
  }
  FUN_200fb67c(0);
  switch(local_54.hProcess) {
  case (HANDLE)0x0:
  case (HANDLE)0x1:
  case (HANDLE)0x2:
  case (HANDLE)0x5:
  case (HANDLE)0x6:
    DAT_20403539 = 1;
  }
  return 1;
}

