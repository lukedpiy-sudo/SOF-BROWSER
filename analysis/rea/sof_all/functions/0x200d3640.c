// rea decompile_all
// name: FUN_200d3640
// address: 0x200d3640
// body: available
// range: 0x200d3640-0x200d382a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d3640(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x50);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  uVar2 = *(uint *)(in_ECX + 0xa8);
  if (uVar2 != 0) {
    uVar8 = __ftol();
    if (*(int *)(in_ECX + 0x9c) == 0) {
      uVar8 = uVar8 & ~uVar2;
    }
    else {
      uVar8 = uVar8 | uVar2;
    }
    Cvar_SetValue(*puVar1,(float)(int)uVar8);
    return;
  }
  if ((*(int *)(in_ECX + 0xc0) == 0) ||
     (*(int *)(in_ECX + 0xc4) - *(int *)(in_ECX + 0xc0) >> 4 == 0)) {
    Cvar_SetValue(*puVar1,(float)*(int *)(in_ECX + 0x9c));
  }
  else {
    puVar9 = *(undefined1 **)(*(int *)(in_ECX + 0x9c) * 0x10 + *(int *)(in_ECX + 0xc0) + 4);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_201116cc;
    }
    Cvar_Set(*puVar1,puVar9);
  }
  puVar9 = *(undefined1 **)(*(int *)(in_ECX + 0x9c) * 0x10 + *(int *)(in_ECX + 0xb0) + 4);
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = &DAT_201116cc;
  }
  iVar10 = (*DAT_2040363c)(puVar9,in_ECX + 0x8c);
  *(int *)(in_ECX + 0x20) = iVar10 + *(int *)(in_ECX + 0xa0);
  iVar10 = __ftol();
  *(int *)(in_ECX + 0x28) = iVar10;
  if (*(int *)(in_ECX + 0x80) == 1) {
    if (*(int *)(in_ECX + 0x4c) == 1) {
      *(int *)(in_ECX + 0x14) = -iVar10 >> 1;
    }
    else if (*(int *)(in_ECX + 0x4c) == 3) {
      *(int *)(in_ECX + 0x14) = -iVar10;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x4c) == 1) {
      iVar10 = **(int **)(in_ECX + 4);
      iVar11 = FUN_200c64f0();
      iVar10 = *(int *)(iVar10 + 0x48);
      iVar12 = FUN_200e6cb0();
      iVar10 = ((iVar10 + iVar11 * -2) - iVar12) - *(int *)(in_ECX + 0x28) >> 1;
    }
    else {
      if (*(int *)(in_ECX + 0x4c) != 3) goto LAB_200d37c6;
      iVar10 = **(int **)(in_ECX + 4);
      iVar11 = FUN_200c64f0();
      iVar10 = *(int *)(iVar10 + 0x48);
      iVar12 = FUN_200e6cb0();
      iVar10 = ((iVar10 + iVar11 * -2) - iVar12) - *(int *)(in_ECX + 0x28);
    }
    *(int *)(in_ECX + 0xc) = iVar10;
  }
LAB_200d37c6:
  if (*(int *)(in_ECX + 0x68) != 0) {
    piVar3 = (int *)**(int **)(in_ECX + 4);
    iVar10 = *(int *)(*piVar3 + 0xa0);
    iVar13 = FUN_200c64f0();
    iVar11 = piVar3[0x11];
    iVar12 = *(int *)(in_ECX + 0x10);
    piVar3 = (int *)**(int **)(in_ECX + 4);
    iVar4 = *(int *)(*piVar3 + 0x9c);
    iVar14 = FUN_200c64f0();
    uVar5 = *(undefined4 *)(in_ECX + 0x2c);
    uVar6 = *(undefined4 *)(in_ECX + 0x28);
    iVar7 = *(int *)(in_ECX + 0x68);
    *(int *)(iVar7 + 0x10) = iVar14 + piVar3[0x10] + *(int *)(in_ECX + 0xc) + iVar4;
    *(int *)(iVar7 + 0x14) = iVar13 + iVar11 + iVar12 + iVar10;
    *(undefined4 *)(iVar7 + 0x18) = uVar6;
    *(undefined4 *)(iVar7 + 0x1c) = uVar5;
  }
  return;
}

