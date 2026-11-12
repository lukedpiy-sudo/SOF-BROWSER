// rea decompile_all
// name: FUN_2008a5b0
// address: 0x2008a5b0
// body: available
// range: 0x2008a5b0-0x2008a694 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008a5b0(uint param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)**(int **)(param_2 + 4);
  if (piVar1 != *(int **)(param_2 + 4)) {
    do {
      iVar2 = *(int *)((param_1 & 0xffff) * 8 + -8 + *(int *)(in_ECX + 0x5c)) * 2;
      iVar4 = (int)*(short *)(*(int *)(*(int *)(in_ECX + 0xa0) + -0xc +
                                      (uint)*(ushort *)(piVar1 + 3) * 0x14) + iVar2);
      if (((-1 < iVar4) &&
          (iVar5 = (int)*(short *)(*(int *)(*(int *)(in_ECX + 0xc0) + -0xc +
                                           (uint)*(ushort *)(piVar1 + 6) * 0x14) + iVar2),
          -1 < iVar5)) &&
         ((iVar3 = -1, *(ushort *)(piVar1 + 4) == 0 ||
          (iVar3 = (int)*(short *)(*(int *)(*(int *)(in_ECX + 0x80) + -0xc +
                                           (uint)*(ushort *)(piVar1 + 4) * 0x18) + iVar2),
          -1 < iVar3)))) {
        *(undefined4 *)(param_3[3] + 8 + ((param_3[1] + 1) * iVar4 + iVar3) * 8) = *param_3;
        *(int *)(param_3[3] + 0xc + ((param_3[1] + 1) * iVar4 + iVar3) * 8) = iVar5;
      }
      FUN_20027950();
    } while (piVar1 != (int *)*(int *)(param_2 + 4));
  }
  return;
}

