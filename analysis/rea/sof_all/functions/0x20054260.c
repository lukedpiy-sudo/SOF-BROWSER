// rea decompile_all
// name: FUN_20054260
// address: 0x20054260
// body: available
// range: 0x20054260-0x20054465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20054260(void)

{
  uint uVar1;
  float fVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  char *pcVar12;
  short asStack_94 [6];
  float local_88 [6];
  char acStack_70 [56];
  undefined1 local_38 [56];
  
  iVar9 = 10;
  do {
    uVar3 = __ftol();
    iVar11 = iVar9 + 2;
    *(undefined2 *)(iVar9 + (int)DAT_20390290) = uVar3;
    iVar9 = iVar11;
  } while (iVar11 < 0x10);
  iVar9 = 4;
  iVar11 = 0;
  do {
    piVar8 = DAT_20390290;
    if (*(float *)((int)&DAT_20390220 + iVar11) < 0.0) {
      *(undefined4 *)((int)asStack_94 + iVar11) = 0xffffffff;
    }
    else {
      *(undefined4 *)((int)asStack_94 + iVar11) = 1;
    }
    uVar3 = __ftol();
    *(undefined2 *)(iVar9 + (int)piVar8) = uVar3;
    if (*(float *)((int)&DAT_20390220 + iVar11) ==
        (float)(int)*(short *)(iVar9 + (int)DAT_20390290) * 0.125) {
      *(undefined4 *)((int)asStack_94 + iVar11) = 0;
    }
    iVar9 = iVar9 + 2;
    iVar11 = iVar11 + 4;
  } while (iVar9 < 10);
  uVar3 = *(undefined2 *)((int)DAT_20390290 + 6);
  iVar9 = DAT_20390290[2];
  iVar11 = DAT_20390290[1];
  puVar10 = &DAT_20137614;
  while( true ) {
    uVar1 = *puVar10;
    *(short *)(DAT_20390290 + 1) = (short)iVar11;
    *(undefined2 *)((int)DAT_20390290 + 6) = uVar3;
    iVar4 = 4;
    *(short *)(DAT_20390290 + 2) = (short)iVar9;
    iVar7 = 0;
    do {
      if ((uVar1 & 1 << ((byte)iVar7 & 0x1f)) != 0) {
        *(short *)(iVar4 + (int)DAT_20390290) =
             *(short *)(iVar4 + (int)DAT_20390290) + asStack_94[iVar7 * 2];
      }
      iVar4 = iVar4 + 2;
      iVar7 = iVar7 + 1;
    } while (iVar4 < 10);
    if ((0 < *DAT_20390290) && (*DAT_20390290 < 3)) break;
    piVar8 = DAT_20390290 + 1;
    iVar4 = 0;
    do {
      iVar7 = *piVar8;
      iVar5 = iVar4 + 4;
      piVar8 = (int *)((int)piVar8 + 2);
      fVar2 = (float)(int)(short)iVar7 * 0.125;
      *(float *)((int)local_88 + iVar4) = fVar2;
      *(float *)((int)local_88 + iVar4 + 0xc) = fVar2;
      iVar4 = iVar5;
    } while (iVar5 < 0xc);
    puVar6 = (undefined4 *)
             (*(code *)DAT_20390290[0x3c])
                       (local_38,local_88 + 3,DAT_20390290 + 0x33,DAT_20390290 + 0x36,local_88);
    pcVar12 = acStack_70;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      pcVar12 = pcVar12 + 4;
    }
    if (acStack_70[0] == '\0') {
      return;
    }
    puVar10 = puVar10 + 1;
    if (0x20137633 < (int)puVar10) {
      uVar3 = __ftol();
      *(undefined2 *)(DAT_20390290 + 1) = uVar3;
      uVar3 = __ftol();
      *(undefined2 *)((int)DAT_20390290 + 6) = uVar3;
      uVar3 = __ftol();
      *(undefined2 *)(DAT_20390290 + 2) = uVar3;
      return;
    }
  }
  return;
}

