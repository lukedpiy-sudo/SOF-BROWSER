// rea decompile_all
// name: FUN_20099fd0
// address: 0x20099fd0
// body: available
// range: 0x20099fd0-0x2009a1ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2009a1b0) */
/* WARNING: Removing unreachable block (ram,0x2009a177) */
/* WARNING: Removing unreachable block (ram,0x2009a147) */
/* WARNING: Removing unreachable block (ram,0x2009a161) */
/* WARNING: Removing unreachable block (ram,0x2009a170) */
/* WARNING: Removing unreachable block (ram,0x2009a183) */

void FUN_20099fd0(uint param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  char *in_ECX;
  int iVar6;
  undefined4 *puVar7;
  
  if (*in_ECX == '\0') {
    iVar4 = *(int *)(in_ECX + 0xc);
    pcVar1 = in_ECX + 4;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(in_ECX + 0x10) - iVar4 >> 2;
    }
    if (uVar3 < param_1) {
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(in_ECX + 0x10) - iVar4 >> 2;
      }
      puVar7 = *(undefined4 **)(in_ECX + 0x10);
      param_1 = param_1 - iVar6;
      if ((uint)(*(int *)(in_ECX + 0x14) - (int)puVar7 >> 2) < param_1) {
        uVar3 = param_1;
        if ((iVar4 != 0) && (param_1 < (uint)((int)puVar7 - iVar4 >> 2))) {
          uVar3 = FUN_2008c740();
        }
        iVar6 = FUN_2008c740();
        iVar6 = iVar6 + uVar3;
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = 0;
        }
        pvVar5 = operator_new(iVar4 << 2);
        iVar4 = FUN_2008dea0(*(undefined4 *)(in_ECX + 0xc),puVar7,pvVar5);
        FUN_200a9240(iVar4,param_1,pcVar1);
        FUN_2008dea0(puVar7,*(undefined4 *)(in_ECX + 0x10),iVar4 + param_1 * 4);
        FUN_2008c730(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10));
        FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc));
        *(void **)(in_ECX + 0x14) = (void *)((int)pvVar5 + iVar6 * 4);
        iVar4 = FUN_2008c740();
        *(void **)(in_ECX + 0xc) = pvVar5;
        *(void **)(in_ECX + 0x10) = (void *)((int)pvVar5 + (iVar4 + param_1) * 4);
        return;
      }
      if (param_1 != 0) {
        FUN_2008dea0(puVar7,puVar7,puVar7 + param_1);
        FUN_200a9240(*(int *)(in_ECX + 0x10),param_1 - (*(int *)(in_ECX + 0x10) - (int)puVar7 >> 2),
                     pcVar1);
        puVar2 = *(undefined4 **)(in_ECX + 0x10);
        for (; puVar7 != puVar2; puVar7 = puVar7 + 1) {
          *puVar7 = *(undefined4 *)pcVar1;
        }
        *(uint *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + param_1 * 4;
        return;
      }
    }
    else if ((iVar4 != 0) && (param_1 < (uint)(*(int *)(in_ECX + 0x10) - iVar4 >> 2))) {
      *(uint *)(in_ECX + 0x10) = iVar4 + param_1 * 4;
    }
  }
  return;
}

