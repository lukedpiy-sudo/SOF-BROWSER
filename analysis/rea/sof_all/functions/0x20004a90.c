// rea decompile_all
// name: FUN_20004a90
// address: 0x20004a90
// body: available
// range: 0x20004a90-0x20004b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_20004a90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = *(uint *)(param_1 + 0x10) & 1;
  *(uint *)(param_1 + 0x10) = uVar4;
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = DAT_20403528;
  if (uVar4 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = DAT_20403528;
    iVar1 = iVar1 + (iVar3 - iVar2);
  }
  param_1 = iVar1;
  fVar5 = (float10)param_1 / (float10)DAT_2015ecc0;
  if (fVar5 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar5) {
    fVar5 = (float10)1.0;
  }
  return fVar5;
}

