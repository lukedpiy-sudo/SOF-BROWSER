// rea decompile_all
// name: FUN_200dd4e0
// address: 0x200dd4e0
// body: available
// range: 0x200dd4e0-0x200dd5b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dd4e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  int iStack_10;
  
  (**(code **)(*in_ECX + 8))();
  do {
    in_ECX[3] = 0;
    iStack_10 = 0;
    do {
      piVar4 = (int *)FUN_200cf670();
      if (piVar4 == (int *)0x0) {
        return;
      }
      in_ECX[3] = piVar4[10] + piVar4[3];
      if ((piVar4[2] != 0x16) && (iVar5 = (**(code **)(*piVar4 + 4))(), iStack_10 < iVar5)) {
        iStack_10 = (**(code **)(*piVar4 + 4))();
      }
      piVar4 = *(int **)in_ECX[1];
      iVar5 = *(int *)(*piVar4 + 0x9c);
      iVar1 = *(int *)(*piVar4 + 0x9c);
      iVar6 = FUN_200c64f0();
      iVar2 = piVar4[0x12];
      iVar3 = piVar4[0x10];
      iVar7 = FUN_200e6cb0();
      iVar8 = FUN_200c64f0();
    } while (iVar8 + piVar4[0x10] + in_ECX[10] + in_ECX[3] + iVar5 <=
             ((iVar2 + iVar3 + iVar1) - iVar6) - iVar7);
    in_ECX[4] = iStack_10;
  } while( true );
}

