// rea decompile_all
// name: FUN_200ca550
// address: 0x200ca550
// body: available
// range: 0x200ca550-0x200ca76a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200ca6e3) */
/* WARNING: Removing unreachable block (ram,0x200ca6f8) */
/* WARNING: Removing unreachable block (ram,0x200ca707) */
/* WARNING: Removing unreachable block (ram,0x200ca70e) */

void FUN_200ca550(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int in_ECX;
  uint uVar6;
  int *piVar7;
  int *local_18;
  undefined1 local_c [4];
  int local_8;
  undefined1 local_4 [4];
  
  local_8 = in_ECX;
  FUN_2009e4c0(*(undefined4 *)(in_ECX + 0xc4),*(undefined4 *)(in_ECX + 200));
  piVar7 = (int *)**(int **)(in_ECX + 0x1c);
  iVar3 = in_ECX;
  if (piVar7 != *(int **)(in_ECX + 0x1c)) {
    do {
      if (*(int *)(piVar7[2] + 4) != 0) {
        local_18 = (int *)FUN_200c6b10(local_4);
        local_18 = (int *)*local_18;
        piVar2 = (int *)FUN_200c6b30(local_c);
        if (local_18 != (int *)*piVar2) {
          do {
            if (*(char *)(local_18[2] + 0x60) != '\0') {
              piVar2 = *(int **)(in_ECX + 200);
              if (*(int *)(in_ECX + 0xcc) - (int)piVar2 >> 2 == 0) {
                iVar3 = *(int *)(in_ECX + 0xc4);
                if ((iVar3 == 0) || (uVar6 = (int)piVar2 - iVar3 >> 2, uVar6 < 2)) {
                  uVar6 = 1;
                }
                if (iVar3 == 0) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = (int)piVar2 - iVar3 >> 2;
                }
                iVar3 = iVar3 + uVar6;
                iVar4 = iVar3;
                if (iVar3 < 0) {
                  iVar4 = 0;
                }
                pvVar5 = operator_new(iVar4 << 2);
                iVar4 = FUN_2008dea0(*(undefined4 *)(in_ECX + 0xc4),piVar2,pvVar5);
                FUN_200a9240(iVar4,1,local_18 + 2);
                FUN_2008dea0(piVar2,*(undefined4 *)(in_ECX + 200),iVar4 + 4);
                FUN_2008c730(*(undefined4 *)(in_ECX + 0xc4),*(undefined4 *)(in_ECX + 200));
                FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc4));
                *(void **)(in_ECX + 0xcc) = (void *)((int)pvVar5 + iVar3 * 4);
                iVar3 = FUN_2008c740();
                iVar3 = (int)pvVar5 + iVar3 * 4 + 4;
                *(void **)(in_ECX + 0xc4) = pvVar5;
              }
              else {
                FUN_2008dea0(piVar2,piVar2,piVar2 + 1);
                FUN_200a9240(*(int *)(in_ECX + 200),1 - (*(int *)(in_ECX + 200) - (int)piVar2 >> 2),
                             local_18 + 2);
                piVar1 = *(int **)(in_ECX + 200);
                for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
                  *piVar2 = local_18[2];
                }
                iVar3 = *(int *)(in_ECX + 200) + 4;
              }
              *(int *)(in_ECX + 200) = iVar3;
            }
            local_18 = (int *)*local_18;
            piVar2 = (int *)FUN_200c6b30(local_c);
            iVar3 = local_8;
          } while (local_18 != (int *)*piVar2);
        }
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(iVar3 + 0x1c));
  }
  *(undefined1 *)(iVar3 + 0xb8) = 1;
  return;
}

