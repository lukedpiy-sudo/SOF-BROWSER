// rea decompile_all
// name: FUN_200d75b0
// address: 0x200d75b0
// body: available
// range: 0x200d75b0-0x200d7617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d75b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  
  uVar3 = FUN_200c66a0();
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0x108) = uVar3;
  iVar4 = FUN_200c66d0();
  puVar2 = *(undefined4 **)(in_ECX + 0x88);
  *(int *)(in_ECX + 0x10c) = iVar4 + *(int *)(iVar1 + 0x80);
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if ((param_1 == puVar2[1]) || (puVar2[1] == 0)) {
      (*DAT_20390d94)(s_menu_small_select_wav_20158548);
      FUN_200c7190(in_ECX);
    }
  }
  return;
}

