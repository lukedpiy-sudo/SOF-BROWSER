// rea decompile_all
// name: FUN_200ca3d0
// address: 0x200ca3d0
// body: available
// range: 0x200ca3d0-0x200ca549 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ca3d0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  
  iVar4 = *(int *)(in_ECX + 0xc4);
  if ((iVar4 == 0) || (iVar7 = *(int *)(in_ECX + 200) - iVar4 >> 2, iVar7 == 0)) {
    return;
  }
  for (uVar6 = 0; (iVar4 != 0 && (uVar6 < (uint)(*(int *)(in_ECX + 200) - iVar4 >> 2)));
      uVar6 = uVar6 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0xc4) + uVar6 * 4) == *(int *)(in_ECX + 0xbc)) goto LAB_200ca428;
  }
  uVar6 = *(uint *)(in_ECX + 0xb4);
LAB_200ca428:
  *(uint *)(in_ECX + 0xb4) = uVar6;
  while( true ) {
    cVar3 = FUN_2004b3c0(0x10);
    if ((cVar3 == '\0') && (cVar3 = FUN_2004b3c0(0x15), cVar3 == '\0')) {
      *(int *)(in_ECX + 0xb4) = *(int *)(in_ECX + 0xb4) + 1;
    }
    else {
      iVar4 = *(int *)(in_ECX + 0xb4) + -1;
      *(int *)(in_ECX + 0xb4) = iVar4;
      if (iVar4 < 0) {
        if (*(int *)(in_ECX + 0xc4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 2;
        }
        *(int *)(in_ECX + 0xb4) = iVar4 + iVar5;
      }
    }
    if (*(int *)(in_ECX + 0xc4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 2;
    }
    uVar6 = *(uint *)(in_ECX + 0xb4) % uVar6;
    iVar7 = iVar7 + -1;
    *(uint *)(in_ECX + 0xb4) = uVar6;
    piVar1 = *(int **)(*(int *)(in_ECX + 0xc4) + uVar6 * 4);
    cVar3 = (**(code **)(*piVar1 + 0x30))();
    if (cVar3 != '\0') break;
    if (iVar7 == 0) {
      return;
    }
  }
  if (iVar7 == 0) {
    return;
  }
  piVar2 = *(int **)piVar1[1];
  iVar4 = *(int *)(*piVar2 + 0x9c);
  iVar7 = FUN_200c64f0();
  FUN_200cbea0(iVar7 + (piVar1[10] >> 1) + piVar2[0x10] + piVar1[3] + iVar4);
  piVar2 = *(int **)piVar1[1];
  iVar4 = ((int *)piVar1[1])[0x20];
  iVar7 = *(int *)(*piVar2 + 0xa0);
  iVar5 = FUN_200c64f0();
  FUN_200cbeb0((((piVar1[0xb] >> 1) + piVar2[0x11] + piVar1[4]) - iVar4) + iVar7 + iVar5);
  return;
}

