// rea decompile_all
// name: FUN_200ea1d0
// address: 0x200ea1d0
// body: available
// range: 0x200ea1d0-0x200ea2bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ea1d0(int *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  if (param_3 <= param_2) {
    FUN_200ceae0(param_2);
    iVar3 = (**(code **)(*param_1 + 4))();
    iVar1 = *in_ECX;
    iVar4 = FUN_200c64f0();
    if ((*(int *)(iVar1 + 0x4c) + iVar4 * -2 < iVar3) && (in_ECX[0x1f] = iVar3, in_ECX[0x10] != 0))
    {
      cVar2 = FUN_200d55a0();
      if ((cVar2 == '\0') && ((in_ECX[0x21] == 0 && (param_4 != '\0')))) {
        in_ECX[0x21] = 2;
      }
      if (in_ECX[0x21] == 2) {
        in_ECX[0x20] = iVar3;
      }
      in_ECX[0x21] = 1;
      if (in_ECX[0x20] < 0) {
        in_ECX[0x20] = 0;
      }
      iVar1 = *in_ECX;
      iVar3 = FUN_200c64f0();
      if ((iVar3 * 2 - *(int *)(iVar1 + 0x4c)) + in_ECX[0x1f] < in_ECX[0x20]) {
        iVar1 = *in_ECX;
        iVar3 = FUN_200c64f0();
        iVar1 = *(int *)(iVar1 + 0x4c);
        in_ECX[0x21] = 2;
        in_ECX[0x20] = (iVar3 * 2 - iVar1) + in_ECX[0x1f];
      }
    }
  }
  return;
}

