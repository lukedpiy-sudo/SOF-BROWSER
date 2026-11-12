// rea decompile_all
// name: FUN_20104b89
// address: 0x20104b89
// body: available
// range: 0x20104b89-0x20104c21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20104b89(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_20409ba8 == 0) {
    FUN_201029cc();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_2040858c,0x104);
  _DAT_204083cc = &DAT_2040858c;
  pcVar2 = &DAT_2040858c;
  if (*DAT_20408b88 != '\0') {
    pcVar2 = DAT_20408b88;
  }
  FUN_20104c22(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_20104c22(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  DAT_204083b4 = pvVar1;
  DAT_204083b0 = local_8 + -1;
  return;
}

