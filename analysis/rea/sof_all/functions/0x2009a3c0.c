// rea decompile_all
// name: FUN_2009a3c0
// address: 0x2009a3c0
// body: available
// range: 0x2009a3c0-0x2009a638 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2009a3c0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  char *in_ECX;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined1 local_c [12];
  
  FUN_20068ef0(param_1);
  if (*in_ECX != '\0') {
    FUN_20069200(param_1,in_ECX + 4,0xc);
    return 1;
  }
  uVar2 = FUN_20068dc0(param_1);
  if (*(int *)(in_ECX + 0x14) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x14)) / 0xc;
  }
  if (uVar5 < uVar2) {
    uVar5 = uVar2;
    if ((int)uVar2 < 0) {
      uVar5 = 0;
    }
    pvVar3 = operator_new(uVar5 * 0xc);
    iVar1 = *(int *)(in_ECX + 0x18);
    pvVar7 = pvVar3;
    for (iVar6 = *(int *)(in_ECX + 0x14); iVar6 != iVar1; iVar6 = iVar6 + 0xc) {
      FUN_20087660(pvVar7,iVar6);
      pvVar7 = (void *)((int)pvVar7 + 0xc);
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0x14));
    *(void **)(in_ECX + 0x1c) = (void *)((int)pvVar3 + uVar2 * 0xc);
    iVar6 = FUN_200b93c0();
    *(void **)(in_ECX + 0x14) = pvVar3;
    *(void **)(in_ECX + 0x18) = (void *)((int)pvVar3 + iVar6 * 0xc);
  }
  iVar6 = *(int *)(in_ECX + 0x18);
  iVar1 = *(int *)(in_ECX + 0x14);
  if ((uint)((*(int *)(in_ECX + 0x1c) - iVar6) / 0xc) < uVar2) {
    if ((*(int *)(in_ECX + 0x14) == 0) ||
       (uVar5 = (iVar6 - *(int *)(in_ECX + 0x14)) / 0xc, uVar5 <= uVar2)) {
      uVar5 = uVar2;
    }
    iVar4 = FUN_200b93c0();
    iVar4 = iVar4 + uVar5;
    iVar6 = iVar4;
    if (iVar4 < 0) {
      iVar6 = 0;
    }
    pvVar7 = operator_new(iVar6 * 0xc);
    iVar6 = FUN_20068c60(*(undefined4 *)(in_ECX + 0x14),iVar1,pvVar7);
    FUN_20068ca0(iVar6,uVar2,local_c);
    FUN_20068c60(iVar1,*(undefined4 *)(in_ECX + 0x18),iVar6 + uVar2 * 0xc);
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0x14));
    *(void **)(in_ECX + 0x1c) = (void *)((int)pvVar7 + iVar4 * 0xc);
    iVar6 = FUN_200b93c0();
    *(void **)(in_ECX + 0x14) = pvVar7;
    *(void **)(in_ECX + 0x18) = (void *)((int)pvVar7 + (iVar6 + uVar2) * 0xc);
  }
  else {
    if ((uint)((iVar6 - iVar1) / 0xc) < uVar2) {
      FUN_20068c60(iVar1,iVar6,iVar1 + uVar2 * 0xc);
      FUN_20068ca0(*(int *)(in_ECX + 0x18),uVar2 - (*(int *)(in_ECX + 0x18) - iVar1) / 0xc,local_c);
      FUN_20068cd0(iVar1,*(undefined4 *)(in_ECX + 0x18),local_c);
    }
    else {
      if (uVar2 == 0) goto LAB_2009a615;
      FUN_20068c60(iVar6 + uVar2 * -0xc,iVar6,iVar6);
      FUN_20068d00(iVar1,*(int *)(in_ECX + 0x18) + uVar2 * -0xc,*(int *)(in_ECX + 0x18));
      FUN_20068cd0(iVar1,iVar1 + uVar2 * 0xc,local_c);
    }
    *(uint *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + uVar2 * 0xc;
  }
LAB_2009a615:
  FUN_20069200(param_1,*(undefined4 *)(in_ECX + 0x14),uVar2 * 0xc);
  return 1;
}

