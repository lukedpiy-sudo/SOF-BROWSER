// rea decompile_all
// name: FUN_20076090
// address: 0x20076090
// body: available
// range: 0x20076090-0x2007610e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20076090(short *param_1)

{
  short *psVar1;
  short sVar2;
  int local_4;
  
  psVar1 = param_1;
  if (*param_1 == 0) {
    param_1 = (short *)((uint)param_1._1_3_ << 8);
    FUN_200bdca0(&param_1,1);
    return;
  }
  param_1 = (short *)CONCAT31(param_1._1_3_,1);
  FUN_200bdca0(&param_1,1);
  local_4 = 0;
  sVar2 = 0x10;
  do {
    if (*psVar1 < sVar2) break;
    sVar2 = sVar2 << 4;
    local_4 = local_4 + 1;
  } while (sVar2 != 0);
  FUN_200bdca0(&local_4,2);
  FUN_200bdca0(psVar1,local_4 * 4 + 4);
  return;
}

