// rea decompile_all
// name: FUN_20040e60
// address: 0x20040e60
// body: available
// range: 0x20040e60-0x20040ead inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20040e60(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x34), iVar1 != -1)) && (iVar1 != 0xff)) &&
     (((*(byte *)(param_1 + 0x3c) & 0x84) == 0 && (iVar1 < 0x2b)))) {
    FUN_200409f0(param_1);
    if ((code *)(&PTR_LAB_201348c4)[*(int *)(param_1 + 0x34) * 4] != (code *)0x0) {
      (*(code *)(&PTR_LAB_201348c4)[*(int *)(param_1 + 0x34) * 4])(param_1,param_2,param_3);
    }
  }
  return;
}

