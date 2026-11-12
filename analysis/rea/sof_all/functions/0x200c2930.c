// rea decompile_all
// name: FUN_200c2930
// address: 0x200c2930
// body: available
// range: 0x200c2930-0x200c2b8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200c2930(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  char *in_ECX;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int local_10;
  char *local_c;
  void *local_8;
  int local_4;
  
  local_c = in_ECX;
  FUN_20068ef0(param_1);
  if (*in_ECX != '\0') {
    FUN_20069200(param_1,in_ECX + 4,4);
    return 1;
  }
  uVar1 = FUN_20068dc0(param_1);
  if (*(int *)(in_ECX + 0xc) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0xc) >> 2;
  }
  pcVar6 = in_ECX;
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
    if ((int)uVar1 < 0) {
      uVar2 = 0;
    }
    pvVar3 = operator_new(uVar2 << 2);
    iVar7 = *(int *)(in_ECX + 0xc);
    local_10 = *(int *)(in_ECX + 0x10);
    local_8 = pvVar3;
    if (iVar7 != local_10) {
      do {
        FUN_200a9420(pvVar3,iVar7);
        iVar7 = iVar7 + 4;
        pvVar3 = (void *)((int)pvVar3 + 4);
      } while (iVar7 != local_10);
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc));
    *(void **)(in_ECX + 0x14) = (void *)((int)local_8 + uVar1 * 4);
    if (*(int *)(in_ECX + 0xc) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc) >> 2;
    }
    *(void **)(in_ECX + 0x10) = (void *)((int)local_8 + iVar7 * 4);
    *(void **)(in_ECX + 0xc) = local_8;
    pcVar6 = local_c;
  }
  iVar7 = *(int *)(in_ECX + 0x10);
  piVar8 = *(int **)(pcVar6 + 0xc);
  local_10 = 0;
  if ((uint)(*(int *)(in_ECX + 0x14) - iVar7 >> 2) < uVar1) {
    if ((*(int *)(in_ECX + 0xc) == 0) ||
       (uVar2 = iVar7 - *(int *)(in_ECX + 0xc) >> 2, uVar2 <= uVar1)) {
      uVar2 = uVar1;
    }
    local_4 = FUN_2008c740();
    local_4 = local_4 + uVar2;
    iVar7 = local_4;
    if (local_4 < 0) {
      iVar7 = 0;
    }
    pvVar3 = operator_new(iVar7 * 4);
    local_8 = (void *)FUN_2008dea0(*(undefined4 *)(in_ECX + 0xc),piVar8,pvVar3);
    FUN_200a9240(local_8,uVar1,&local_10);
    FUN_2008dea0(piVar8,*(undefined4 *)(in_ECX + 0x10),(void *)((int)local_8 + uVar1 * 4));
    FUN_2008c730(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc));
    *(void **)(in_ECX + 0x14) = (void *)((int)pvVar3 + local_4 * 4);
    iVar7 = FUN_2008c740();
    *(void **)(in_ECX + 0xc) = pvVar3;
    *(void **)(in_ECX + 0x10) = (void *)((int)pvVar3 + (iVar7 + uVar1) * 4);
    pcVar6 = local_c;
  }
  else {
    if ((uint)(iVar7 - (int)piVar8 >> 2) < uVar1) {
      FUN_2008dea0(piVar8,iVar7,piVar8 + uVar1);
      FUN_200a9240(*(int *)(in_ECX + 0x10),uVar1 - (*(int *)(in_ECX + 0x10) - (int)piVar8 >> 2),
                   &local_10);
      piVar5 = *(int **)(in_ECX + 0x10);
      for (; piVar8 != piVar5; piVar8 = piVar8 + 1) {
        *piVar8 = local_10;
      }
    }
    else {
      if (uVar1 == 0) goto LAB_200c2b69;
      FUN_2008dea0(iVar7 + uVar1 * -4,iVar7,iVar7);
      piVar5 = *(int **)(in_ECX + 0x10);
      for (piVar4 = piVar5 + -uVar1; piVar8 != piVar4; piVar4 = piVar4 + -1) {
        piVar5 = piVar5 + -1;
        *piVar5 = piVar4[-1];
      }
      piVar5 = piVar8 + uVar1;
      for (; piVar8 != piVar5; piVar8 = piVar8 + 1) {
        *piVar8 = local_10;
      }
    }
    *(uint *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + uVar1 * 4;
    pcVar6 = local_c;
  }
LAB_200c2b69:
  FUN_20069200(param_1,*(undefined4 *)(pcVar6 + 0xc),uVar1 * 4);
  return 1;
}

