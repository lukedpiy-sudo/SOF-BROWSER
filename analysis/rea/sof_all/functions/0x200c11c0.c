// rea decompile_all
// name: FUN_200c11c0
// address: 0x200c11c0
// body: available
// range: 0x200c11c0-0x200c12eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200c127f) */

void FUN_200c11c0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *local_10;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  local_10 = (int *)**(int **)(in_ECX + 4);
  local_8 = in_ECX;
  if (local_10 != *(int **)(in_ECX + 4)) {
    do {
      iVar2 = local_10[7];
      iVar6 = 0;
      for (uVar7 = 0;
          (iVar3 = *(int *)(iVar2 + 0x4c), iVar3 != 0 &&
          (uVar7 < (uint)(*(int *)(iVar2 + 0x50) - iVar3))); uVar7 = uVar7 + 1) {
        if (*(char *)(iVar3 + uVar7) == '\0') {
          iVar3 = *(int *)(iVar6 + 0x10 + *(int *)(iVar2 + 0x3c));
          if (((iVar3 != 0) &&
              (FUN_200a79f0(&local_c,iVar3), iVar3 = local_c, local_c != DAT_2040368c)) &&
             (iVar5 = *(int *)(*(int *)(local_c + 0x1c) + 0x120) + -1,
             *(int *)(*(int *)(local_c + 0x1c) + 0x120) = iVar5, iVar5 == 0)) {
            if (*(int *)(local_c + 0x1c) != 0) {
              FUN_200c0e30(1);
            }
            FUN_200c12f0(local_4,iVar3);
          }
          *(undefined4 *)(iVar6 + 0x10 + *(int *)(iVar2 + 0x3c)) = 0;
        }
        iVar6 = iVar6 + 0x14;
      }
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0x4c);
      piVar4 = (int *)local_10[2];
      if (*(char *)((int)piVar4 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        local_10 = piVar4;
        piVar4 = (int *)*piVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x21);
          local_10 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        piVar4 = (int *)local_10[1];
        if (local_10 == (int *)piVar4[2]) {
          do {
            local_10 = piVar4;
            piVar4 = (int *)local_10[1];
          } while (local_10 == (int *)piVar4[2]);
        }
        if ((int *)local_10[2] != piVar4) {
          local_10 = piVar4;
        }
      }
    } while (local_10 != *(int **)(local_8 + 4));
  }
  return;
}

