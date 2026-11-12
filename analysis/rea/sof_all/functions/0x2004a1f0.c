// rea decompile_all
// name: FUN_2004a1f0
// address: 0x2004a1f0
// body: available
// range: 0x2004a1f0-0x2004a419 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2004a1f0(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_20364754 != 0) {
    GetCursorPos((LPPOINT)&DAT_203646cc);
    iVar5 = DAT_203646d0 - DAT_20364734;
    iVar4 = DAT_203646cc - DAT_20364730;
    iVar3 = iVar5;
    iVar1 = iVar4;
    if (*(float *)(DAT_20364668 + 0x18) != 0.0) {
      _DAT_20364650 = __ftol();
      iVar3 = __ftol();
      iVar1 = _DAT_20364650;
    }
    _DAT_20364650 = iVar1;
    _DAT_20364648 = iVar3;
    DAT_203646a8 = iVar5;
    DAT_203646ac = iVar4;
    iVar3 = __ftol();
    _DAT_20364650 = iVar3;
    _DAT_20364648 = __ftol();
    if (*(float *)(DAT_2036468c + 0x18) != 0.0) {
      _DAT_20364650 = -iVar3;
    }
    if (*(float *)(DAT_203646a4 + 0x18) != 0.0) {
      _DAT_20364648 = -_DAT_20364648;
    }
    if (((DAT_2015edb0 & 1) == 0) &&
       ((*(float *)(DAT_201e7570 + 0x18) == 0.0 || (DAT_20364764 == '\0')))) {
      DAT_201e8fb0 = DAT_201e8fb0 - (float)_DAT_20364650 * *(float *)(DAT_20225064 + 0x18);
    }
    else {
      uVar2 = __ftol();
      *(undefined2 *)(param_1 + 0xc) = uVar2;
    }
    if (((DAT_20364764 == '\0') && (*(float *)(DAT_201ca524 + 0x18) == 0.0)) ||
       ((DAT_2015edb0 & 1) != 0)) {
      uVar2 = __ftol();
      *(undefined2 *)(param_1 + 10) = uVar2;
    }
    else {
      DAT_201e8fac = (float)_DAT_20364648 * *(float *)(DAT_201c1ef8 + 0x18) + DAT_201e8fac;
    }
    SetCursorPos(DAT_20364730,DAT_20364734);
  }
  return;
}

