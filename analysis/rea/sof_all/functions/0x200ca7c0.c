// rea decompile_all
// name: FUN_200ca7c0
// address: 0x200ca7c0
// body: available
// range: 0x200ca7c0-0x200ca8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200ca7c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  
  piVar7 = (int *)**(int **)(in_ECX + 0x1c);
  if (piVar7 != *(int **)(in_ECX + 0x1c)) {
    do {
      piVar1 = (int *)piVar7[2];
      iVar2 = *(int *)(*piVar1 + 0x9c);
      iVar4 = FUN_200c64f0();
      iVar3 = piVar1[0x10];
      iVar5 = FUN_200cbe80();
      if (iVar4 + iVar3 + iVar2 <= iVar5) {
        piVar1 = (int *)piVar7[2];
        iVar2 = *(int *)(*piVar1 + 0x9c);
        iVar5 = FUN_200c64f0();
        iVar3 = piVar1[0x12];
        iVar4 = piVar1[0x10];
        iVar6 = FUN_200cbe80();
        if (iVar6 <= (iVar3 + iVar4 + iVar2) - iVar5) {
          piVar1 = (int *)piVar7[2];
          iVar2 = *(int *)(*piVar1 + 0xa0);
          iVar4 = FUN_200c64f0();
          iVar3 = piVar1[0x11];
          iVar5 = FUN_200cbe90();
          if (iVar4 + iVar3 + iVar2 <= iVar5) {
            piVar1 = (int *)piVar7[2];
            iVar2 = *(int *)(*piVar1 + 0xa0);
            iVar5 = FUN_200c64f0();
            iVar3 = piVar1[0x13];
            iVar4 = piVar1[0x11];
            iVar6 = FUN_200cbe90();
            if (iVar6 <= (iVar3 + iVar4 + iVar2) - iVar5) {
              return piVar7[2];
            }
          }
        }
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(in_ECX + 0x1c));
  }
  return 0;
}

