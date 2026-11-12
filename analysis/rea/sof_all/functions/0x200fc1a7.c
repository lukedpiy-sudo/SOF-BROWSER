// rea decompile_all
// name: FUN_200fc1a7
// address: 0x200fc1a7
// body: available
// range: 0x200fc1a7-0x200fc277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200fc1a7(void)

{
  uint uVar1;
  BOOL BVar2;
  byte *pbVar3;
  _INPUT_RECORD local_20;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_2015b1f0 != 0xffffffff) {
    uVar1 = DAT_2015b1f0 & 0xff;
    DAT_2015b1f0 = 0xffffffff;
    return uVar1;
  }
  if (DAT_2015d724 == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  if (DAT_2015d724 == (HANDLE)0xfffffffe) {
    FUN_20102438();
  }
  GetConsoleMode(DAT_2015d724,&local_c);
  SetConsoleMode(DAT_2015d724,0);
  do {
    do {
      BVar2 = ReadConsoleInputA(DAT_2015d724,&local_20,1,&local_8);
      if ((BVar2 == 0) || (local_8 == 0)) {
        uVar1 = 0xffffffff;
        goto LAB_200fc266;
      }
    } while ((local_20.EventType != 1) || (local_20.Event.KeyEvent.bKeyDown == 0));
    uVar1 = (uint)(byte)local_20.Event.MouseEvent.dwControlKeyState._2_1_;
    if (uVar1 != 0) goto LAB_200fc266;
    pbVar3 = (byte *)FUN_200fc336(&local_20.Event);
  } while (pbVar3 == (byte *)0x0);
  uVar1 = (uint)*pbVar3;
  DAT_2015b1f0 = (uint)pbVar3[1];
LAB_200fc266:
  SetConsoleMode(DAT_2015d724,local_c);
  return uVar1;
}

