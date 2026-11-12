// rea decompile_all
// name: FUN_200fc409
// address: 0x200fc409
// body: available
// range: 0x200fc409-0x200fc4d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_200fc409(uint param_1,void *param_2,size_t param_3)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  CHAR local_10c [260];
  LPSTR local_8;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    DVar2 = GetCurrentDirectoryA(0x104,local_10c);
  }
  else {
    iVar1 = FUN_200fc4da(param_1);
    if (iVar1 == 0) {
      _DAT_20408394 = 0xd;
      DAT_20408398 = 0xf;
      return 0;
    }
    param_1 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)uVar3 + '@'));
    DVar2 = GetFullPathNameA((LPCSTR)&param_1,0x104,local_10c,&local_8);
  }
  if ((DVar2 != 0) && (uVar3 = DVar2 + 1, uVar3 < 0x105)) {
    if (param_2 == (void *)0x0) {
      if ((int)uVar3 <= (int)param_3) {
        uVar3 = param_3;
      }
      pvVar4 = _malloc(uVar3);
      if (pvVar4 != (void *)0x0) {
LAB_200fc4c6:
        uVar5 = FUN_20101cf0(pvVar4,local_10c);
        return uVar5;
      }
      _DAT_20408394 = 0xc;
    }
    else {
      pvVar4 = param_2;
      if ((int)uVar3 <= (int)param_3) goto LAB_200fc4c6;
      _DAT_20408394 = 0x22;
    }
  }
  return 0;
}

