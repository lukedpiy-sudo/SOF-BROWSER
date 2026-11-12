// rea decompile_all
// name: FUN_200d5610
// address: 0x200d5610
// body: available
// range: 0x200d5610-0x200d56e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200d5610(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int in_ECX;
  
  iVar8 = **(int **)(in_ECX + 4);
  iVar7 = FUN_200c64f0();
  iVar1 = **(int **)(in_ECX + 4);
  iVar7 = *(int *)(iVar8 + 0x4c) + *(int *)(in_ECX + 0xb8) * -2 + iVar7 * -2;
  iVar8 = FUN_200c64f0();
  iVar8 = *(int *)(iVar1 + 0x4c) + iVar8 * -2 + -6;
  if ((0 < iVar7) && (0 < iVar8)) {
    iVar1 = (*(int **)(in_ECX + 4))[0x1f];
    if (0 < iVar1) {
      *(int *)(in_ECX + 0xb0) = (iVar8 * iVar7) / iVar1;
      iVar8 = 0;
      if (*(int *)(in_ECX + 0x68) != 0) {
        piVar2 = (int *)**(int **)(in_ECX + 4);
        iVar1 = *(int *)(*piVar2 + 0xa0);
        iVar9 = FUN_200c64f0();
        iVar7 = piVar2[0x11];
        iVar3 = *(int *)(in_ECX + 0x10);
        piVar2 = (int *)**(int **)(in_ECX + 4);
        iVar8 = *(int *)(*piVar2 + 0x9c);
        iVar10 = FUN_200c64f0();
        uVar4 = *(undefined4 *)(in_ECX + 0x2c);
        uVar5 = *(undefined4 *)(in_ECX + 0x28);
        iVar6 = *(int *)(in_ECX + 0x68);
        iVar8 = iVar10 + piVar2[0x10] + *(int *)(in_ECX + 0xc) + iVar8;
        *(int *)(iVar6 + 0x10) = iVar8;
        *(int *)(iVar6 + 0x14) = iVar9 + iVar7 + iVar3 + iVar1;
        *(undefined4 *)(iVar6 + 0x18) = uVar5;
        *(undefined4 *)(iVar6 + 0x1c) = uVar4;
      }
      return CONCAT31((int3)((uint)iVar8 >> 8),1);
    }
  }
  uVar11 = FUN_200eb490(param_1,s_Cleanup___Page_too_small_to_plac_20158c3c);
  return uVar11 & 0xffffff00;
}

