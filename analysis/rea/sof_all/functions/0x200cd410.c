// rea decompile_all
// name: FUN_200cd410
// address: 0x200cd410
// body: available
// range: 0x200cd410-0x200cd4d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200cd42f) */

void FUN_200cd410(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int in_ECX;
  int *piVar5;
  
  piVar2 = *(int **)(in_ECX + 0x90);
  piVar3 = *(int **)(in_ECX + 0x94);
  if (piVar2 != piVar3) {
    piVar5 = piVar2 + 1;
    do {
      if (*piVar5 != 0) {
        pcVar4 = (char *)FUN_200c59c0(*piVar5);
        if ((*pcVar4 == '\0') || (pcVar4 = (char *)FUN_200c59c0(*piVar5), *pcVar4 == '\0')) {
          FUN_200c9510(*piVar5 + -1,piVar5[2] + 2);
        }
        else {
          pcVar4 = (char *)FUN_200c59c0(*piVar5);
          *pcVar4 = *pcVar4 + -1;
        }
      }
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar1 = piVar5 + 3;
      piVar5 = piVar5 + 4;
    } while (piVar1 != piVar3);
    *(int **)(in_ECX + 0x94) = piVar2;
    return;
  }
  *(int **)(in_ECX + 0x94) = piVar2;
  return;
}

