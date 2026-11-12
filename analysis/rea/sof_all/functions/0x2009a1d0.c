// rea decompile_all
// name: FUN_2009a1d0
// address: 0x2009a1d0
// body: available
// range: 0x2009a1d0-0x2009a3b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2009a39a) */
/* WARNING: Removing unreachable block (ram,0x2009a32e) */
/* WARNING: Removing unreachable block (ram,0x2009a348) */
/* WARNING: Removing unreachable block (ram,0x2009a357) */
/* WARNING: Removing unreachable block (ram,0x2009a360) */
/* WARNING: Removing unreachable block (ram,0x2009a364) */
/* WARNING: Removing unreachable block (ram,0x2009a36f) */

void FUN_2009a1d0(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_ECX + 8) - iVar3 >> 2;
  }
  if (uVar2 < param_1) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(in_ECX + 8) - iVar3 >> 2;
    }
    puVar5 = *(undefined4 **)(in_ECX + 8);
    param_1 = param_1 - iVar6;
    if ((uint)(*(int *)(in_ECX + 0xc) - (int)puVar5 >> 2) < param_1) {
      if ((iVar3 == 0) || (uVar2 = (int)puVar5 - iVar3 >> 2, uVar2 <= param_1)) {
        uVar2 = param_1;
      }
      iVar6 = FUN_2008c740();
      iVar6 = iVar6 + uVar2;
      iVar3 = iVar6;
      if (iVar6 < 0) {
        iVar3 = 0;
      }
      pvVar4 = operator_new(iVar3 * 4);
      iVar3 = FUN_2008dea0(*(undefined4 *)(in_ECX + 4),puVar5,pvVar4);
      FUN_200a9240(iVar3,param_1,param_2);
      FUN_2008dea0(puVar5,*(undefined4 *)(in_ECX + 8),iVar3 + param_1 * 4);
      FUN_2008c730(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
      *(void **)(in_ECX + 0xc) = (void *)((int)pvVar4 + iVar6 * 4);
      iVar3 = FUN_2008c740();
      *(void **)(in_ECX + 4) = pvVar4;
      *(void **)(in_ECX + 8) = (void *)((int)pvVar4 + (iVar3 + param_1) * 4);
      return;
    }
    if (param_1 != 0) {
      FUN_2008dea0(puVar5,puVar5,puVar5 + param_1);
      FUN_200a9240(*(int *)(in_ECX + 8),param_1 - (*(int *)(in_ECX + 8) - (int)puVar5 >> 2),param_2)
      ;
      puVar1 = *(undefined4 **)(in_ECX + 8);
      for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        *puVar5 = *param_2;
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_1 * 4;
      return;
    }
  }
  else if ((iVar3 != 0) && (param_1 < (uint)(*(int *)(in_ECX + 8) - iVar3 >> 2))) {
    *(uint *)(in_ECX + 8) = iVar3 + param_1 * 4;
  }
  return;
}

