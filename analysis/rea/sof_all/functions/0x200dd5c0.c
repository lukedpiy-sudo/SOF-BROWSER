// rea decompile_all
// name: FUN_200dd5c0
// address: 0x200dd5c0
// body: available
// range: 0x200dd5c0-0x200dd6a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dd5c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  
  (**(code **)(*in_ECX + 8))();
  iVar3 = *(int *)in_ECX[1];
  iVar2 = FUN_200c64f0();
  iVar2 = *(int *)(iVar3 + 0x48) + iVar2 * -2;
  iVar3 = FUN_200e6cb0();
  do {
    iVar7 = 0;
    in_ECX[3] = (iVar2 - iVar3) - in_ECX[10];
    do {
      piVar4 = (int *)FUN_200cf670();
      if (piVar4 == (int *)0x0) {
        return;
      }
      in_ECX[3] = piVar4[3] - in_ECX[10];
      if (piVar4[2] != 0x16) {
        iVar3 = (**(code **)(*piVar4 + 4))();
        if (iVar7 < iVar3) {
          iVar7 = (**(code **)(*piVar4 + 4))();
        }
      }
      piVar4 = *(int **)in_ECX[1];
      iVar3 = *(int *)(*piVar4 + 0x9c);
      iVar2 = *(int *)(*piVar4 + 0x9c);
      iVar5 = FUN_200c64f0();
      iVar1 = piVar4[0x10];
      iVar6 = FUN_200c64f0();
    } while (iVar5 + iVar1 + iVar2 <= iVar6 + piVar4[0x10] + iVar3 + in_ECX[3]);
    iVar3 = *(int *)in_ECX[1];
    iVar2 = FUN_200c64f0();
    iVar2 = *(int *)(iVar3 + 0x48) + iVar2 * -2;
    iVar3 = FUN_200e6cb0();
    in_ECX[4] = iVar7;
  } while( true );
}

