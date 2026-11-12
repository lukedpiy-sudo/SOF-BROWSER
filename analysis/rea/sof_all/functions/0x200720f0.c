// rea decompile_all
// name: FUN_200720f0
// address: 0x200720f0
// body: available
// range: 0x200720f0-0x2007217b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200720f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(in_ECX + 4);
  puVar2 = puVar3;
  puVar4 = (undefined4 *)puVar3[1];
  if ((undefined4 *)puVar3[1] != *(undefined4 **)(in_ECX + 8)) {
    do {
      puVar3 = puVar4;
      iVar1 = __strcmpi((char *)puVar3[3],(char *)*param_2);
      if (iVar1 == -1) {
        puVar4 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (puVar4 != *(undefined4 **)(in_ECX + 8));
  }
  if (puVar3 != *(undefined4 **)(in_ECX + 4)) {
    iVar1 = __strcmpi((char *)*param_2,(char *)puVar3[3]);
    if (iVar1 != -1) {
      *param_1 = puVar3;
      return;
    }
  }
  *param_1 = *(undefined4 *)(in_ECX + 4);
  return;
}

