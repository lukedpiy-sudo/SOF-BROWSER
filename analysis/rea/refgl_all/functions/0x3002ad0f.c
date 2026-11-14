// rea decompile_all
// name: FUN_3002ad0f
// address: 0x3002ad0f
// body: available
// range: 0x3002ad0f-0x3002ae54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_3002ad0f(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  HANDLE hFile;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  char local_1004 [4060];
  undefined4 uStackY_28;
  
  FUN_30020910();
  iVar7 = 0;
  if ((param_1 < DAT_300abb00) &&
     ((*(byte *)((&DAT_300aba00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    DVar1 = FUN_300292e9(param_1,0,1);
    if ((DVar1 != 0xffffffff) && (DVar2 = FUN_300292e9(param_1,0,2), DVar2 != 0xffffffff)) {
      uVar8 = param_2 - DVar2;
      if ((int)uVar8 < 1) {
        if ((int)uVar8 < 0) {
          FUN_300292e9(param_1,param_2,0);
          hFile = (HANDLE)FUN_3002977b(param_1);
          BVar6 = SetEndOfFile(hFile);
          iVar7 = (BVar6 != 0) - 1;
          if (iVar7 == -1) {
            _DAT_300aa4e0 = 0xd;
            DAT_300aa4e4 = GetLastError();
          }
        }
      }
      else {
        _memset(local_1004,0,0x1000);
        uStackY_28 = 0x3002ad9f;
        iVar3 = FUN_3002b2e7(param_1,0x8000);
        do {
          uVar4 = 0x1000;
          if ((int)uVar8 < 0x1000) {
            uVar4 = uVar8;
          }
          iVar5 = FUN_30025c46(param_1,local_1004,uVar4);
          if (iVar5 == -1) {
            if (DAT_300aa4e4 == 5) {
              _DAT_300aa4e0 = 0xd;
            }
            iVar7 = -1;
            break;
          }
          uVar8 = uVar8 - iVar5;
        } while (0 < (int)uVar8);
        FUN_3002b2e7(param_1,iVar3);
      }
      FUN_300292e9(param_1,DVar1,0);
      return iVar7;
    }
  }
  else {
    _DAT_300aa4e0 = 9;
  }
  return -1;
}

