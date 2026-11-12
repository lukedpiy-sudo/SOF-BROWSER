// rea decompile_all
// name: FUN_20069200
// address: 0x20069200
// body: available
// range: 0x20069200-0x20069272 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20069200(int param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (*pcVar1 == '\0') {
    uVar2 = (*DAT_204058ac)(param_2,1,param_3,*(undefined4 *)(pcVar1 + 4));
    pcVar1[2] = pcVar1[2] | uVar2 != param_3;
    return;
  }
  if (*(undefined1 **)(pcVar1 + 0x20) <
      (undefined1 *)((int)*(undefined4 **)(pcVar1 + 0x18) + param_3)) {
    pcVar1[2] = '\x01';
    *(undefined1 **)(pcVar1 + 0x18) = *(undefined1 **)(pcVar1 + 0x20);
    return;
  }
  puVar3 = *(undefined4 **)(pcVar1 + 0x18);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  *(uint *)(pcVar1 + 0x18) = *(int *)(pcVar1 + 0x18) + param_3;
  return;
}

