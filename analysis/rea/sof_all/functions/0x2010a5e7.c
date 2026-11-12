// rea decompile_all
// name: FUN_2010a5e7
// address: 0x2010a5e7
// body: available
// range: 0x2010a5e7-0x2010a67c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2010a5e7(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_3 != 0) {
    if (DAT_20408470 == 0) {
      do {
        uVar2 = *param_1;
        if ((0x5a < uVar2) || (uVar1 = uVar2 + 0x20, uVar2 < 0x41)) {
          uVar1 = uVar2;
        }
        uVar2 = *param_2;
        if ((uVar2 < 0x5b) && (0x40 < uVar2)) {
          uVar2 = uVar2 + 0x20;
        }
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
      } while (((param_3 != 0) && (uVar1 != 0)) && (uVar1 == uVar2));
    }
    else {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        uVar1 = FUN_2010a8ae(uVar2);
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar2 = FUN_2010a8ae(uVar2);
        param_3 = param_3 + -1;
        if ((param_3 == 0) || (uVar1 == 0)) break;
      } while (uVar1 == uVar2);
    }
    iVar3 = (uint)uVar1 - (uint)uVar2;
  }
  return iVar3;
}

