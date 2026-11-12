// rea decompile_all
// name: FUN_200f3d20
// address: 0x200f3d20
// body: available
// range: 0x200f3d20-0x200f3f50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_200f3d20(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  if (*(int *)(param_1 + 4) == 2) {
    return (int *)0x0;
  }
  if ((*(int *)(param_1 + 0x10c) != 0) && (pcVar4 = *(char **)(param_1 + 0x108), *pcVar4 != '\0')) {
    for (; (*pcVar4 == '\r' || (*pcVar4 == '\n')); pcVar4 = pcVar4 + 1) {
    }
    cVar1 = *pcVar4;
    pcVar2 = pcVar4;
    pcVar3 = pcVar4;
    if (cVar1 != '\0') {
      while ((cVar1 != '\n' && (cVar1 != '\r'))) {
        if (cVar1 == '\0') {
          return (int *)0x0;
        }
        if (cVar1 != ' ') {
          pcVar3 = pcVar2;
        }
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      }
      if (*pcVar2 != '\0') {
        cVar1 = pcVar3[1];
        piVar8 = (int *)(param_1 + 0x120);
        pcVar3[1] = '\0';
        if (*piVar8 != 0) {
          FUN_200f9d32(*piVar8);
          *piVar8 = 0;
        }
        if (*(int *)(param_1 + 0x124) != 0) {
          FUN_200f9d32(*(int *)(param_1 + 0x124));
          *(undefined4 *)(param_1 + 0x124) = 0;
        }
        if (*(int *)(param_1 + 0x128) != 0) {
          FUN_200f9d32(*(int *)(param_1 + 0x128));
          *(undefined4 *)(param_1 + 0x128) = 0;
        }
        if (*(int *)(param_1 + 300) != 0) {
          FUN_200f9d32(*(int *)(param_1 + 300));
          *(undefined4 *)(param_1 + 300) = 0;
        }
        if (*(int *)(param_1 + 0x130) != 0) {
          FUN_200f9d32(*(int *)(param_1 + 0x130));
          *(undefined4 *)(param_1 + 0x130) = 0;
        }
        if (*(int *)(param_1 + 0x134) != 0) {
          FUN_200f9d32(*(int *)(param_1 + 0x134));
          *(undefined4 *)(param_1 + 0x134) = 0;
        }
        if (*(int *)(param_1 + 0x138) != 0) {
          FUN_200f9d32(*(int *)(param_1 + 0x138));
          *(undefined4 *)(param_1 + 0x138) = 0;
        }
        if (*(int *)(param_1 + 0x13c) != 0) {
          FUN_200f9d32(*(int *)(param_1 + 0x13c));
          *(undefined4 *)(param_1 + 0x13c) = 0;
        }
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0x144)) {
          do {
            iVar5 = *(int *)(*(int *)(param_1 + 0x140) + iVar6 * 4);
            if (iVar5 != 0) {
              FUN_200f9d32(iVar5);
              *(undefined4 *)(*(int *)(param_1 + 0x140) + iVar6 * 4) = 0;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 0x144));
        }
        if (*(int *)(param_1 + 0x140) != 0) {
          FUN_200f9d32(*(int *)(param_1 + 0x140));
          *(undefined4 *)(param_1 + 0x140) = 0;
        }
        *(undefined4 *)(param_1 + 0x144) = 0;
        piVar7 = piVar8;
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        iVar6 = FUN_200f3f60(pcVar4,piVar8);
        if (iVar6 != 0) {
          pcVar3[1] = cVar1;
          iVar5 = (int)pcVar2 - *(int *)(param_1 + 0x108);
          iVar6 = *(int *)(param_1 + 0x10c) - iVar5;
          *(int *)(param_1 + 0x10c) = iVar6;
          FUN_200fa360(*(int *)(param_1 + 0x108),iVar5 + *(int *)(param_1 + 0x108),iVar6);
          *(undefined1 *)(*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x108)) = 0;
          return piVar8;
        }
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        return (int *)0x0;
      }
    }
  }
  return (int *)0x0;
}

