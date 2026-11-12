// rea decompile_all
// name: FUN_2006b4e0
// address: 0x2006b4e0
// body: available
// range: 0x2006b4e0-0x2006b5a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006b4e0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int local_1c;
  int local_18 [2];
  int local_10 [2];
  undefined1 local_8 [8];
  
  iVar1 = *(int *)(in_ECX + 0xc0);
  local_1c = FUN_20075c80(&param_1);
  if ((local_1c == *(int *)(in_ECX + 0xc0)) || (param_1 < *(int *)(local_1c + 0xc))) {
    local_18[0] = *(int *)(in_ECX + 0xc0);
    piVar2 = local_18;
  }
  else {
    piVar2 = &local_1c;
  }
  if (*piVar2 != iVar1) {
    local_10[0] = param_1;
    local_10[1] = 0;
    FUN_200746d0(local_8,local_10);
    local_1c = param_2;
    FUN_20074650(local_18,&local_1c);
    FUN_20071790(local_18,&local_1c);
    FUN_20070d70(&param_2);
    FUN_200722e0(local_8,&param_1);
  }
  return;
}

