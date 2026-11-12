// rea decompile_all
// name: FUN_5010ec11
// address: 0x5010ec11
// body: available
// range: 0x5010ec11-0x5010ed09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_5010ec11(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  bVar2 = false;
  iVar1 = *param_1;
  if (iVar1 < 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    iVar4 = iVar1 % 0x7861f80;
    iVar1 = (iVar1 / 0x7861f80) * 4;
    _DAT_5018c474 = iVar1 + 0x46;
    iVar5 = iVar4;
    if (0x1e1337f < iVar4) {
      iVar5 = iVar4 + -0x1e13380;
      _DAT_5018c474 = iVar1 + 0x47;
      if (0x1e1337f < iVar5) {
        iVar5 = iVar4 + -0x3c26700;
        _DAT_5018c474 = iVar1 + 0x48;
        if (iVar5 < 0x1e28500) {
          bVar2 = true;
        }
        else {
          _DAT_5018c474 = iVar1 + 0x49;
          iVar5 = iVar4 + -0x5a4ec00;
        }
      }
    }
    _DAT_5018c47c = iVar5 / 0x15180;
    piVar6 = (int *)&DAT_50158b60;
    if (!bVar2) {
      piVar6 = (int *)&DAT_50158b94;
    }
    _DAT_5018c470 = 1;
    piVar7 = piVar6;
    while (piVar7 = piVar7 + 1, *piVar7 < _DAT_5018c47c) {
      _DAT_5018c470 = _DAT_5018c470 + 1;
    }
    _DAT_5018c470 = _DAT_5018c470 + -1;
    _DAT_5018c46c = _DAT_5018c47c - piVar6[_DAT_5018c470];
    _DAT_5018c478 = (*param_1 / 0x15180 + 4) % 7;
    _DAT_5018c468 = (iVar5 % 0x15180) / 0xe10;
    _DAT_5018c460 = (iVar5 % 0x15180) % 0xe10;
    _DAT_5018c464 = _DAT_5018c460 / 0x3c;
    _DAT_5018c460 = _DAT_5018c460 % 0x3c;
    _DAT_5018c480 = 0;
    puVar3 = &DAT_5018c460;
  }
  return puVar3;
}

