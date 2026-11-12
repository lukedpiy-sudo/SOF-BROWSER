// rea decompile_all
// name: FUN_200c2430
// address: 0x200c2430
// body: available
// range: 0x200c2430-0x200c26a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200c2430(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  char *in_ECX;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  int local_10;
  char *local_c;
  void *local_8;
  int local_4;
  
  local_c = in_ECX;
  FUN_20068ef0(param_1);
  if (*in_ECX == '\0') {
    FUN_20068e30(param_1,in_ECX + 4);
    iVar1 = *(int *)(in_ECX + 4) + 0x1f;
    uVar6 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
    if (*(int *)(in_ECX + 0xc) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0xc) >> 2;
    }
    pcVar7 = in_ECX;
    if (uVar4 < uVar6) {
      uVar4 = uVar6;
      if ((int)uVar6 < 0) {
        uVar4 = 0;
      }
      pvVar2 = operator_new(uVar4 << 2);
      iVar1 = *(int *)(in_ECX + 0xc);
      local_10 = *(int *)(in_ECX + 0x10);
      local_8 = pvVar2;
      if (iVar1 != local_10) {
        do {
          FUN_200a9420(pvVar2,iVar1);
          iVar1 = iVar1 + 4;
          pvVar2 = (void *)((int)pvVar2 + 4);
        } while (iVar1 != local_10);
      }
      FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc));
      *(void **)(in_ECX + 0x14) = (void *)((int)local_8 + uVar6 * 4);
      if (*(int *)(in_ECX + 0xc) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc) >> 2;
      }
      *(void **)(in_ECX + 0x10) = (void *)((int)local_8 + iVar1 * 4);
      *(void **)(in_ECX + 0xc) = local_8;
      pcVar7 = local_c;
    }
    iVar1 = *(int *)(in_ECX + 0x10);
    piVar8 = *(int **)(pcVar7 + 0xc);
    local_10 = 0;
    if ((uint)(*(int *)(in_ECX + 0x14) - iVar1 >> 2) < uVar6) {
      if ((*(int *)(in_ECX + 0xc) == 0) ||
         (uVar4 = iVar1 - *(int *)(in_ECX + 0xc) >> 2, uVar4 <= uVar6)) {
        uVar4 = uVar6;
      }
      local_4 = FUN_2008c740();
      local_4 = local_4 + uVar4;
      iVar1 = local_4;
      if (local_4 < 0) {
        iVar1 = 0;
      }
      pvVar2 = operator_new(iVar1 * 4);
      local_8 = (void *)FUN_2008dea0(*(undefined4 *)(in_ECX + 0xc),piVar8,pvVar2);
      FUN_200a9240(local_8,uVar6,&local_10);
      FUN_2008dea0(piVar8,*(undefined4 *)(in_ECX + 0x10),(void *)((int)local_8 + uVar6 * 4));
      FUN_2008c730(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc));
      *(void **)(in_ECX + 0x14) = (void *)((int)pvVar2 + local_4 * 4);
      iVar1 = FUN_2008c740();
      *(void **)(in_ECX + 0xc) = pvVar2;
      *(void **)(in_ECX + 0x10) = (void *)((int)pvVar2 + (iVar1 + uVar6) * 4);
      pcVar7 = local_c;
    }
    else if ((uint)(iVar1 - (int)piVar8 >> 2) < uVar6) {
      FUN_2008dea0(piVar8,iVar1,piVar8 + uVar6);
      FUN_200a9240(*(int *)(in_ECX + 0x10),uVar6 - (*(int *)(in_ECX + 0x10) - (int)piVar8 >> 2),
                   &local_10);
      piVar5 = *(int **)(in_ECX + 0x10);
      for (; piVar8 != piVar5; piVar8 = piVar8 + 1) {
        *piVar8 = local_10;
      }
      *(uint *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + uVar6 * 4;
    }
    else if (uVar6 != 0) {
      FUN_2008dea0(iVar1 + uVar6 * -4,iVar1,iVar1);
      piVar5 = *(int **)(in_ECX + 0x10);
      for (piVar3 = piVar5 + -uVar6; piVar8 != piVar3; piVar3 = piVar3 + -1) {
        piVar5 = piVar5 + -1;
        *piVar5 = piVar3[-1];
      }
      piVar5 = piVar8 + uVar6;
      for (; piVar8 != piVar5; piVar8 = piVar8 + 1) {
        *piVar8 = local_10;
      }
      *(uint *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + uVar6 * 4;
      pcVar7 = local_c;
    }
    FUN_20069200(param_1,*(undefined4 *)(pcVar7 + 0xc),uVar6 * 4);
    return 1;
  }
  FUN_20068ef0(param_1,in_ECX + 2);
  return 1;
}

