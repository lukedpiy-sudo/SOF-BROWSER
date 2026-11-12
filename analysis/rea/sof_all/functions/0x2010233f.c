// rea decompile_all
// name: FUN_2010233f
// address: 0x2010233f
// body: available
// range: 0x2010233f-0x20102437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_2010233f(int *param_1)

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
    _DAT_2040855c = iVar1 + 0x46;
    iVar5 = iVar4;
    if (0x1e1337f < iVar4) {
      iVar5 = iVar4 + -0x1e13380;
      _DAT_2040855c = iVar1 + 0x47;
      if (0x1e1337f < iVar5) {
        iVar5 = iVar4 + -0x3c26700;
        _DAT_2040855c = iVar1 + 0x48;
        if (iVar5 < 0x1e28500) {
          bVar2 = true;
        }
        else {
          _DAT_2040855c = iVar1 + 0x49;
          iVar5 = iVar4 + -0x5a4ec00;
        }
      }
    }
    _DAT_20408564 = iVar5 / 0x15180;
    piVar6 = (int *)&DAT_2015dc90;
    if (!bVar2) {
      piVar6 = (int *)&DAT_2015dcc4;
    }
    _DAT_20408558 = 1;
    piVar7 = piVar6;
    while (piVar7 = piVar7 + 1, *piVar7 < _DAT_20408564) {
      _DAT_20408558 = _DAT_20408558 + 1;
    }
    _DAT_20408558 = _DAT_20408558 + -1;
    _DAT_20408554 = _DAT_20408564 - piVar6[_DAT_20408558];
    _DAT_20408560 = (*param_1 / 0x15180 + 4) % 7;
    _DAT_20408550 = (iVar5 % 0x15180) / 0xe10;
    _DAT_20408548 = (iVar5 % 0x15180) % 0xe10;
    _DAT_2040854c = _DAT_20408548 / 0x3c;
    _DAT_20408548 = _DAT_20408548 % 0x3c;
    _DAT_20408568 = 0;
    puVar3 = &DAT_20408548;
  }
  return puVar3;
}

