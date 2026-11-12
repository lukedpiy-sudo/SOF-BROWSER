// rea decompile_all
// name: FUN_2006bc30
// address: 0x2006bc30
// body: available
// range: 0x2006bc30-0x2006bcd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006bc30(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  undefined1 local_4 [4];
  
  piVar3 = *(int **)(in_ECX + 0xd4);
  *(undefined4 *)(in_ECX + 0xe4) = param_1;
  piVar1 = (int *)*piVar3;
  if (((*(int *)(in_ECX + 0xe0) != 0) &&
      (piVar2 = *(int **)(in_ECX + 0xd4), piVar1 == (int *)*piVar2)) && (piVar3 == piVar2)) {
    piVar3 = (int *)piVar2[1];
    if ((int *)piVar2[1] != *(int **)(in_ECX + 0xd8)) {
      do {
        FUN_20074920(piVar3[2]);
        piVar1 = (int *)*piVar3;
        FUN_200f9f75(piVar3);
        piVar3 = piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0xd8));
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 4) = *(undefined4 *)(in_ECX + 0xd8);
    *(undefined4 *)(in_ECX + 0xe0) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0xd4);
    *(int *)(*(int *)(in_ECX + 0xd4) + 8) = *(int *)(in_ECX + 0xd4);
    return;
  }
  while (piVar1 != piVar3) {
    FUN_20085230();
    FUN_20072720(local_4,piVar1);
  }
  return;
}

