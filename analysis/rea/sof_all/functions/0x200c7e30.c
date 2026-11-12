// rea decompile_all
// name: FUN_200c7e30
// address: 0x200c7e30
// body: available
// range: 0x200c7e30-0x200c7f0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c7e30(void)

{
  int *piVar1;
  undefined1 *puVar2;
  char *pcVar3;
  
  if ((DAT_201c1f04 == 3) && (FUN_20014100(), DAT_20406554 != 0)) {
    FUN_200cc070();
  }
  if (DAT_20406560 != 0) {
    puVar2 = *(undefined1 **)(*DAT_2040655c + 0xc);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_201116cc;
    }
    FUN_20018180(puVar2);
    FUN_20018180(&DAT_2011dd40);
    piVar1 = (int *)*DAT_2040655c;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    if (piVar1[3] != 0) {
      pcVar3 = (char *)FUN_200c59c0(piVar1[3]);
      if ((*pcVar3 == '\0') || (pcVar3 = (char *)FUN_200c59c0(piVar1[3]), *pcVar3 == '\0')) {
        FUN_200c9510(piVar1[3] + -1,piVar1[5] + 2);
      }
      else {
        pcVar3 = (char *)FUN_200c59c0(piVar1[3]);
        *pcVar3 = *pcVar3 + -1;
      }
    }
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    FUN_200f9f75(piVar1);
    DAT_20406560 = DAT_20406560 + -1;
    return;
  }
  return;
}

