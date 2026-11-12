// rea decompile_all
// name: FUN_200194f0
// address: 0x200194f0
// body: available
// range: 0x200194f0-0x2001966d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20019599 to 0x2000b040 FUN_2000b040 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200195ba to 0x2001c6e0 Com_Printf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200194f0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  FUN_20018fc0(param_1,1);
  puVar5 = DAT_20241840;
  do {
    DAT_20241840 = puVar5;
    if (DAT_2023f2d8 == 0) {
      return;
    }
    while( true ) {
      puVar7 = DAT_20243c54;
      if (puVar5 == (undefined4 *)0x0) goto joined_r0x2001956e;
      iVar4 = __strcmpi(DAT_2023f2e0,(char *)puVar5[1]);
      if (iVar4 == 0) break;
      puVar5 = (undefined4 *)*puVar5;
    }
    if (puVar5[2] != 0) {
      (*(code *)puVar5[2])();
      return;
    }
    param_1 = FUN_20055450(s_cmd__s_201202e4,param_1);
    FUN_20018fc0(param_1,1);
    puVar5 = DAT_20241840;
  } while( true );
joined_r0x2001956e:
  while( true ) {
    if (puVar7 == (undefined4 *)0x0) {
      iVar4 = FUN_200224b0();
      if (iVar4 != 0) {
        return;
      }
      FUN_2000b040();
      return;
    }
    iVar4 = __strcmpi(DAT_2023f2e0,(char *)(puVar7 + 1));
    uVar3 = DAT_2023f830;
    if (iVar4 == 0) break;
    puVar7 = (undefined4 *)*puVar7;
  }
  DAT_20243848 = DAT_20243848 + 1;
  if (DAT_20243848 == 0x10) {
    Com_Printf();
    return;
  }
  pcVar2 = (char *)puVar7[9];
  if (DAT_2023f830 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)Z_Malloc(DAT_2023f830);
    puVar7 = DAT_2023f828;
    puVar8 = puVar5;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_2001e730(&DAT_2023f824);
  }
  uVar6 = 0xffffffff;
  pcVar9 = pcVar2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if ((int)((~uVar6 - 1) + DAT_2023f830) < DAT_2023f82c) {
    uVar6 = 0xffffffff;
    pcVar9 = pcVar2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_2001e7b0(&DAT_2023f824,pcVar2,~uVar6 - 1);
  }
  else {
    Com_Printf(s_Cbuf_AddText__overflow_201200b8);
  }
  if (uVar3 == 0) {
    return;
  }
  FUN_2001e7b0(&DAT_2023f824,puVar5,uVar3);
  Z_Free(puVar5);
  return;
}

