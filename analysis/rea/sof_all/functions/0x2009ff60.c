// rea decompile_all
// name: FUN_2009ff60
// address: 0x2009ff60
// body: available
// range: 0x2009ff60-0x200a0141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200a012b) */
/* WARNING: Removing unreachable block (ram,0x200a00c8) */
/* WARNING: Removing unreachable block (ram,0x200a00df) */
/* WARNING: Removing unreachable block (ram,0x200a00eb) */
/* WARNING: Removing unreachable block (ram,0x200a00f4) */
/* WARNING: Removing unreachable block (ram,0x200a00f8) */
/* WARNING: Removing unreachable block (ram,0x200a0101) */

void FUN_2009ff60(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int in_ECX;
  int iVar7;
  void *pvVar8;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(in_ECX + 8) - iVar2;
    }
    puVar6 = *(undefined1 **)(in_ECX + 8);
    param_1 = param_1 - iVar7;
    if ((uint)(*(int *)(in_ECX + 0xc) - (int)puVar6) < param_1) {
      if ((iVar2 == 0) || (uVar1 = (int)puVar6 - iVar2, (uint)((int)puVar6 - iVar2) <= param_1)) {
        uVar1 = param_1;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)puVar6 - iVar2;
      }
      uVar1 = iVar2 + uVar1;
      uVar3 = uVar1;
      if ((int)uVar1 < 0) {
        uVar3 = 0;
      }
      pvVar4 = operator_new(uVar3);
      pvVar8 = pvVar4;
      for (puVar5 = *(undefined1 **)(in_ECX + 4); puVar5 != puVar6; puVar5 = puVar5 + 1) {
        FUN_200a0430(pvVar8,puVar5);
        pvVar8 = (void *)((int)pvVar8 + 1);
      }
      FUN_20082400(pvVar8,param_1,param_2);
      FUN_200823d0(puVar6,*(undefined4 *)(in_ECX + 8),(int)pvVar8 + param_1);
      FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
      iVar2 = *(int *)(in_ECX + 4);
      *(uint *)(in_ECX + 0xc) = (int)pvVar4 + uVar1;
      if (iVar2 == 0) {
        *(void **)(in_ECX + 4) = pvVar4;
        *(uint *)(in_ECX + 8) = (int)pvVar4 + param_1;
        return;
      }
      *(void **)(in_ECX + 4) = pvVar4;
      *(uint *)(in_ECX + 8) = (int)pvVar4 + param_1 + (*(int *)(in_ECX + 8) - iVar2);
      return;
    }
    if (param_1 != 0) {
      FUN_200823d0(puVar6,puVar6,puVar6 + param_1);
      FUN_20082400(*(int *)(in_ECX + 8),puVar6 + (param_1 - *(int *)(in_ECX + 8)),param_2);
      puVar5 = *(undefined1 **)(in_ECX + 8);
      for (; puVar6 != puVar5; puVar6 = puVar6 + 1) {
        *puVar6 = *param_2;
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_1;
      return;
    }
  }
  else if ((iVar2 != 0) && (param_1 < (uint)(*(int *)(in_ECX + 8) - iVar2))) {
    *(uint *)(in_ECX + 8) = iVar2 + param_1;
  }
  return;
}

