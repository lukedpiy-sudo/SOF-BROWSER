// rea decompile_all
// name: FUN_50050380
// address: 0x50050380
// body: available
// range: 0x50050380-0x500504c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50050380(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x45c) != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210);
    if (iVar1 < 2) {
      uVar7 = 0x40a00000;
      uVar6 = 0x40400000;
    }
    else if (iVar1 == 2) {
      uVar7 = 0x40800000;
      uVar6 = 0x40000000;
    }
    else if (iVar1 == 3) {
      uVar7 = 0x40000000;
      uVar6 = 0x3f800000;
    }
    else {
      uVar7 = 0x3f800000;
      uVar6 = 0x3f000000;
    }
    fVar3 = (float10)(*DAT_5015cb20)(uVar6,uVar7);
    fVar2 = (float10)DAT_5015ccdc;
    if (*(float *)(*(int *)(param_1 + 0x45c) + 0x20) < DAT_5015ccdc) {
      fVar4 = (float10)(*DAT_5015cb20)(0,0x3f800000);
      if (fVar4 < (float10)0.5) {
        (*DAT_5015cb20)(0,(float)*(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x200));
        lVar5 = __ftol();
        *(int *)(*(int *)(param_1 + 0x45c) + 0x1c) = (int)lVar5;
        *(float *)(*(int *)(param_1 + 0x45c) + 0x20) = (float)(fVar3 + fVar2);
        return;
      }
      (*DAT_5015cb20)(0,(float)*(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x200));
      lVar5 = __ftol();
      *(int *)(*(int *)(param_1 + 0x45c) + 0x1c) = (int)lVar5;
      *(float *)(*(int *)(param_1 + 0x45c) + 0x20) = (float)(fVar3 + fVar2);
    }
  }
  return;
}

