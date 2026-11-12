// rea decompile_all
// name: FUN_50008e90
// address: 0x50008e90
// body: available
// range: 0x50008e90-0x50008fbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_50008e90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  
  piVar6 = FUN_50001a30(param_1);
  (**(code **)(*piVar6 + 0xf8))(param_2);
  (**(code **)*piVar6)(param_2);
  (**(code **)(*piVar6 + 0xfc))(param_2,param_1,param_2);
  if ((0xe < param_1) && (param_1 < 0x6f)) {
    FUN_500090a0(piVar6 + 0x7c,(undefined4 *)(&DAT_50189b78 + (param_1 * 3 + -0x2d) * 0x14));
    if (param_2 == 0) {
      return piVar6;
    }
    fVar8 = (float10)(*DAT_5015cacc)(param_2 + 4);
    if (fVar8 != (float10)-1.0) {
      if (fVar8 <= (float10)1200.0) {
        piVar6[0x7f] = (int)((float)piVar6[0x7f] * 0.33);
      }
      else {
        piVar6[0x7f] = (int)((float)piVar6[0x7f] * 0.66);
      }
    }
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x338) == 0) {
      iVar7 = (*DAT_5015cb24)(0,5);
    }
    else {
      iVar7 = *(int *)(param_2 + 0x338) + -1;
    }
    if ((-1 < iVar7) && (iVar7 < 6)) {
      iVar7 = iVar7 * 0x18;
      iVar1 = *(int *)(&DAT_5012f314 + iVar7);
      iVar2 = *(int *)(&DAT_5012f318 + iVar7);
      iVar3 = *(int *)(&DAT_5012f31c + iVar7);
      iVar4 = *(int *)(&DAT_5012f320 + iVar7);
      iVar5 = *(int *)(&DAT_5012f324 + iVar7);
      piVar6[0x85] = *(int *)(&DAT_5012f310 + iVar7);
      piVar6[0x86] = iVar1;
      piVar6[0x87] = iVar2;
      piVar6[0x88] = iVar3;
      piVar6[0x89] = iVar4;
      piVar6[0x8a] = iVar5;
    }
  }
  return piVar6;
}

