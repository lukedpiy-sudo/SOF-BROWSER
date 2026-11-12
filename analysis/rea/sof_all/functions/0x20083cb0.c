// rea decompile_all
// name: FUN_20083cb0
// address: 0x20083cb0
// body: available
// range: 0x20083cb0-0x20083d36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20083cb0(undefined4 *param_1,ushort *param_2)

{
  char cVar1;
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
      cVar1 = FUN_20087600(puVar3 + 3,param_2);
      if (cVar1 == '\0') {
        puVar4 = (undefined4 *)*puVar3;
      }
      else {
        puVar4 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      puVar2 = puVar3;
    } while (puVar4 != *(undefined4 **)(in_ECX + 8));
  }
  if (puVar3 != *(undefined4 **)(in_ECX + 4)) {
    if ((*(ushort *)(puVar3 + 3) <= *param_2) &&
       ((*(ushort *)(puVar3 + 3) < *param_2 || ((int)puVar3[4] <= *(int *)(param_2 + 2))))) {
      *param_1 = puVar3;
      return;
    }
  }
  *param_1 = *(undefined4 **)(in_ECX + 4);
  return;
}

