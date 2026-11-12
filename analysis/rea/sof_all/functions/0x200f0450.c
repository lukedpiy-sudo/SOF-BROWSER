// rea decompile_all
// name: FUN_200f0450
// address: 0x200f0450
// body: available
// range: 0x200f0450-0x200f0533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_200f0450(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = _malloc(0x28);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar5 = puVar1;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *puVar1 = param_2;
    DVar3 = GetTickCount();
    puVar1[4] = param_5;
    puVar1[1] = DVar3 + 30000;
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    if (param_3 == 0) {
      puVar1[2] = 0;
    }
    else {
      uVar2 = FUN_200fcecc(param_3);
      puVar1[2] = uVar2;
    }
    if (param_4 == 0) {
      puVar1[3] = 0;
    }
    else {
      uVar2 = FUN_200fcecc(param_4);
      puVar1[3] = uVar2;
    }
    iVar4 = *(int *)(param_1 + 0x38c);
    if (iVar4 == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x38c) = 1;
    }
    else {
      *(int *)(param_1 + 0x38c) = iVar4 + 1;
    }
    puVar1[8] = iVar4;
    if (*(int *)(param_1 + 900) == 0) {
      *(undefined4 **)(param_1 + 900) = puVar1;
      *(undefined4 **)(param_1 + 0x388) = puVar1;
      return puVar1[8];
    }
    *(undefined4 **)(*(int *)(param_1 + 0x388) + 0x24) = puVar1;
    *(undefined4 **)(param_1 + 0x388) = puVar1;
    uVar2 = puVar1[8];
  }
  return uVar2;
}

