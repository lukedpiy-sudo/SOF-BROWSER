// rea decompile_all
// name: FUN_2004fb90
// address: 0x2004fb90
// body: available
// range: 0x2004fb90-0x2004fc32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_2004fb90(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int in_ECX;
  
  if ((DAT_20390168 & 1) == 0) {
    DAT_20390168 = DAT_20390168 | 1;
    FUN_200f9f16(&DAT_2004fc40);
  }
  if (param_2 == '\0') {
    if (DAT_2039016c == *(int *)(in_ECX + 8)) goto LAB_2004fc09;
    if (*(char *)(*(int *)(DAT_2039016c + 8) + 0x25) == '\0') {
      iVar1 = FUN_20073a90(*(int *)(DAT_2039016c + 8));
    }
    else {
      iVar1 = *(int *)(DAT_2039016c + 4);
      if (DAT_2039016c == *(int *)(iVar1 + 8)) {
        do {
          DAT_2039016c = iVar1;
          iVar1 = *(int *)(DAT_2039016c + 4);
        } while (DAT_2039016c == *(int *)(iVar1 + 8));
      }
      if (*(int *)(DAT_2039016c + 8) == iVar1) goto LAB_2004fc09;
    }
  }
  else {
    iVar1 = **(int **)(in_ECX + 8);
  }
  DAT_2039016c = iVar1;
LAB_2004fc09:
  if (DAT_2039016c != *(int *)(in_ECX + 8)) {
    *param_1 = *(undefined4 *)(DAT_2039016c + 0x20);
    puVar2 = *(undefined1 **)(DAT_2039016c + 0x10);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_201116cc;
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}

