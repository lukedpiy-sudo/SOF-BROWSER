// rea decompile_all
// name: FUN_2004a420
// address: 0x2004a420
// body: available
// range: 0x2004a420-0x2004a580 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2004a420(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_20364754 != 0) {
    GetCursorPos((LPPOINT)&DAT_203646cc);
    iVar5 = DAT_203646d0 - DAT_20364734;
    iVar4 = DAT_203646cc - DAT_20364730;
    iVar3 = iVar5;
    iVar2 = iVar4;
    if (*(float *)(DAT_20364668 + 0x18) != 0.0) {
      _DAT_20364650 = __ftol();
      iVar3 = __ftol();
      iVar2 = _DAT_20364650;
    }
    _DAT_20364650 = iVar2;
    _DAT_20364648 = iVar3;
    DAT_203646a8 = iVar5;
    DAT_203646ac = iVar4;
    *(float *)(param_1 + 0x18) = (float)_DAT_20364650 + *(float *)(param_1 + 0x18);
    *(float *)(param_2 + 0x18) = (float)_DAT_20364648 + *(float *)(param_2 + 0x18);
    fVar1 = *(float *)(param_1 + 0x18);
    if ((float)(DAT_2040365c + 8) < *(float *)(param_1 + 0x18)) {
      fVar1 = (float)(DAT_2040365c + 8);
    }
    if (fVar1 < -8.0) {
      fVar1 = -8.0;
    }
    *(float *)(param_1 + 0x18) = fVar1;
    fVar1 = *(float *)(param_2 + 0x18);
    if ((float)(DAT_20403660 + 8) < *(float *)(param_2 + 0x18)) {
      fVar1 = (float)(DAT_20403660 + 8);
    }
    if (fVar1 < -8.0) {
      fVar1 = -8.0;
    }
    *(float *)(param_2 + 0x18) = fVar1;
    SetCursorPos(DAT_20364730,DAT_20364734);
  }
  return;
}

