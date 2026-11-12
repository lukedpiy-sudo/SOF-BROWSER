// rea decompile_all
// name: FUN_2001e830
// address: 0x2001e830
// body: available
// range: 0x2001e830-0x2001e948 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001e830(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  
  uVar4 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = *(int *)(param_1 + 0xc);
  iVar5 = uVar4 - 1;
  if (iVar3 == 0) {
    uVar6 = *(uint *)(param_1 + 8);
    bVar9 = SBORROW4(uVar4,uVar6);
    iVar5 = uVar4 - uVar6;
    bVar8 = uVar4 == uVar6;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    if (*(char *)(*(int *)(param_1 + 4) + -1 + iVar3) == '\0') {
      if (iVar2 < iVar3 + iVar5) {
        if (*param_1 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_1 + 8) < iVar5) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,iVar5);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[1] = '\x01';
      }
      iVar3 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 0xc) = iVar3 + iVar5;
      pcVar7 = (char *)(*(int *)(param_1 + 4) + iVar3 + -1);
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *param_2;
        param_2 = param_2 + 1;
        pcVar7 = pcVar7 + 1;
      }
      return;
    }
    iVar3 = iVar3 + uVar4;
    bVar9 = SBORROW4(iVar3,iVar2);
    iVar5 = iVar3 - iVar2;
    bVar8 = iVar3 == iVar2;
  }
  if (!bVar8 && bVar9 == iVar5 < 0) {
    if (*param_1 == '\0') {
      Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
    }
    if (*(int *)(param_1 + 8) < (int)uVar4) {
      Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,uVar4);
    }
    Com_Printf(s_SZ_GetSpace__overflow_20121308);
    param_1[1] = '\x01';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  iVar3 = *(int *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = iVar3 + uVar4;
  pcVar7 = (char *)(*(int *)(param_1 + 4) + iVar3);
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *param_2;
    param_2 = param_2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}

