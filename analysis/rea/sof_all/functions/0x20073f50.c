// rea decompile_all
// name: FUN_20073f50
// address: 0x20073f50
// body: available
// range: 0x20073f50-0x20073fa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20073f50(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = *(undefined4 **)(in_ECX + 4);
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar3 = (undefined4 *)puVar5[1];
  puVar6 = puVar5;
  if (puVar3 != puVar1) {
    puVar4 = puVar3;
    do {
      if (*param_2 < (int)puVar4[3]) {
        puVar2 = (undefined4 *)*puVar4;
        puVar6 = puVar4;
      }
      else {
        puVar2 = (undefined4 *)puVar4[2];
      }
      puVar4 = puVar2;
    } while (puVar2 != puVar1);
  }
  if (puVar3 != puVar1) {
    do {
      if ((int)puVar3[3] < *param_2) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  param_1[1] = (int)puVar6;
  *param_1 = (int)puVar5;
  return;
}

