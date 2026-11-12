// rea decompile_all
// name: FUN_200f44d0
// address: 0x200f44d0
// body: available
// range: 0x200f44d0-0x200f4554 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f44d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    iVar2 = param_1[1] + param_1[3];
    param_1[1] = iVar2;
    iVar2 = FUN_200f9a92(param_1[5],param_1[2] * iVar2);
    param_1[5] = iVar2;
  }
  iVar2 = *param_1;
  iVar5 = iVar2 + 1;
  *param_1 = iVar5;
  if (iVar1 < iVar2) {
    iVar2 = param_1[2];
    FUN_200fa360((iVar1 + 1) * iVar2 + param_1[5],iVar2 * iVar1 + param_1[5],
                 ((iVar5 - iVar1) + -1) * iVar2);
  }
  uVar4 = param_1[2];
  puVar6 = (undefined4 *)(uVar4 * iVar1 + param_1[5]);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return;
}

