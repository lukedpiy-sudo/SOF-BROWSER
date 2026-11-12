// rea decompile_all
// name: FUN_20066e10
// address: 0x20066e10
// body: available
// range: 0x20066e10-0x200670b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20066e10(LPCSTR param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  int *piVar3;
  int iVar4;
  code **ppcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 auStack_2a0 [23];
  undefined4 uStack_244;
  FARPROC pFStack_240;
  code *apcStack_224 [4];
  code *pcStack_214;
  code *pcStack_210;
  code *pcStack_20c;
  code *pcStack_208;
  undefined1 *puStack_204;
  code *pcStack_200;
  code *pcStack_1fc;
  code *pcStack_1f8;
  code *pcStack_1f4;
  code *pcStack_1f0;
  code *pcStack_1ec;
  code *pcStack_1e8;
  code *pcStack_1e4;
  code *pcStack_1e0;
  code *pcStack_1dc;
  code *pcStack_1d8;
  undefined1 *puStack_1d4;
  undefined1 *puStack_1d0;
  code *pcStack_1cc;
  undefined1 *puStack_1c8;
  code *pcStack_1c4;
  code *pcStack_1c0;
  undefined4 *puStack_1bc;
  int aiStack_1b8 [55];
  undefined1 auStack_dc [220];
  
  if (DAT_20403664 != '\0') {
    (*DAT_20403578)();
    BVar1 = FreeLibrary(DAT_20403560);
    if (BVar1 == 0) {
      pFStack_240 = (FARPROC)0x20066e44;
      Com_Error();
    }
    DAT_20403560 = (HMODULE)0x0;
    puVar7 = &DAT_20403570;
    for (iVar4 = 0x37; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    DAT_20403664 = '\0';
  }
  pFStack_240 = (FARPROC)0x20066e71;
  Com_Printf();
  DAT_20403560 = LoadLibraryA(param_1);
  if (DAT_20403560 == (HMODULE)0x0) {
    pFStack_240 = (FARPROC)0x20066e8f;
    Com_Printf();
    return 0;
  }
  apcStack_224[3] = Cmd_AddCommand;
  pcStack_214 = Cmd_RemoveCommand;
  pcStack_210 = Cmd_Argc;
  pcStack_20c = Cmd_Argv;
  pcStack_208 = FUN_20018380;
  puStack_204 = &LAB_20066470;
  pcStack_200 = FUN_2001f090;
  pcStack_1fc = Z_Free;
  apcStack_224[0] = (code *)&LAB_20066530;
  pcStack_1f8 = FS_LoadFile;
  pcStack_1f4 = FS_FreeFile;
  pcStack_1f0 = FUN_20025750;
  pcStack_1ec = FUN_20025760;
  pcStack_1e8 = FUN_20024d90;
  pcStack_1e4 = Cvar_Get;
  pcStack_1e0 = Cvar_Set;
  pcStack_1dc = Cvar_SetValue;
  pcStack_1d8 = FUN_200216c0;
  puStack_1d4 = &LAB_20066d80;
  puStack_1d0 = &LAB_20066df0;
  pcStack_1cc = FUN_20018050;
  puStack_1c8 = &LAB_2001b510;
  pcStack_1c0 = irand;
  pcStack_1c4 = flrand;
  puStack_1bc = &DAT_20120648;
  pFStack_240 = (FARPROC)0x20066f76;
  pFVar2 = GetProcAddress(DAT_20403560,s_GetRefAPI_2013ace0);
  if (pFVar2 == (FARPROC)0x0) {
    uStack_244 = 0x20066f88;
    pFStack_240 = pFVar2;
    Com_Error();
  }
  ppcVar5 = apcStack_224;
  puVar7 = auStack_2a0;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  piVar3 = (int *)(*pFVar2)(auStack_dc);
  piVar6 = aiStack_1b8;
  for (iVar4 = 0x37; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  }
  piVar3 = aiStack_1b8;
  piVar6 = &DAT_20403570;
  for (iVar4 = 0x37; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  }
  if (aiStack_1b8[0] != 3) {
    BVar1 = FreeLibrary(DAT_20403560);
    if (BVar1 == 0) {
      pFStack_240 = (FARPROC)0x20066fed;
      Com_Error();
    }
    pFStack_240 = (FARPROC)0x0;
    puVar7 = &DAT_20403570;
    for (iVar4 = 0x37; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    DAT_20403560 = (HMODULE)0x0;
    DAT_20403664 = '\0';
    uStack_244 = 0x20067014;
    Com_Error();
  }
  FUN_2008ea50();
  pFStack_240 = (FARPROC)DAT_20403510;
  uStack_244 = 0x2006702e;
  iVar4 = (*DAT_20403574)();
  if (iVar4 == -1) {
    (*DAT_20403578)();
    BVar1 = FreeLibrary(DAT_20403560);
    if (BVar1 == 0) {
      pFStack_240 = (FARPROC)0x20067058;
      Com_Error();
    }
    DAT_20403560 = (HMODULE)0x0;
    puVar7 = &DAT_20403570;
    for (iVar4 = 0x37; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    DAT_20403664 = '\0';
    return 0;
  }
  if (DAT_20390d84 != (code *)0x0) {
    (*DAT_20390d84)();
  }
  Com_Printf();
  DAT_20403664 = '\x01';
  return 1;
}

