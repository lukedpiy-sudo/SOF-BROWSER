// rea decompile_all
// name: FUN_20018d60
// address: 0x20018d60
// body: available
// range: 0x20018d60-0x20018f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_20018d60(char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_810;
  size_t local_80c;
  char *local_808;
  int local_804;
  char local_800 [1024];
  char local_400 [1024];
  
  uVar6 = 0xffffffff;
  bVar2 = false;
  bVar3 = false;
  pcVar5 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar7 = ~uVar6 - 1;
  if (0x3ff < iVar7) {
    Com_Printf(s_Line_exceeded__i_chars__discarde_20120234,0x400);
    return (char *)0x0;
  }
  local_804 = 0;
  local_80c = 0;
  if (0 < iVar7) {
    local_810 = 0x400;
    do {
      cVar1 = param_1[local_80c];
      if (cVar1 == '\"') {
        bVar2 = (bool)(bVar2 ^ 1);
        bVar3 = bVar2;
      }
      if ((!bVar2) && ((cVar1 == '$' || (cVar1 == '#')))) {
        local_808 = param_1 + local_80c + 1;
        uVar4 = FUN_20055470(&local_808);
        bVar2 = bVar3;
        if (local_808 != (char *)0x0) {
          pcVar5 = (char *)FUN_20021760(uVar4);
          if (cVar1 == '#') {
            Com_sprintf(local_800,0x400,&DAT_2012022c,pcVar5);
          }
          else {
            iVar7 = -(int)pcVar5;
            do {
              cVar1 = *pcVar5;
              pcVar5[(int)(local_800 + iVar7)] = cVar1;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
          }
          uVar6 = 0xffffffff;
          iVar7 = 0;
          pcVar5 = local_800;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          iVar8 = ~uVar6 - 1;
          if (iVar8 == 0) {
            do {
              cVar1 = (&DAT_20120228)[iVar7];
              local_800[iVar7] = cVar1;
              iVar7 = iVar7 + 1;
            } while (cVar1 != '\0');
            iVar8 = 2;
          }
          _strncpy(local_400,param_1,local_80c);
          pcVar5 = local_800;
          do {
            cVar1 = *pcVar5;
            pcVar5[local_810] = cVar1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          pcVar5 = local_808;
          do {
            cVar1 = *pcVar5;
            (local_400 + (iVar8 - (int)local_808) + local_80c)[(int)pcVar5] = cVar1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          iVar7 = 0;
          do {
            cVar1 = local_400[iVar7];
            (&DAT_20243850)[iVar7] = cVar1;
            iVar7 = iVar7 + 1;
          } while (cVar1 != '\0');
          param_1 = &DAT_20243850;
          uVar6 = 0xffffffff;
          pcVar5 = &DAT_20243850;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          iVar7 = ~uVar6 - 1;
          if (0x3ff < iVar7) {
            Com_Printf(s_Expanded_line_exceeded__i_chars__201201d0,0x400);
            return (char *)0x0;
          }
          local_80c = local_80c - 1;
          local_810 = local_810 + -1;
          local_804 = local_804 + 1;
          if (local_804 == 100) {
            Com_Printf(s_Macro_expansion_loop__discarded__201201ac);
            return (char *)0x0;
          }
        }
      }
      local_80c = local_80c + 1;
      local_810 = local_810 + 1;
    } while ((int)local_80c < iVar7);
    if (bVar2) {
      Com_Printf(s_Line_has_unmatched_quote__discar_20120200);
      return (char *)0x0;
    }
  }
  return param_1;
}

