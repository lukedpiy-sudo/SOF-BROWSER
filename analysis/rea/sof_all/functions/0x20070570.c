// rea decompile_all
// name: FUN_20070570
// address: 0x20070570
// body: available
// range: 0x20070570-0x2007061e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20070570(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(in_ECX + 4);
  piVar2 = (int *)*piVar1;
  if (*(int *)(in_ECX + 0x10) == 0) {
    while (piVar2 != piVar1) {
      FUN_20085230();
      FUN_20072720(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != *(int **)(in_ECX + 8)) {
      do {
        FUN_20073ce0(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_200f9f75(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 8));
    }
    *(undefined4 *)(*(int *)(in_ECX + 4) + 4) = *(undefined4 *)(in_ECX + 8);
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}

