// rea decompile_all
// name: FUN_20093030
// address: 0x20093030
// body: available
// range: 0x20093030-0x200932b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x20093296) */
/* WARNING: Removing unreachable block (ram,0x200932a7) */
/* WARNING: Removing unreachable block (ram,0x200932a9) */
/* WARNING: Removing unreachable block (ram,0x200931f7) */
/* WARNING: Removing unreachable block (ram,0x2009321c) */
/* WARNING: Removing unreachable block (ram,0x2009322d) */
/* WARNING: Removing unreachable block (ram,0x2009322f) */
/* WARNING: Removing unreachable block (ram,0x20093231) */
/* WARNING: Removing unreachable block (ram,0x20093235) */
/* WARNING: Removing unreachable block (ram,0x2009323c) */
/* WARNING: Removing unreachable block (ram,0x20093240) */
/* WARNING: Removing unreachable block (ram,0x2009324e) */
/* WARNING: Removing unreachable block (ram,0x20093250) */
/* WARNING: Removing unreachable block (ram,0x20093252) */

void FUN_20093030(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_ECX + 8) - iVar3) / 0x44;
  }
  if (uVar5 < param_1) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)(in_ECX + 8) - iVar3) / 0x44;
    }
    puVar1 = *(undefined4 **)(in_ECX + 8);
    param_1 = param_1 - iVar6;
    if ((uint)((*(int *)(in_ECX + 0xc) - (int)puVar1) / 0x44) < param_1) {
      if ((iVar3 == 0) || (uVar5 = ((int)puVar1 - iVar3) / 0x44, uVar5 <= param_1)) {
        uVar5 = param_1;
      }
      iVar6 = FUN_200921b0();
      iVar6 = iVar6 + uVar5;
      iVar3 = iVar6;
      if (iVar6 < 0) {
        iVar3 = 0;
      }
      pvVar4 = operator_new(iVar3 * 0x44);
      iVar3 = FUN_200937d0(*(undefined4 *)(in_ECX + 4),puVar1,pvVar4);
      FUN_20093810(iVar3,param_1,param_2);
      FUN_200937d0(puVar1,*(undefined4 *)(in_ECX + 8),iVar3 + param_1 * 0x44);
      FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
      *(void **)(in_ECX + 0xc) = (void *)((int)pvVar4 + iVar6 * 0x44);
      iVar3 = FUN_200921b0();
      *(void **)(in_ECX + 4) = pvVar4;
      *(void **)(in_ECX + 8) = (void *)((int)pvVar4 + (iVar3 + param_1) * 0x44);
      return;
    }
    if (param_1 != 0) {
      FUN_200937d0(puVar1,puVar1,puVar1 + param_1 * 0x11);
      FUN_20093810(*(int *)(in_ECX + 8),param_1 - (*(int *)(in_ECX + 8) - (int)puVar1) / 0x44,
                   param_2);
      puVar2 = *(undefined4 **)(in_ECX + 8);
      while (puVar1 != puVar2) {
        puVar7 = puVar1 + 0x11;
        puVar8 = param_2;
        puVar9 = puVar1;
        for (iVar3 = 0x11; puVar1 = puVar7, iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_1 * 0x44;
      return;
    }
  }
  else if ((iVar3 != 0) && (param_1 < (uint)((*(int *)(in_ECX + 8) - iVar3) / 0x44))) {
    *(uint *)(in_ECX + 8) = iVar3 + param_1 * 0x44;
  }
  return;
}

