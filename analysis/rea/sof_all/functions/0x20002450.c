// rea decompile_all
// name: FUN_20002450
// address: 0x20002450
// body: available
// range: 0x20002450-0x2000259f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20002450(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar1 = param_2 * 0x18c;
  uVar5 = DAT_201e7598 & 0x3ff;
  DAT_201e7598 = DAT_201e7598 + 1;
  iVar7 = uVar5 * 0x74;
  puVar9 = (undefined4 *)(&DAT_201ca530 + iVar7);
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  FUN_20002120(param_3,puVar9,param_2,param_4);
  if ((*(int *)(&DAT_201ca550 + iVar7) == *(int *)(&DAT_2015ef8c + iVar1)) &&
     (*(int *)(&DAT_201ca554 + iVar7) == *(int *)(&DAT_2015ef90 + iVar1))) {
    uVar5 = __ftol();
    if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0x201) {
      uVar5 = __ftol();
      if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0x201) {
        uVar5 = __ftol();
        if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0x201) goto LAB_20002521;
      }
    }
  }
  *(undefined4 *)(&DAT_2015f054 + iVar1) = 0xffffff9d;
LAB_20002521:
  iVar4 = DAT_201e7e64;
  iVar6 = 0x1d;
  if (*(int *)(&DAT_2015f054 + iVar1) == DAT_201e7e64 + -1) {
    puVar8 = (undefined4 *)(&DAT_2015ef6c + iVar1);
    puVar10 = (undefined4 *)(&DAT_2015efe0 + iVar1);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  else {
    uVar2 = *(undefined4 *)(&DAT_201ca534 + iVar7);
    puVar8 = puVar9;
    puVar10 = (undefined4 *)(&DAT_2015efe0 + iVar1);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar3 = *(undefined4 *)(&DAT_201ca538 + iVar7);
    *(undefined4 *)(&DAT_2015efe4 + iVar1) = uVar2;
    uVar2 = *(undefined4 *)(&DAT_201ca53c + iVar7);
    *(undefined4 *)(&DAT_2015efe8 + iVar1) = uVar3;
    uVar3 = *(undefined4 *)(&DAT_201ca534 + iVar7);
    *(undefined4 *)(&DAT_2015efec + iVar1) = uVar2;
    uVar2 = *(undefined4 *)(&DAT_201ca538 + iVar7);
    *(undefined4 *)(&DAT_2015f058 + iVar1) = uVar3;
    uVar3 = *(undefined4 *)(&DAT_201ca53c + iVar7);
    *(undefined4 *)(&DAT_2015f05c + iVar1) = uVar2;
    *(undefined4 *)(&DAT_2015f060 + iVar1) = uVar3;
    *(undefined4 *)(&DAT_2015f078 + iVar1) = 0xc2c60000;
  }
  *(int *)(&DAT_2015f054 + iVar1) = iVar4;
  puVar8 = (undefined4 *)(&DAT_2015ef6c + iVar1);
  for (iVar7 = 0x1d; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  return;
}

