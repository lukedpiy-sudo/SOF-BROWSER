// rea decompile_all
// name: FUN_200e1180
// address: 0x200e1180
// body: available
// range: 0x200e1180-0x200e1249 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e1180(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = *(int *)(in_ECX + 0xc);
  if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(in_ECX + 0x68);
  }
  iVar2 = FUN_200c66a0();
  piVar1 = *(int **)(in_ECX + 0xb4);
  piVar6 = (int *)*piVar1;
  iVar4 = 0;
  if (piVar6 != piVar1) {
    do {
      iVar4 = iVar4 + piVar6[0xb];
      if (((iVar2 - iVar5) - iVar3) / *(int *)(in_ECX + 0x9c) < iVar4) break;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar1);
    if (piVar6 != piVar1) {
      if ((piVar6[0x12] != 0) && (iVar3 = __ftol(), iVar3 != 0)) {
        if ((undefined4 *)piVar6[0x12] != (undefined4 *)0x0) {
          Cvar_SetValue(*(undefined4 *)piVar6[0x12],0);
        }
        *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) - piVar6[0xb];
        *(int *)piVar6[1] = *piVar6;
        *(int *)(*piVar6 + 4) = piVar6[1];
        FUN_200e0e80();
        FUN_200f9f75(piVar6);
        *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + -1;
        return;
      }
      (*DAT_20390d94)(s_menu_small_invalid_wav_20158370);
      return;
    }
  }
  return;
}

