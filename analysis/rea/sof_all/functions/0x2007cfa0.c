// rea decompile_all
// name: FUN_2007cfa0
// address: 0x2007cfa0
// body: available
// range: 0x2007cfa0-0x2007d08e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007cfa0(float *param_1,float param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  float *pfVar2;
  float local_14 [2];
  int local_c;
  undefined4 local_8;
  int local_4;
  
  local_14[1] = (float)param_3;
  local_8 = param_3;
  iVar1 = *(int *)(in_ECX + 0x134);
  local_14[0] = 1.0;
  local_c = 0;
  local_4 = 0;
  if (iVar1 != 0) {
    if (*(int *)(in_ECX + 0xb0) == 0) {
      FUN_200fc6f3((double)((float)iVar1 * param_2));
      local_c = __ftol();
      if (local_c < *(int *)(in_ECX + 0x134)) {
        local_4 = local_c + 1;
        local_14[0] = (float)local_4 - (float)iVar1 * param_2;
        if (*(int *)(in_ECX + 0x134) <= local_4) {
          local_4 = 0;
        }
      }
    }
    else {
      param_2 = (float)(iVar1 + -1) * param_2;
      FUN_200fc6f3((double)param_2);
      local_c = __ftol();
      local_4 = *(int *)(in_ECX + 0x134) + -1;
      if (local_c < local_4) {
        local_4 = local_c + 1;
        local_14[0] = (float)(local_c + 1) - param_2;
      }
      else {
        local_c = local_4;
      }
    }
  }
  pfVar2 = local_14;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

