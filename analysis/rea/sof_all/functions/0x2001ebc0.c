// rea decompile_all
// name: Z_Free
// address: 0x2001ebc0
// body: available
// range: 0x2001ebc0-0x2001ec14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Z_Free(int param_1)

{
  int *piVar1;
  
                    /* 0x1ebc0  20  Z_Free */
  piVar1 = (int *)(param_1 + -0x10);
  if (*(short *)(param_1 + -8) != 0x1d1d) {
    Com_Error(0,s_Z_Free__bad_magic_20121418);
  }
  *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(param_1 + -0xc);
  **(int **)(param_1 + -0xc) = *piVar1;
  DAT_20249634 = DAT_20249634 + -1;
  DAT_20249e70 = DAT_20249e70 - *(int *)(param_1 + -4);
  FUN_200f9d32(piVar1);
  return;
}

