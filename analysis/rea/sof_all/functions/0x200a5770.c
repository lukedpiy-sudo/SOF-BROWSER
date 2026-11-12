// rea decompile_all
// name: FUN_200a5770
// address: 0x200a5770
// body: available
// range: 0x200a5770-0x200a57cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200a5770(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int local_4;
  
  param_1 = FUN_200a91b0(param_1);
  if (param_1 != *(int *)(in_ECX + 0xfc)) {
    iVar1 = FUN_20023c40(param_1 + 0xc);
    if (-1 < iVar1) {
      piVar2 = &param_1;
      goto LAB_200a57b3;
    }
  }
  local_4 = *(int *)(in_ECX + 0xfc);
  piVar2 = &local_4;
LAB_200a57b3:
  if (*piVar2 == *(int *)(in_ECX + 0xfc)) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*piVar2 + 0x1c);
}

