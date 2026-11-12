// rea decompile_all
// name: FUN_2003bec0
// address: 0x2003bec0
// body: available
// range: 0x2003bec0-0x2003bfcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003bec0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(&DAT_20131670 + param_2 * 0xc) != 0) {
    FUN_2003b0a0(param_1,*(int *)(&DAT_20131670 + param_2 * 0xc));
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xbc) + 0x88))();
    uVar3 = (**(code **)(*piVar2 + 0x40))((&PTR_DAT_20131668)[param_2 * 3]);
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xbc) + 0x88))();
    uVar4 = (**(code **)(*piVar2 + 0x50))(uVar3,(&PTR_DAT_2013166c)[param_2 * 3],0);
    if (((short)uVar3 != 0) && ((short)uVar4 != 0)) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(uVar3,uVar4,0);
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x28))(0);
      iVar6 = 0;
      iVar5 = 0;
      piVar2 = &DAT_2013767c;
      do {
        if (iVar5 == *(int *)(&DAT_20131670 + param_2 * 0xc)) break;
        iVar1 = *piVar2;
        piVar2 = piVar2 + 4;
        iVar6 = iVar6 + iVar1;
        iVar5 = iVar5 + 1;
      } while ((int)piVar2 < 0x2013780d);
      if ((int)(&DAT_2013767c)[iVar5 * 4] < 2) {
        iVar5 = 0;
      }
      else {
        iVar5 = irand(0,(&DAT_2013767c)[iVar5 * 4] + -1);
      }
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xbc) + 0x88))();
      uVar3 = (**(code **)(*piVar2 + 0x1c))((&PTR_s_CHUNK_1_20131a18)[iVar5 + iVar6]);
      if ((short)uVar3 != 0) {
        (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))(uVar3,1);
      }
    }
  }
  return;
}

