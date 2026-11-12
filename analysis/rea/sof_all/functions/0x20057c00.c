// rea decompile_all
// name: FUN_20057c00
// address: 0x20057c00
// body: available
// range: 0x20057c00-0x20057c71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20057c00(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  int local_4;
  
  FUN_20060490(0x53504e4d,&local_4,4,0);
  iVar3 = 0;
  if (0 < local_4) {
    do {
      FUN_20060490(0x53504944,0,0,&local_8);
      uVar1 = local_8;
      iVar2 = FUN_20057ca0(local_8,2);
      if (iVar2 != 0) {
        FUN_2005d5d0(uVar1);
      }
      Z_Free(local_8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_4);
  }
  return;
}

