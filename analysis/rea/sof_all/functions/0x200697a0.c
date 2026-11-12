// rea decompile_all
// name: FUN_200697a0
// address: 0x200697a0
// body: available
// range: 0x200697a0-0x2006989d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200697a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  undefined4 local_4;
  
  piVar3 = (int *)**(int **)(in_ECX + 4);
  if (piVar3 != *(int **)(in_ECX + 4)) {
    do {
      if (*(char *)(*(int *)((int)piVar3 + 8) + 0x25) == '\0') {
        iVar2 = FUN_20073a90(*(int *)((int)piVar3 + 8));
LAB_200697e0:
        iVar4 = iVar2;
      }
      else {
        iVar2 = *(int *)((int)piVar3 + 4);
        iVar4 = (int)piVar3;
        if (piVar3 == (int *)*(int *)(iVar2 + 8)) {
          do {
            iVar4 = iVar2;
            iVar2 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar2 + 8));
        }
        if (*(int *)(iVar4 + 8) != iVar2) goto LAB_200697e0;
      }
      if (*(int *)((int)piVar3 + 0x20) < 1) {
        iVar2 = *(int *)((int)piVar3 + 0x1c);
        if (iVar2 != 0) {
          FUN_200a6330();
          FUN_200f9f75(iVar2);
        }
        FUN_20049770(&local_4,piVar3);
      }
      piVar3 = (int *)iVar4;
    } while (iVar4 != *(int *)(in_ECX + 4));
  }
  FUN_200c10b0();
  local_4 = CONCAT31(local_4._1_3_,DAT_20403c08);
  uVar1 = local_4;
  piVar3 = (int *)*DAT_20403a88;
  while (piVar3 != DAT_20403a88) {
    (**(code **)(*(int *)piVar3[4] + 8))(uVar1);
    FUN_20085230();
  }
  piVar3 = (int *)*DAT_204038b8;
  while (piVar3 != DAT_204038b8) {
    (**(code **)(*(int *)piVar3[4] + 8))(uVar1);
    FUN_20085230();
  }
  FUN_200c11c0();
  return;
}

