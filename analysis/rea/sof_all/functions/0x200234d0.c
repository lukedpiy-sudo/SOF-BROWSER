// rea decompile_all
// name: FUN_200234d0
// address: 0x200234d0
// body: available
// range: 0x200234d0-0x200235f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200234f3) */

void FUN_200234d0(undefined1 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *in_ECX;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  uVar1 = *param_1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *in_ECX = uVar1;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  uVar2 = *(uint *)(param_1 + 8);
  if (in_ECX == param_1) {
    if (uVar2 != 0) {
      FUN_201077fc();
    }
    iVar4 = *(int *)(in_ECX + 8) - uVar2;
    iVar8 = -1;
    if ((iVar4 == -1) || (iVar8 = iVar4, iVar4 != 0)) {
      FUN_2000a930();
      FUN_200fa360(*(int *)(in_ECX + 4) + uVar2,*(int *)(in_ECX + 4) + uVar2 + iVar8,
                   (*(int *)(in_ECX + 8) - iVar8) - uVar2);
      iVar4 = *(int *)(in_ECX + 8);
      cVar3 = FUN_2000a6c0(iVar4 - iVar8,0);
      if (cVar3 != '\0') {
        FUN_2000a6a0(iVar4 - iVar8);
        return;
      }
    }
  }
  else {
    if (uVar2 != 0) {
      puVar5 = *(undefined1 **)(param_1 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_201116cc;
      }
      if ((int)(uint)(byte)puVar5[-1] < -1) {
        *(undefined4 *)(in_ECX + 4) = 0;
        *(undefined4 *)(in_ECX + 8) = 0;
        *(undefined4 *)(in_ECX + 0xc) = 0;
        puVar5 = *(undefined1 **)(param_1 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_201116cc;
        }
        *(undefined1 **)(in_ECX + 4) = puVar5;
        *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        return;
      }
    }
    cVar3 = FUN_2000a6c0(uVar2,1);
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)&DAT_201116cc;
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_1 + 4);
      }
      puVar9 = *(undefined4 **)(in_ECX + 4);
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_2000a6a0(uVar2);
    }
  }
  return;
}

