// rea decompile_all
// name: FUN_20057f40
// address: 0x20057f40
// body: available
// range: 0x20057f40-0x20057fc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20057f40(byte param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  
  if ((int *)*DAT_20390db4 != DAT_20390db4) {
    bVar4 = ~param_1;
    piVar5 = (int *)*DAT_20390db4;
    do {
      if (*(char *)(piVar5[2] + 0x15) == '\0') {
        piVar2 = (int *)FUN_20085550(piVar5[2]);
LAB_20057f83:
        piVar6 = piVar2;
      }
      else {
        piVar2 = (int *)piVar5[1];
        piVar6 = piVar5;
        if (piVar5 == (int *)piVar2[2]) {
          do {
            piVar6 = piVar2;
            piVar2 = (int *)piVar6[1];
          } while (piVar6 == (int *)piVar2[2]);
        }
        if ((int *)piVar6[2] != piVar2) goto LAB_20057f83;
      }
      bVar3 = *(byte *)(piVar5[4] + 5) & bVar4;
      *(byte *)(piVar5[4] + 5) = bVar3;
      if (bVar3 == 0) {
        iVar1 = piVar5[4];
        if (iVar1 != 0) {
          FUN_20057550();
          FUN_200f9f75(iVar1);
        }
        FUN_20072720(&param_1,piVar5);
      }
      piVar5 = piVar6;
    } while (piVar6 != DAT_20390db4);
  }
  return;
}

