// rea decompile_all
// name: FUN_200f9790
// address: 0x200f9790
// body: available
// range: 0x200f9790-0x200f9940 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f9790(LPCSTR param_1,DWORD param_2,LPCVOID param_3)

{
  char cVar1;
  LANGID LVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char **ppcVar7;
  char *pcVar8;
  undefined **ppuVar9;
  char *pcVar10;
  char *pcVar11;
  char *local_c4;
  CHAR local_c0 [12];
  uint local_b4;
  CHAR local_b0 [80];
  char *local_60 [11];
  char *local_34;
  
  BVar3 = GetFileVersionInfoA(param_1,0,param_2,param_3);
  if (BVar3 != 0) {
    LVar2 = GetUserDefaultLangID();
    wsprintfA(local_c0,&DAT_2015abc4,(uint)LVar2);
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_2015abbc;
    do {
      pcVar11 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar11 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar8 = local_c0;
    do {
      pcVar10 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pcVar8 = pcVar11 + -uVar4;
    pcVar11 = pcVar10 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    ppcVar7 = local_60 + 1;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    ppuVar9 = &PTR_s_ProductName_2015aa80;
    do {
      lstrcpyA(local_b0,s__StringFileInfo__2015aba8);
      lstrcatA(local_b0,local_c0);
      lstrcatA(local_b0,(LPCSTR)&DAT_20130c64);
      lstrcatA(local_b0,*ppuVar9);
      ppcVar7[-1] = *ppuVar9;
      if (param_2 == 0) {
LAB_200f9883:
        *ppcVar7 = &DAT_2040836c;
      }
      else {
        BVar3 = VerQueryValueA(param_3,local_b0,&local_c4,&local_b4);
        if (BVar3 == 0) goto LAB_200f9883;
        *ppcVar7 = local_c4;
      }
      ppuVar9 = ppuVar9 + 1;
      ppcVar7 = ppcVar7 + 2;
    } while (ppuVar9 < s_Comments_2015aab0);
    iVar5 = __strcmpi(local_34,s_Aureal_Semiconductor_2015ab90);
    if (iVar5 == 0) {
      return 1;
    }
    iVar5 = __strcmpi(local_34,s_Aureal_Semiconductor_Inc__2015ab74);
    if (iVar5 == 0) {
      return 1;
    }
    iVar5 = __strcmpi(local_60[1],s_SM_Emulation_2015ab64);
    if (iVar5 == 0) {
      return 1;
    }
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *local_60[1];
      local_60[1] = local_60[1] + 1;
    } while (cVar1 != '\0');
    if (iVar5 == -2) {
      iVar5 = -1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *local_34;
        local_34 = local_34 + 1;
      } while (cVar1 != '\0');
      if (iVar5 == -2) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

