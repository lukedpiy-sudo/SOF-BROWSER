// rea decompile_all
// name: FUN_200f9190
// address: 0x200f9190
// body: available
// range: 0x200f9190-0x200f91fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f9190(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return 4;
  }
  FUN_200f4450(param_1[1]);
  iVar1 = FUN_200f4400(4,0x40,&LAB_200f76d0);
  param_1[1] = iVar1;
  FUN_200f9510(param_1[0x25]);
  iVar1 = FUN_200f94a0(4,500,4,&LAB_200f7cd0,&LAB_200f7d50,&LAB_200f7d80);
  param_1[0x25] = iVar1;
  param_1[0x26] = 0;
  return 0;
}

