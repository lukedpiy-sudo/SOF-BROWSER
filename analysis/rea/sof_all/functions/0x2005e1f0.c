// rea decompile_all
// name: FUN_2005e1f0
// address: 0x2005e1f0
// body: available
// range: 0x2005e1f0-0x2005e31d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_2005e1f0(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int local_404;
  char local_400 [1024];
  
  pcVar3 = (char *)FUN_20022c60(4);
  pcVar9 = &DAT_203fac70;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *pcVar9 = cVar1;
    cVar2 = DAT_201398be;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  iVar6 = -1;
  pcVar3 = &DAT_203fac70;
  do {
    pcVar9 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  iVar6 = 0;
  local_404 = 0;
  *(undefined2 *)(pcVar9 + -1) = DAT_201398bc;
  pcVar9[1] = cVar2;
  uVar7 = 0xffffffff;
  pcVar3 = &DAT_203fac70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar8 = ~uVar7 - 1;
  iVar4 = __ftol();
  iVar10 = DAT_20396eec;
  if (0 < iVar4) {
    do {
      if ((*(int *)(iVar6 + iVar10) == 2) || (iVar4 = iVar8, *(int *)(iVar6 + iVar10) == 3)) {
        Com_sprintf(local_400,0x400,s__i__i___s__201398b0,
                    (int)*(short *)(*(int *)(*(int *)(iVar6 + 0x298 + iVar10) + 0x74) + 0xb8),
                    *(undefined4 *)(iVar6 + 0x264 + iVar10),iVar6 + 0x29c + iVar10);
        uVar7 = 0xffffffff;
        pcVar3 = local_400;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        iVar4 = (~uVar7 - 1) + iVar8;
        if (DAT_20136a0c <= iVar4) break;
        pcVar3 = local_400;
        do {
          cVar1 = *pcVar3;
          pcVar3[(int)(&DAT_203fac70 + (iVar8 - (int)local_400))] = cVar1;
          pcVar3 = pcVar3 + 1;
          iVar10 = DAT_20396eec;
        } while (cVar1 != '\0');
      }
      local_404 = local_404 + 1;
      iVar6 = iVar6 + 0xd2ac;
      iVar5 = __ftol();
      iVar8 = iVar4;
    } while (local_404 < iVar5);
  }
  return &DAT_203fac70;
}

