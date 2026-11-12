// rea decompile_all
// name: FUN_200ccf50
// address: 0x200ccf50
// body: available
// range: 0x200ccf50-0x200cd0b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200ccf69) */

void FUN_200ccf50(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  void *pvVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  int iVar8;
  void *pvVar9;
  
  piVar2 = *(int **)(in_ECX + 0x80);
  piVar3 = *(int **)(in_ECX + 0x84);
  if (piVar2 != piVar3) {
    piVar7 = piVar2 + 1;
    do {
      if (*piVar7 != 0) {
        pcVar4 = (char *)FUN_200c59c0(*piVar7);
        if ((*pcVar4 == '\0') || (pcVar4 = (char *)FUN_200c59c0(*piVar7), *pcVar4 == '\0')) {
          FUN_200c9510(*piVar7 + -1,piVar7[2] + 2);
        }
        else {
          pcVar4 = (char *)FUN_200c59c0(*piVar7);
          *pcVar4 = *pcVar4 + -1;
        }
      }
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      piVar1 = piVar7 + 3;
      piVar7 = piVar7 + 4;
    } while (piVar1 != piVar3);
  }
  *(int **)(in_ECX + 0x84) = piVar2;
  if ((*(int *)(in_ECX + 0x80) == 0) ||
     ((uint)(*(int *)(in_ECX + 0x88) - *(int *)(in_ECX + 0x80) >> 4) < 500)) {
    pvVar5 = operator_new(8000);
    iVar6 = *(int *)(in_ECX + 0x84);
    pvVar9 = pvVar5;
    for (iVar8 = *(int *)(in_ECX + 0x80); iVar8 != iVar6; iVar8 = iVar8 + 0x10) {
      FUN_200279a0(pvVar9,iVar8);
      pvVar9 = (void *)((int)pvVar9 + 0x10);
    }
    iVar6 = *(int *)(in_ECX + 0x84);
    for (iVar8 = *(int *)(in_ECX + 0x80); iVar8 != iVar6; iVar8 = iVar8 + 0x10) {
      FUN_2000a5b0(1);
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0x80));
    *(int *)(in_ECX + 0x88) = (int)pvVar5 + 8000;
    if (*(int *)(in_ECX + 0x80) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(in_ECX + 0x84) - *(int *)(in_ECX + 0x80) >> 4;
    }
    *(void **)(in_ECX + 0x80) = pvVar5;
    *(void **)(in_ECX + 0x84) = (void *)(iVar6 * 0x10 + (int)pvVar5);
  }
  return;
}

