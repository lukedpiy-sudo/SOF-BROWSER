// rea decompile_all
// name: FUN_500f70d0
// address: 0x500f70d0
// body: available
// range: 0x500f70d0-0x500f718b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_500f70d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = FUN_500c3690();
  piVar4[0x67] = 0;
  piVar4[0x56] = 0;
  piVar4[0x57] = 0x2030003;
  piVar4[0x46] = 0x82;
  piVar4[0x47] = -0x3ec00000;
  piVar4[0x48] = -0x3ec00000;
  piVar4[0x49] = 0;
  piVar4[0x4a] = 0x41400000;
  piVar4[0x4b] = 0x41400000;
  piVar4[0x4c] = 0x41000000;
  piVar4[8] = 0;
  (*DAT_5015cb28)(piVar4);
  iVar3 = *(int *)(param_1 + 0x340);
  iVar2 = param_1;
  while ((iVar1 = iVar3, iVar1 != 0 && (iVar1 != param_1))) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0x340);
  }
  *(int **)(iVar2 + 0x340) = piVar4;
  piVar4[0xd0] = param_1;
  piVar4[0x68] = piVar4[0x68] | 0x100000;
  piVar4[0x58] = param_1;
  piVar4[0x6d] = (int)s_Nug_Buddy_50154680;
  return piVar4;
}

