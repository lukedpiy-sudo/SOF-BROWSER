// rea decompile_all
// name: FUN_200dd340
// address: 0x200dd340
// body: available
// range: 0x200dd340-0x200dd3f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dd340(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 8))();
  do {
    while( true ) {
      piVar1 = *(int **)in_ECX[1];
      iVar9 = *(int *)(*piVar1 + 0x9c);
      iVar2 = *(int *)(*piVar1 + 0x9c);
      iVar6 = FUN_200c64f0();
      iVar3 = piVar1[0x12];
      iVar4 = piVar1[0x10];
      iVar7 = FUN_200e6cb0();
      iVar8 = FUN_200c64f0();
      bVar5 = ((iVar3 + iVar4 + iVar2) - iVar6) - iVar7 <
              iVar8 + piVar1[0x10] + in_ECX[10] + in_ECX[3] + iVar9;
      if (bVar5) {
        FUN_200dd400();
      }
      iVar9 = FUN_200cf670();
      if (iVar9 == 0) break;
      in_ECX[3] = *(int *)(iVar9 + 0x28) + *(int *)(iVar9 + 0xc);
    }
  } while (bVar5);
  return;
}

