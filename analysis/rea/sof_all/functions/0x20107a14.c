// rea decompile_all
// name: FUN_20107a14
// address: 0x20107a14
// body: available
// range: 0x20107a14-0x20107a88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20107a14(void)

{
  int iVar1;
  undefined1 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_20108038();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x28);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    puVar2 = *(undefined1 **)(extraout_ECX + 0x24);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_201116cc;
    }
    FUN_20108057(0,puVar2);
  }
  FUN_2000a5b0(1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_2000a5b0(1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_2000a5b0(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_2000a5b0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

