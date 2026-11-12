// rea decompile_all
// name: FUN_20083e90
// address: 0x20083e90
// body: available
// range: 0x20083e90-0x20083f68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20083e90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  cVar2 = '\x01';
  puVar3 = *(undefined4 **)(in_ECX + 4);
  puVar4 = (undefined4 *)puVar3[1];
  if (puVar4 != *(undefined4 **)(in_ECX + 8)) {
    do {
      puVar3 = puVar4;
      cVar2 = FUN_20087680(param_2,puVar3 + 3);
      if (cVar2 == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
      }
    } while (puVar4 != *(undefined4 **)(in_ECX + 8));
  }
  uVar1 = param_2;
  if (*(char *)(in_ECX + 0xc) != '\0') {
    puVar3 = (undefined4 *)FUN_20087020(&param_2,puVar4,puVar3,param_2);
    *param_1 = *puVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (cVar2 != '\0') {
    if (puVar3 == (undefined4 *)**(int **)(in_ECX + 4)) goto LAB_20083f2f;
    FUN_20050560();
  }
  cVar2 = FUN_20087680(puVar3 + 3,uVar1);
  if (cVar2 == '\0') {
    *param_1 = puVar3;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_20083f2f:
  puVar3 = (undefined4 *)FUN_20087020(&param_2,puVar4,puVar3,param_2);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

