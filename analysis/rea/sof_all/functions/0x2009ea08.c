// rea decompile_all
// name: FUN_2009ea08
// address: 0x2009ea08
// body: available
// range: 0x2009ea08-0x2009ecbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2009ea08(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int unaff_EDI;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  
  uVar2 = FUN_20068dc0();
  if (*(int *)(unaff_EDI + 0x4c) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(unaff_EDI + 0x54) - *(int *)(unaff_EDI + 0x4c)) / 0x44;
  }
  iVar7 = unaff_EDI;
  if (uVar5 < uVar2) {
    uVar5 = uVar2;
    if ((int)uVar2 < 0) {
      uVar5 = 0;
    }
    pvVar3 = operator_new(uVar5 * 0x44);
    iVar4 = *(int *)(unaff_EDI + 0x50);
    pvVar10 = pvVar3;
    for (iVar7 = *(int *)(unaff_EDI + 0x4c); iVar7 != iVar4; iVar7 = iVar7 + 0x44) {
      FUN_20093840(pvVar10,iVar7);
      pvVar10 = (void *)((int)pvVar10 + 0x44);
    }
    FUN_200f9f75(*(undefined4 *)(unaff_EDI + 0x4c));
    *(void **)(unaff_EDI + 0x54) = (void *)((int)pvVar3 + uVar2 * 0x44);
    iVar7 = FUN_200921b0();
    *(void **)(unaff_EDI + 0x4c) = pvVar3;
    *(void **)(unaff_EDI + 0x50) = (void *)((int)pvVar3 + iVar7 * 0x44);
    iVar7 = param_3;
  }
  iVar4 = *(int *)(unaff_EDI + 0x50);
  puVar1 = *(undefined4 **)(iVar7 + 0x4c);
  in_stack_00000058 = 0;
  if ((uint)((*(int *)(unaff_EDI + 0x54) - iVar4) / 0x44) < uVar2) {
    if ((*(int *)(unaff_EDI + 0x4c) == 0) ||
       (uVar5 = (iVar4 - *(int *)(unaff_EDI + 0x4c)) / 0x44, uVar5 <= uVar2)) {
      uVar5 = uVar2;
    }
    iVar4 = FUN_200921b0();
    iVar4 = iVar4 + uVar5;
    iVar7 = iVar4;
    if (iVar4 < 0) {
      iVar7 = 0;
    }
    pvVar10 = operator_new(iVar7 * 0x44);
    iVar7 = FUN_200937d0(*(undefined4 *)(unaff_EDI + 0x4c),puVar1,pvVar10);
    FUN_20093810(iVar7,uVar2,&stack0x00000018);
    FUN_200937d0(puVar1,*(undefined4 *)(unaff_EDI + 0x50),iVar7 + uVar2 * 0x44);
    FUN_200f9f75(*(undefined4 *)(unaff_EDI + 0x4c));
    *(void **)(unaff_EDI + 0x54) = (void *)((int)pvVar10 + iVar4 * 0x44);
    iVar7 = FUN_200921b0();
    *(void **)(unaff_EDI + 0x4c) = pvVar10;
    *(void **)(unaff_EDI + 0x50) = (void *)((int)pvVar10 + (iVar7 + uVar2) * 0x44);
    iVar7 = param_3;
  }
  else {
    if ((uint)((iVar4 - (int)puVar1) / 0x44) < uVar2) {
      FUN_200937d0(puVar1,iVar4,puVar1 + uVar2 * 0x11);
      FUN_20093810(*(int *)(unaff_EDI + 0x50),
                   uVar2 - (*(int *)(unaff_EDI + 0x50) - (int)puVar1) / 0x44,&stack0x00000018);
      puVar6 = *(undefined4 **)(unaff_EDI + 0x50);
      while (puVar1 != puVar6) {
        puVar11 = puVar1 + 0x11;
        puVar9 = (undefined4 *)&stack0x00000018;
        puVar8 = puVar1;
        for (iVar7 = 0x11; puVar1 = puVar11, iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar8 = puVar8 + 1;
        }
      }
    }
    else {
      if (uVar2 == 0) goto LAB_2009ec94;
      FUN_200937d0(iVar4 + uVar2 * -0x44,iVar4,iVar4);
      puVar6 = *(undefined4 **)(unaff_EDI + 0x50);
      puVar9 = puVar6 + uVar2 * -0x11;
      while (puVar1 != puVar9) {
        puVar9 = puVar9 + -0x11;
        puVar6 = puVar6 + -0x11;
        puVar8 = puVar9;
        puVar11 = puVar6;
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      puVar6 = puVar1;
      while (puVar6 != puVar1 + uVar2 * 0x11) {
        puVar11 = puVar6 + 0x11;
        puVar9 = (undefined4 *)&stack0x00000018;
        puVar8 = puVar6;
        for (iVar7 = 0x11; puVar6 = puVar11, iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar8 = puVar8 + 1;
        }
      }
    }
    *(int *)(unaff_EDI + 0x50) = *(int *)(unaff_EDI + 0x50) + uVar2 * 0x44;
    iVar7 = param_3;
  }
LAB_2009ec94:
  FUN_20069200(in_stack_00000060,*(undefined4 *)(iVar7 + 0x4c),uVar2 * 0x44);
  return 1;
}

