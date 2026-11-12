// rea decompile_all
// name: FUN_2008a9a0
// address: 0x2008a9a0
// body: available
// range: 0x2008a9a0-0x2008a9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008a9a0(void)

{
  int *in_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar1;
  int iVar2;
  
  (**(code **)(*in_ECX + 0x70))();
  iVar2 = in_ECX[0xf];
  uVar1 = extraout_var;
  if (iVar2 != in_ECX[0x10]) {
    do {
      FUN_20069f10(iVar2);
      iVar2 = iVar2 + 0x10;
      uVar1 = extraout_var_00;
    } while (iVar2 != in_ECX[0x10]);
  }
  iVar2 = in_ECX[0x4c];
  if (iVar2 != 0) {
    FUN_20079350();
    FUN_200f9f75(iVar2);
    uVar1 = extraout_var_01;
  }
  FUN_2006b0b0(in_ECX,CONCAT22(uVar1,(short)in_ECX[1]));
  return;
}

