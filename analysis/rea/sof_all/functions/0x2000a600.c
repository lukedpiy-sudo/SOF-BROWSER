// rea decompile_all
// name: FUN_2000a600
// address: 0x2000a600
// body: available
// range: 0x2000a600-0x2000a69a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000a600(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined4 *puVar3;
  
  if (0xfffffffd < param_2) {
    FUN_201075d0();
  }
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 8) = 0;
  if ((iVar1 == 0) || (*(char *)(iVar1 + -1) == '\0')) {
    if (param_2 == 0) {
      FUN_2000a5b0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0xc) < 0x20) && (param_2 <= *(uint *)(in_ECX + 0xc))) goto LAB_2000a66f;
    FUN_2000a5b0(1);
  }
  else if (param_2 == 0) {
    *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    return;
  }
  FUN_2000a840(param_2);
LAB_2000a66f:
  puVar3 = *(undefined4 **)(in_ECX + 4);
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(uint *)(in_ECX + 8) = param_2;
  *(undefined1 *)(param_2 + *(int *)(in_ECX + 4)) = 0;
  return;
}

