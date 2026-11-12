// rea decompile_all
// name: FUN_200c18a0
// address: 0x200c18a0
// body: available
// range: 0x200c18a0-0x200c18f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c18a0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = *(undefined4 **)(in_ECX + 4);
  puVar4 = puVar3;
  puVar5 = (undefined4 *)puVar3[1];
  if ((undefined4 *)puVar3[1] != *(undefined4 **)(in_ECX + 8)) {
    do {
      puVar4 = puVar5;
      puVar1 = *(undefined1 **)(param_2 + 4);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_201116cc;
      }
      iVar2 = FUN_20023c90(0,puVar4[5],puVar1,*(undefined4 *)(param_2 + 8));
      if (iVar2 < 0) {
        puVar5 = (undefined4 *)puVar4[2];
        puVar4 = puVar3;
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
      puVar3 = puVar4;
    } while (puVar5 != *(undefined4 **)(in_ECX + 8));
  }
  *param_1 = (int)puVar4;
  return;
}

