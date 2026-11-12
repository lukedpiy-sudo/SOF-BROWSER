// rea decompile_all
// name: FUN_200fc278
// address: 0x200fc278
// body: available
// range: 0x200fc278-0x200fc335 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200fc278(void)

{
  DWORD nLength;
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  short *psVar5;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_2015b1f0 == -1) {
    if (DAT_2015d724 == (HANDLE)0xfffffffe) {
      FUN_20102438();
    }
    if (DAT_2015d724 != (HANDLE)0xffffffff) {
      psVar5 = (short *)&stack0xffffffec;
      BVar1 = GetNumberOfConsoleInputEvents(DAT_2015d724,&local_c);
      nLength = local_c;
      if ((BVar1 != 0) && (local_c != 0)) {
        FUN_200fa720();
        if (&stack0x00000000 != (undefined1 *)0x14) {
          BVar1 = PeekConsoleInputA(DAT_2015d724,(PINPUT_RECORD)&stack0xffffffec,nLength,&local_8);
          if ((((BVar1 != 0) && (local_8 != 0)) && (local_8 <= local_c)) && (local_8 != 0)) {
            piVar4 = (int *)&stack0xfffffff0;
            do {
              if ((*psVar5 == 1) && (*piVar4 != 0)) {
                if (*(char *)((int)piVar4 + 10) != '\0') goto LAB_200fc331;
                iVar2 = FUN_200fc336(piVar4);
                if (iVar2 != 0) goto LAB_200fc331;
              }
              local_8 = local_8 - 1;
              psVar5 = psVar5 + 10;
              piVar4 = piVar4 + 5;
            } while (local_8 != 0);
          }
        }
      }
    }
    uVar3 = 0;
  }
  else {
LAB_200fc331:
    uVar3 = 1;
  }
  return uVar3;
}

