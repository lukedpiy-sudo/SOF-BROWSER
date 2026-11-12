// rea decompile_all
// name: FUN_2001bf30
// address: 0x2001bf30
// body: available
// range: 0x2001bf30-0x2001bfae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001bf30(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[3] == DAT_20246d0c) {
    if (param_1[2] == param_2) {
      return;
    }
    Com_Error(1,s_FloodArea_r__reflooded_201205f4);
  }
  param_1[2] = param_2;
  iVar1 = 0;
  param_1[3] = DAT_20246d0c;
  piVar2 = (int *)(DAT_20246cec + param_1[1] * 8);
  if (0 < *param_1) {
    do {
      if ((&DAT_20243c58)[*piVar2] != 0) {
        FUN_2001bf30(piVar2[1] * 0x10 + DAT_20244cd0,param_2);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *param_1);
  }
  return;
}

