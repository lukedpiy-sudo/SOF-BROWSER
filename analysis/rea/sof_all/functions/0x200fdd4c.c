// rea decompile_all
// name: FUN_200fdd4c
// address: 0x200fdd4c
// body: available
// range: 0x200fdd4c-0x200fde0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200fdd4c(int param_1)

{
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int local_8;
  
  puVar4 = PTR_LOOP_2015b26c;
  do {
    puVar5 = puVar4;
    if (*(int *)(puVar4 + 0x10) != -1) {
      local_8 = 0;
      piVar2 = (int *)(puVar4 + 0x2010);
      iVar3 = 0x3ff000;
      do {
        if (*piVar2 == 0xf0) {
          BVar1 = VirtualFree((LPVOID)(iVar3 + *(int *)(puVar4 + 0x10)),0x1000,0x4000);
          if (BVar1 != 0) {
            *piVar2 = -1;
            DAT_20408414 = DAT_20408414 + -1;
            if ((*(int **)(puVar4 + 0xc) == (int *)0x0) || (piVar2 < *(int **)(puVar4 + 0xc))) {
              *(int **)(puVar4 + 0xc) = piVar2;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        piVar2 = piVar2 + -2;
      } while (-1 < iVar3);
      puVar5 = *(undefined **)(puVar4 + 4);
      if ((local_8 != 0) && (*(int *)(puVar4 + 0x18) == -1)) {
        piVar2 = (int *)(puVar4 + 0x20);
        iVar3 = 1;
        do {
          if (*piVar2 != -1) break;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_200fdcf6(puVar4);
        }
      }
    }
    if ((puVar5 == PTR_LOOP_2015b26c) || (puVar4 = puVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}

