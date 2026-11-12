// rea decompile_all
// name: FUN_20107170
// address: 0x20107170
// body: available
// range: 0x20107170-0x201072b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_20107170(uint param_1,int param_2)

{
  int iVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  undefined1 local_1004 [4060];
  undefined4 uStackY_28;
  uint uStackY_24;
  uint uStackY_20;
  
  FUN_200fa720();
  iVar3 = 0;
  if ((param_1 < DAT_20408b60) &&
     ((*(byte *)((&DAT_20408a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    iVar1 = FUN_20100942();
    if ((iVar1 != -1) && (iVar1 = FUN_20100942(), iVar1 != -1)) {
      param_2 = param_2 - iVar1;
      if (param_2 < 1) {
        if (param_2 < 0) {
          uStackY_20 = 0x2010725f;
          FUN_20100942();
          uStackY_20 = param_1;
          uStackY_24 = 0x20107265;
          hFile = (HANDLE)FUN_20105ea2();
          BVar2 = SetEndOfFile(hFile);
          iVar3 = (BVar2 != 0) - 1;
          if (iVar3 == -1) {
            _DAT_20408394 = 0xd;
            DAT_20408398 = GetLastError();
          }
        }
      }
      else {
        uStackY_20 = 0x201071f5;
        _memset(local_1004,0,0x1000);
        uStackY_20 = 0x8000;
        uStackY_24 = param_1;
        uStackY_28 = 0x20107200;
        FUN_20107552();
        do {
          uStackY_20 = 0x2010721f;
          iVar1 = FUN_201005ea();
          if (iVar1 == -1) {
            if (DAT_20408398 == 5) {
              _DAT_20408394 = 0xd;
            }
            iVar3 = -1;
            break;
          }
          param_2 = param_2 - iVar1;
        } while (0 < param_2);
        FUN_20107552();
      }
      uStackY_20 = 0x2010729d;
      FUN_20100942();
      return iVar3;
    }
  }
  else {
    _DAT_20408394 = 9;
  }
  return -1;
}

