// rea decompile_all
// name: FUN_200fe2c7
// address: 0x200fe2c7
// body: available
// range: 0x200fe2c7-0x200fe40e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200fe2c7(void)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  char *pcVar5;
  byte unaff_BL;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_200fa720();
  local_9c = 0x94;
  BVar2 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar2 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = '!';
    aCStackY_18[1] = -0x1d;
    aCStackY_18[2] = '\x0f';
    aCStackY_18[3] = ' ';
    DVar3 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    if (DVar3 != 0) {
      pcVar5 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar5;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar5 = cVar1 + -0x20;
        }
        pcVar5 = pcVar5 + 1;
        local_1230[0] = *pcVar5;
      }
      aCStackY_18[0] = '_';
      aCStackY_18[1] = -0x1d;
      aCStackY_18[2] = '\x0f';
      aCStackY_18[3] = ' ';
      iVar4 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar4 == 0) {
        pcVar5 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x7f;
        aCStackY_18[1] = -0x1d;
        aCStackY_18[2] = '\x0f';
        aCStackY_18[3] = ' ';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar5 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar5;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar5 = cVar1 + -0x20;
          }
          pcVar5 = pcVar5 + 1;
          local_1a0[0] = *pcVar5;
        }
        pcVar5 = (char *)FUN_200fa6a0();
      }
      if ((pcVar5 != (char *)0x0) && (iVar4 = FUN_200faaf0(), iVar4 != 0)) {
        pcVar5 = (char *)(iVar4 + 1);
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          if (*pcVar5 == ';') {
            *pcVar5 = '\0';
          }
          else {
            pcVar5 = pcVar5 + 1;
          }
          cVar1 = *pcVar5;
        }
        aCStackY_18[0] = -0x19;
        aCStackY_18[1] = -0x1d;
        aCStackY_18[2] = '\x0f';
        aCStackY_18[3] = ' ';
        iVar4 = FUN_200fcbfc();
        if (iVar4 == 2) {
          return 2;
        }
        if (iVar4 == 3) {
          return 3;
        }
        if (iVar4 == 1) {
          return 1;
        }
      }
    }
    FUN_200fe29a();
    iVar4 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar4 = 1;
  }
  return iVar4;
}

