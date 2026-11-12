// rea decompile_all
// name: FUN_200f3a80
// address: 0x200f3a80
// body: available
// range: 0x200f3a80-0x200f3ba4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f3a80(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  if (*(int *)(param_1 + 4) == 2) {
    return 1;
  }
  iVar2 = FUN_200fb04d(&DAT_204065d0,param_2,&stack0x0000000c);
  if (iVar2 == -1) {
    DAT_204075d0 = 0;
  }
  else {
    (&DAT_204065d0)[iVar2] = 0;
  }
  if (*(int *)(param_1 + 4) != 2) {
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_204065d0;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    iVar2 = *(int *)(param_1 + 0x118) + 2 + uVar4;
    if (*(int *)(param_1 + 0x11c) < iVar2) {
      uVar5 = iVar2 + 0x2000;
      uVar3 = uVar5 & 0x80001fff;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffe000) + 1;
      }
      iVar6 = uVar5 - uVar3;
      iVar2 = FUN_200f9a92(*(undefined4 *)(param_1 + 0x114),iVar6 + 1);
      if (iVar2 == 0) {
        return 0;
      }
      *(int *)(param_1 + 0x114) = iVar2;
      *(int *)(param_1 + 0x11c) = iVar6;
    }
    puVar7 = (undefined4 *)&DAT_204065d0;
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x118));
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    iVar2 = *(int *)(param_1 + 0x118) + uVar4;
    *(int *)(param_1 + 0x118) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x114)) = 0xd;
    iVar2 = *(int *)(param_1 + 0x118) + 1;
    *(int *)(param_1 + 0x118) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x114)) = 10;
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  }
  return 1;
}

