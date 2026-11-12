// rea decompile_all
// name: FUN_200c0e50
// address: 0x200c0e50
// body: available
// range: 0x200c0e50-0x200c0f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c0e50(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  undefined4 *local_8;
  undefined1 local_4 [4];
  
  FUN_20094400();
  local_8 = (undefined4 *)**(int **)(in_ECX + 4);
  if (local_8 != *(int **)(in_ECX + 4)) {
    do {
      iVar1 = local_8[7];
      if (iVar1 != 0) {
        FUN_200bf790();
        FUN_200f9f75(iVar1);
      }
      FUN_20075f90();
    } while (local_8 != *(undefined4 **)(in_ECX + 4));
  }
  uVar2 = *(undefined4 *)(in_ECX + 4);
  puVar5 = (undefined4 *)FUN_20083550(&local_8);
  FUN_200c1470(local_4,*puVar5,uVar2);
  local_8 = (undefined4 *)**(int **)(in_ECX + 0x18);
  if (local_8 != *(int **)(in_ECX + 0x18)) {
    do {
      iVar1 = local_8[7];
      if (iVar1 != 0) {
        FUN_200bf1e0();
        FUN_200f9f75(iVar1);
      }
      FUN_20075f90();
    } while (local_8 != *(undefined4 **)(in_ECX + 0x18));
  }
  puVar5 = *(undefined4 **)(in_ECX + 0x18);
  local_8 = (undefined4 *)*puVar5;
  puVar4 = local_8;
  if (*(int *)(in_ECX + 0x24) == 0) {
    while (puVar4 != puVar5) {
      local_8 = puVar4;
      FUN_20075f90();
      FUN_20073590(local_4,puVar4);
      puVar4 = local_8;
    }
    return;
  }
  piVar6 = (int *)puVar5[1];
  if ((int *)puVar5[1] != *(int **)(in_ECX + 0x1c)) {
    do {
      FUN_200730f0(piVar6[2]);
      piVar3 = (int *)*piVar6;
      FUN_20048b50(0);
      FUN_200f9f75(piVar6);
      piVar6 = piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x1c));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x18) + 4) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)*(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(int *)(*(int *)(in_ECX + 0x18) + 8) = *(int *)(in_ECX + 0x18);
  return;
}

