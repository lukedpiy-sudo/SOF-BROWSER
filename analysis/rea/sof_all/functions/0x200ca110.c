// rea decompile_all
// name: FUN_200ca110
// address: 0x200ca110
// body: available
// range: 0x200ca110-0x200ca160 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ca110(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  if (*(int *)(in_ECX + 0x30) != 0) {
    puVar1 = *(undefined1 **)(in_ECX + 0x2c);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_201116cc;
    }
    uVar2 = FUN_20055450(s_exec__s_cfg_20158724,puVar1);
    FUN_20018380(0,uVar2);
  }
  *(undefined1 *)(in_ECX + 0xb8) = 0;
  piVar3 = (int *)**(int **)(in_ECX + 0x1c);
  if (piVar3 != *(int **)(in_ECX + 0x1c)) {
    do {
      FUN_200c6960();
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x1c));
  }
  return;
}

