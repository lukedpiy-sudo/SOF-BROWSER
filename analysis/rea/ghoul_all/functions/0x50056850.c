// rea decompile_all
// name: FUN_50056850
// address: 0x50056850
// body: available
// range: 0x50056850-0x50056b72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50056850(int *param_1)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  byte local_18 [10];
  short local_e;
  short local_c;
  
  if (param_1[0x117] != 0) {
    FUN_500566b0((float)param_1,(undefined4 *)local_18);
    iVar4 = DAT_5015c96c;
    sVar3 = local_e;
    if (DAT_50159684 == 5) {
      if (((((float)(int)local_e == *(float *)(DAT_5015c96c + 0x18)) ||
           ((float)(int)local_e == -*(float *)(DAT_5015c96c + 0x18))) ||
          ((float)(int)local_c == *(float *)(DAT_5015c96c + 0x18))) ||
         ((float)(int)local_c == -*(float *)(DAT_5015c96c + 0x18))) {
        *(undefined4 *)(param_1[0x117] + 0x3e0) = 1;
      }
      else {
        *(undefined4 *)(param_1[0x117] + 0x3e0) = 0;
      }
      iVar4 = param_1[0x117];
      if (*(int *)(iVar4 + 0x3d8) != 0) {
        if ((0 < local_e) || (local_e < 0)) {
          lVar5 = __ftol();
          local_e = (short)lVar5;
        }
        if ((0 < local_c) || (local_c < 0)) {
          lVar5 = __ftol();
          local_c = (short)lVar5;
        }
        *(float *)(iVar4 + 0x3e4) = DAT_5015ccdc + 5.0;
      }
      if (DAT_5015ccdc < *(float *)(param_1[0x117] + 0x3e4)) {
        *(undefined4 *)(param_1[0x117] + 0x3e0) = 2;
      }
      iVar4 = DAT_5015c96c;
      sVar3 = local_e;
      if (*(int *)(param_1[0x117] + 0x3e0) == 2) {
        if ((0 < local_e) || (local_e < 0)) {
          lVar5 = __ftol();
          local_e = (short)lVar5;
        }
        sVar3 = local_e;
        if ((0 < local_c) || (local_c < 0)) {
          lVar5 = __ftol();
          local_c = (short)lVar5;
        }
      }
    }
    sVar1 = local_c;
    if (((float)(int)sVar3 == *(float *)(iVar4 + 0x18)) ||
       ((float)(int)sVar3 == -*(float *)(iVar4 + 0x18))) {
      lVar5 = __ftol();
      local_e = (short)lVar5;
    }
    if (((float)(int)sVar1 == *(float *)(iVar4 + 0x18)) ||
       ((float)(int)sVar1 == *(float *)(iVar4 + 0x18))) {
      lVar5 = __ftol();
      local_c = (short)lVar5;
    }
    if (param_1[0xbb] < 1) {
      *(undefined4 *)(param_1[0x117] + 0x3dc) = 0;
      *(undefined4 *)(param_1[0x117] + 0x3d8) = 0;
      if (*(int *)(param_1[0x117] + 0x30) != 0) {
        *(undefined4 *)(param_1[0x117] + 0x30) = 0;
      }
      if (*(int *)(param_1[0x117] + 0x40) != 0) {
        *(undefined4 *)(param_1[0x117] + 0x40) = 0;
      }
      if (*(int *)(param_1[0x117] + 0x4c) != 0) {
        *(undefined4 *)(param_1[0x117] + 0x4c) = 0;
      }
      if (*(int *)(param_1[0x117] + 0x34) != 0) {
        *(undefined4 *)(param_1[0x117] + 0x34) = 0;
      }
      uVar2 = FUN_50107636();
      if ((int)uVar2 % 10 < 5) {
        *(undefined4 *)(param_1[0x1d] + 0x47c) = 0;
      }
      else {
        *(undefined4 *)(param_1[0x1d] + 0x47c) = 1;
      }
      *(undefined4 *)(param_1[0x1d] + 0x484) = *(undefined4 *)(param_1[0x1d] + 0x47c);
      *(undefined4 *)(param_1[0x1d] + 0x48c) = 0;
      *(undefined4 *)(param_1[0x1d] + 0x490) = 0;
      *(undefined4 *)(param_1[0x1d] + 0x488) = 1;
    }
    else {
      *(undefined4 *)(param_1[0x1d] + 0x47c) = 0;
      *(undefined4 *)(param_1[0x1d] + 0x484) = *(undefined4 *)(param_1[0x1d] + 0x47c);
    }
    FUN_500f53a0(param_1,local_18);
  }
  return;
}

