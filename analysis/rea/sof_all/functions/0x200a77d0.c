// rea decompile_all
// name: FUN_200a77d0
// address: 0x200a77d0
// body: available
// range: 0x200a77d0-0x200a78be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a77d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  bool bVar4;
  undefined1 local_4 [4];
  
  bVar4 = true;
  puVar2 = *(undefined4 **)(in_ECX + 4);
  puVar3 = (undefined4 *)puVar2[1];
  if (puVar3 != *(undefined4 **)(in_ECX + 8)) {
    do {
      puVar2 = puVar3;
      iVar1 = FUN_20023c40(puVar2 + 3);
      bVar4 = iVar1 < 0;
      if (bVar4) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
    } while (puVar3 != *(undefined4 **)(in_ECX + 8));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    puVar2 = (undefined4 *)FUN_20027330(local_4,puVar3,puVar2,param_2);
    *param_1 = *puVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (bVar4) {
    if (puVar2 == (undefined4 *)**(int **)(in_ECX + 4)) {
      puVar2 = (undefined4 *)FUN_20027330(local_4,puVar3,puVar2,param_2);
      *param_1 = *puVar2;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_20086e70();
  }
  iVar1 = FUN_20023c40(param_2);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)FUN_20027330(local_4,puVar3,puVar2,param_2);
    *param_1 = *puVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

