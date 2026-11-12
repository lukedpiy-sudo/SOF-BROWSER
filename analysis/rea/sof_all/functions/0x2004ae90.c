// rea decompile_all
// name: FUN_2004ae90
// address: 0x2004ae90
// body: available
// range: 0x2004ae90-0x2004aecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_2004ae90(void)

{
  MMRESULT MVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_203646e0;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_203646e0 = 0x34;
  DAT_203646e4 = DAT_20364750;
  MVar1 = joyGetPosEx(DAT_20364744,(LPJOYINFOEX)&DAT_203646e0);
  return MVar1 == 0;
}

