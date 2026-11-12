// rea decompile_all
// name: FUN_2010795b
// address: 0x2010795b
// body: available
// range: 0x2010795b-0x20107a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_2010795b(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 *extraout_ECX;
  int unaff_EBP;
  
  FUN_20108038();
  *(undefined1 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_2000a5b0(0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x10] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_2000a5b0(0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x20] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_2000a5b0(0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x30] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_2000a5b0(0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pcVar1 = (char *)FUN_20108057(0,0);
  *(char **)(unaff_EBP + -0x10) = pcVar1;
  sVar2 = _strlen(pcVar1);
  FUN_2000a600(*(undefined4 *)(unaff_EBP + -0x10),sVar2);
  if (*(int *)(unaff_EBP + 8) != 0) {
    pcVar1 = (char *)FUN_20108057(0,*(undefined4 *)(unaff_EBP + 8));
    if (pcVar1 != (char *)0x0) goto LAB_201079f0;
  }
  pcVar1 = &DAT_20130de0;
LAB_201079f0:
  sVar2 = _strlen(pcVar1);
  FUN_2000a600(pcVar1,sVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

