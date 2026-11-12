// rea decompile_all
// name: FUN_200c10b0
// address: 0x200c10b0
// body: available
// range: 0x200c10b0-0x200c11b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200c10da) */
/* WARNING: Removing unreachable block (ram,0x200c1159) */

void FUN_200c10b0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_5;
  int local_4;
  
  piVar5 = (int *)**(int **)(in_ECX + 4);
  local_4 = in_ECX;
  if (piVar5 != *(int **)(in_ECX + 4)) {
    do {
      iVar2 = piVar5[7];
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0x4c);
      local_5 = 0;
      if (*(int *)(iVar2 + 0x3c) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c)) / 0x14;
      }
      iVar7 = *(int *)(iVar2 + 0x4c);
      if (iVar7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(iVar2 + 0x50) - iVar7;
      }
      if (uVar6 < uVar4) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar2 + 0x50) - iVar7;
        }
        FUN_2009dd40(*(undefined4 *)(iVar2 + 0x50),uVar4 - iVar7,&local_5);
      }
      else if ((iVar7 != 0) && (uVar4 < (uint)(*(int *)(iVar2 + 0x50) - iVar7))) {
        *(uint *)(iVar2 + 0x50) = iVar7 + uVar4;
      }
      piVar3 = (int *)piVar5[2];
      if (*(char *)((int)piVar3 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x21);
        piVar5 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x21);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        piVar3 = (int *)piVar5[1];
        if (piVar5 == (int *)piVar3[2]) {
          do {
            piVar5 = piVar3;
            piVar3 = (int *)piVar5[1];
          } while (piVar5 == (int *)piVar3[2]);
        }
        if ((int *)piVar5[2] != piVar3) {
          piVar5 = piVar3;
        }
      }
    } while (piVar5 != *(int **)(local_4 + 4));
  }
  return;
}

