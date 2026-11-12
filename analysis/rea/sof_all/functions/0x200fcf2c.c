// rea decompile_all
// name: entry
// address: 0x200fcf2c
// body: available
// range: 0x200fcf2c-0x200fd016 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_201134b8;
  puStack_10 = &LAB_20101b04;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_204083ac = DVar1 >> 8 & 0xff;
  _DAT_204083a8 = DVar1 & 0xff;
  _DAT_204083a4 = _DAT_204083a8 * 0x100 + _DAT_204083ac;
  _DAT_204083a0 = DVar1 >> 0x10;
  iVar2 = FUN_200fe40f(0);
  if (iVar2 == 0) {
    FUN_200fd047(0x1c);
  }
  local_8 = 0;
  FUN_20100797();
  DAT_20408b88 = GetCommandLineA();
  DAT_20408408 = FUN_20104dd6();
  FUN_20104b89();
  FUN_20104ad0();
  FUN_200fb64f();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_20104a78();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_20066300(pHVar5,uVar6,uVar3,uVar4);
  FUN_200fb67c(uVar3);
  FUN_20102484(*(undefined4 *)*local_18,local_18);
  return;
}

