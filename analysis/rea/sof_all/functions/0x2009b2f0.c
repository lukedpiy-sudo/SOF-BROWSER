// rea decompile_all
// name: FUN_2009b2f0
// address: 0x2009b2f0
// body: available
// range: 0x2009b2f0-0x2009b3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009b2f0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  float *pfVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  *param_1 = 1;
  if ((*(char *)(*(int *)(in_ECX + 0x24) + 0x8c) != '\0') && (*(char *)(in_ECX + 0x19) != '\0')) {
    *param_1 = 0;
  }
  if (*(char *)(in_ECX + 0xb8) == '\0') {
LAB_2009b337:
    *param_1 = 0;
  }
  else {
    if (*(char *)(in_ECX + 0xb8) == '\0') {
      pfVar1 = (float *)0x0;
    }
    else {
      pfVar1 = (float *)(in_ECX + 0xbc);
    }
    if (*pfVar1 < 0.99) goto LAB_2009b337;
  }
  if (*(int *)(in_ECX + 0x1c) != 0) {
    *param_1 = 0;
  }
  *param_2 = 1;
  if (*(char *)(in_ECX + 0x70) == '\0') {
LAB_2009b36c:
    if (*(char *)(in_ECX + 0x88) != '\0') {
      if (*(char *)(in_ECX + 0x88) == '\0') {
        pfVar1 = (float *)0x0;
      }
      else {
        pfVar1 = (float *)(in_ECX + 0x8c);
      }
      if (*pfVar1 < 0.051 != (*pfVar1 == 0.051)) goto LAB_2009b3bc;
    }
    if (*(char *)(in_ECX + 0xa0) == '\0') goto LAB_2009b3bf;
    if (*(char *)(in_ECX + 0xa0) == '\0') {
      pfVar1 = (float *)0x0;
    }
    else {
      pfVar1 = (float *)(in_ECX + 0xa4);
    }
    if (*pfVar1 < 0.99) goto LAB_2009b3bf;
  }
  else {
    if (*(char *)(in_ECX + 0x70) == '\0') {
      pfVar1 = (float *)0x0;
    }
    else {
      pfVar1 = (float *)(in_ECX + 0x74);
    }
    if (*pfVar1 < 0.0 == (*pfVar1 == 0.0)) goto LAB_2009b36c;
  }
LAB_2009b3bc:
  *param_2 = 0;
LAB_2009b3bf:
  iVar3 = 0;
  *param_3 = 0;
  do {
    iVar2 = *(int *)(in_ECX + 0x24) + iVar3;
    if ((*(char *)(iVar2 + 0x8c) != '\0') && (*(char *)(iVar2 + 0x14) == '\0')) {
      *param_3 = 1;
    }
    iVar3 = iVar3 + 0xd8;
  } while (iVar3 < 0x1b0);
  return;
}

