// rea decompile_all
// name: FUN_200dd490
// address: 0x200dd490
// body: available
// range: 0x200dd490-0x200dd4da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dd490(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 8))();
  while( true ) {
    iVar4 = *(int *)in_ECX[1];
    iVar1 = FUN_200c64f0();
    iVar4 = *(int *)(iVar4 + 0x48);
    iVar2 = FUN_200e6cb0();
    in_ECX[3] = ((iVar4 + iVar1 * -2) - iVar2) - in_ECX[10] >> 1;
    piVar3 = (int *)FUN_200cf670();
    if (piVar3 == (int *)0x0) break;
    iVar4 = (**(code **)(*piVar3 + 4))();
    in_ECX[4] = iVar4;
  }
  return;
}

