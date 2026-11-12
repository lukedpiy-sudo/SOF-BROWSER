// rea decompile_all
// name: FUN_200cc070
// address: 0x200cc070
// body: available
// range: 0x200cc070-0x200cc0d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cc070(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_20055930();
  *(float *)(in_ECX + 0x28) = (float)iVar1 * 0.001;
  FUN_2004a420(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
  FUN_2004ae90();
  FUN_2004ad40();
  (*DAT_20403624)(0);
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x78))();
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_200cab30(1);
  }
  FUN_2004c730();
                    /* WARNING: Could not recover jumptable at 0x200cc0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x80))();
  return;
}

