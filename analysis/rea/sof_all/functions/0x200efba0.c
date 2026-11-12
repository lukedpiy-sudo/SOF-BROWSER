// rea decompile_all
// name: FUN_200efba0
// address: 0x200efba0
// body: available
// range: 0x200efba0-0x200efbfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200efba0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  char local_bc [188];
  
  iVar2 = -(int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(local_bc + iVar2)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  local_c8 = local_bc;
  local_c4 = param_3;
  local_c0 = param_4;
  FUN_200f9650(*(undefined4 *)(param_1 + 0x37c),&LAB_200efc00,&local_c8);
  return;
}

