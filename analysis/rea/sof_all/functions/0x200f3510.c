// rea decompile_all
// name: FUN_200f3510
// address: 0x200f3510
// body: available
// range: 0x200f3510-0x200f35e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f3510(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_28 = 0x200f352c;
  _strncpy((char *)(param_1 + 2),param_2,0xff);
  iVar1 = Ordinal_10();
  if ((iVar1 == -1) && (iVar1 = Ordinal_52(), iVar1 == 0)) {
    return 0;
  }
  uStack_c = 0;
  uStack_8 = 0;
  Ordinal_9();
  uStack_28 = 1;
  uStack_2c = 2;
  uStack_30 = 0x200f358c;
  iVar1 = Ordinal_23();
  *param_1 = iVar1;
  if (iVar1 == -1) {
    return 0;
  }
  puStack_34 = &uStack_c;
  uStack_30 = 4;
  uStack_38 = 8;
  uStack_c = 1;
  Ordinal_21(iVar1,0xffff);
  iVar1 = Ordinal_4(*param_1,&uStack_38,0x10);
  if (iVar1 != -1) {
    param_1[1] = 1;
    return 1;
  }
  Ordinal_3(*param_1);
  return 0;
}

