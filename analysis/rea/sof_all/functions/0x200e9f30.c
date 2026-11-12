// rea decompile_all
// name: FUN_200e9f30
// address: 0x200e9f30
// body: available
// range: 0x200e9f30-0x200ea0e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e9f30(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  int *piVar8;
  
  iVar4 = FUN_200c66a0();
  iVar5 = FUN_200c66d0();
  iVar1 = in_ECX[0xd];
  iVar5 = iVar5 + in_ECX[0x20];
  in_ECX[0xd] = 0;
  if ((in_ECX[0x11] != 0) && (cVar3 = FUN_2004b3c0(1), cVar3 != '\0')) {
    (**(code **)(*(int *)in_ECX[0x11] + 0x24))(1);
    return;
  }
  piVar8 = *(int **)in_ECX[0x27];
  if (piVar8 != (int *)in_ECX[0x27]) {
    do {
      FUN_200ceb40();
      if (((*(char *)((int)in_ECX + 0x89) != '\0') ||
          ((((-1 < iVar4 && (in_ECX[0x20] <= iVar5)) &&
            (iVar7 = *in_ECX, iVar6 = FUN_200c64f0(), iVar4 <= *(int *)(iVar7 + 0x48) + iVar6 * -2))
           && (iVar7 = *in_ECX, iVar6 = FUN_200c64f0(),
              iVar5 <= *(int *)(iVar7 + 0x4c) + iVar6 * -2 + in_ECX[0x20])))) &&
         ((((piVar2 = (int *)piVar8[2], piVar2[3] <= iVar4 && (iVar4 <= piVar2[10] + -1 + piVar2[3])
            ) && (piVar2[4] <= iVar5)) &&
          (iVar7 = (**(code **)(*piVar2 + 4))(), iVar5 <= iVar7 + -1)))) {
        FUN_200ceb60();
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)in_ECX[0x27]);
  }
  *(int *)(*(int *)*in_ECX + 0xbc) = in_ECX[0xd];
  iVar4 = in_ECX[0xd];
  if (iVar4 != 0) {
    if ((*(int *)(iVar4 + 0x74) != 0) && (iVar4 != iVar1)) {
      FUN_200c6a50(iVar4,in_ECX[0x20]);
    }
    if (0.2 <= *(float *)(*(int *)(*(int *)*in_ECX + 0x14) + 0x28) -
               *(float *)(*(int *)(*(int *)*in_ECX + 0x14) + 0x2c)) {
      cVar3 = FUN_2004b3c0(1);
      if (cVar3 != '\0') {
        (**(code **)(*(int *)in_ECX[0xd] + 0x24))(1);
        return;
      }
      cVar3 = FUN_2004b3c0(2);
      if (cVar3 != '\0') {
        (**(code **)(*(int *)in_ECX[0xd] + 0x24))(2);
        return;
      }
      cVar3 = FUN_2004b3c0(3);
      if (cVar3 != '\0') {
        (**(code **)(*(int *)in_ECX[0xd] + 0x24))(3);
      }
    }
  }
  return;
}

