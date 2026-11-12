// rea decompile_all
// name: FUN_200e3cb0
// address: 0x200e3cb0
// body: available
// range: 0x200e3cb0-0x200e3d8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e3cb0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_201077fc();
  }
  uVar1 = *(int *)(param_1 + 8) - param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (-*(int *)(in_ECX + 8) - 1U <= param_3) {
    FUN_201075d0();
  }
  if (param_3 == 0) {
    return;
  }
  uVar1 = *(int *)(in_ECX + 8) + param_3;
  if (0xfffffffd < uVar1) {
    FUN_201075d0();
  }
  if (uVar1 < *(uint *)(in_ECX + 8)) {
    *(uint *)(in_ECX + 8) = uVar1;
  }
  puVar2 = *(undefined1 **)(in_ECX + 4);
  if ((puVar2 == (undefined1 *)0x0) || (puVar2[-1] == '\0')) {
    if (uVar1 == 0) {
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      *(undefined4 *)(in_ECX + 8) = 0;
      *puVar2 = 0;
      return;
    }
    if (uVar1 <= *(uint *)(in_ECX + 0xc)) goto LAB_200e3d4f;
  }
  else if (uVar1 == 0) {
    FUN_2000a5b0(1);
    return;
  }
  FUN_2000a840(uVar1);
LAB_200e3d4f:
  puVar2 = *(undefined1 **)(param_1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_201116cc;
  }
  puVar4 = (undefined4 *)(puVar2 + param_2);
  puVar5 = (undefined4 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 4));
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)(in_ECX + 8) = uVar1;
  *(undefined1 *)(*(int *)(in_ECX + 4) + uVar1) = 0;
  return;
}

