// rea decompile_all
// name: FUN_200cd500
// address: 0x200cd500
// body: available
// range: 0x200cd500-0x200cd5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cd500(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x74);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    if (piVar3[3] != 0) {
      pcVar4 = (char *)FUN_200c59c0(piVar3[3]);
      if ((*pcVar4 == '\0') || (pcVar4 = (char *)FUN_200c59c0(piVar3[3]), *pcVar4 == '\0')) {
        FUN_200c9510(piVar3[3] + -1,piVar3[5] + 2);
      }
      else {
        pcVar4 = (char *)FUN_200c59c0(piVar3[3]);
        *pcVar4 = *pcVar4 + -1;
      }
    }
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    FUN_200f9f75(piVar3);
    *(int *)(in_ECX + 0x78) = *(int *)(in_ECX + 0x78) + -1;
    piVar3 = piVar2;
  }
  uVar5 = FUN_200c8280(1);
  uVar5 = FUN_20055450(&DAT_201587a8,uVar5);
  FUN_200c7fd0(uVar5);
  return;
}

