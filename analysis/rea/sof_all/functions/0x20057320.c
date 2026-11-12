// rea decompile_all
// name: FUN_20057320
// address: 0x20057320
// body: available
// range: 0x20057320-0x200573da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20057320(undefined4 param_1,undefined4 **param_2,undefined4 param_3)

{
  undefined4 **ppuVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 unaff_EDI;
  undefined4 **ppuStack_18;
  undefined4 **ppuStack_14;
  undefined4 *local_4;
  
  ppuVar1 = param_2;
  ppuStack_14 = &local_4;
  ppuStack_18 = param_2;
  local_4 = in_ECX;
  FUN_200563b0(&param_1);
  if (local_4 == (undefined4 *)0x0) {
    ppuStack_14 = (undefined4 **)0x20057357;
    iVar4 = FUN_200f9e13();
    if (iVar4 == 1) {
      ppuStack_14 = &param_2;
      ppuStack_18 = &local_4;
      FUN_200563b0(&param_1,ppuVar1);
      uVar2 = param_3;
      ppuStack_14 = (undefined4 **)param_3;
      ppuStack_18 = param_2;
      cVar3 = (**(code **)*in_ECX)(&param_1,ppuVar1,local_4);
      while (cVar3 != '\0') {
        FUN_200563b0(&stack0xfffffff0,ppuVar1,&ppuStack_18,&stack0xfffffff4);
        cVar3 = (**(code **)*in_ECX)(&stack0xfffffff0,ppuVar1,ppuStack_18,unaff_EDI,uVar2);
      }
      return 1;
    }
  }
  return 0;
}

