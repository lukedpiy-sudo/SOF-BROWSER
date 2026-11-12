// rea decompile_all
// name: FUN_2010892e
// address: 0x2010892e
// body: available
// range: 0x2010892e-0x20108989 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2010892e(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *DAT_204083c4;
  piVar3 = DAT_204083c4;
  while( true ) {
    if (iVar2 == 0) {
      return -((int)piVar3 - (int)DAT_204083c4 >> 2);
    }
    iVar2 = FUN_20109f8a(param_1,iVar2,param_2);
    if ((iVar2 == 0) && ((sVar1 = *(short *)(*piVar3 + param_2 * 2), sVar1 == 0x3d || (sVar1 == 0)))
       ) break;
    iVar2 = piVar3[1];
    piVar3 = piVar3 + 1;
  }
  return (int)piVar3 - (int)DAT_204083c4 >> 2;
}

