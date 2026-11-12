// rea decompile_all
// name: FUN_20087940
// address: 0x20087940
// body: available
// range: 0x20087940-0x200879f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20087940(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
joined_r0x20087951:
  if ((((param_2 == param_3) || (*(short *)(param_2 + 0xc) != *(short *)(param_4 + 0xc))) ||
      (*(short *)(param_2 + 0x10) != *(short *)(param_4 + 0x10))) ||
     ((*(int *)(param_2 + 0x14) != *(int *)(param_4 + 0x14) ||
      (*(short *)(param_2 + 0x18) != *(short *)(param_4 + 0x18))))) {
    param_1[1] = param_4;
    *param_1 = param_2;
    return;
  }
  if (*(char *)(*(int *)(param_2 + 8) + 0x1d) == '\0') {
    iVar1 = FUN_20084c30(*(int *)(param_2 + 8));
LAB_200879af:
    param_2 = iVar1;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (param_2 == *(int *)(iVar1 + 8)) {
      do {
        param_2 = iVar1;
        iVar1 = *(int *)(param_2 + 4);
      } while (param_2 == *(int *)(iVar1 + 8));
    }
    if (*(int *)(param_2 + 8) != iVar1) goto LAB_200879af;
  }
  if (*(char *)(*(int *)(param_4 + 8) + 0x1d) != '\0') goto LAB_200879c6;
  iVar1 = FUN_20084c30(*(int *)(param_4 + 8));
  goto LAB_200879dd;
LAB_200879c6:
  iVar1 = *(int *)(param_4 + 4);
  if (param_4 == *(int *)(iVar1 + 8)) {
    do {
      param_4 = iVar1;
      iVar1 = *(int *)(param_4 + 4);
    } while (param_4 == *(int *)(iVar1 + 8));
  }
  if (*(int *)(param_4 + 8) != iVar1) {
LAB_200879dd:
    param_4 = iVar1;
  }
  goto joined_r0x20087951;
}

