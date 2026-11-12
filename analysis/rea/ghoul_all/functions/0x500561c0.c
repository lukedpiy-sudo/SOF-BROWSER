// rea decompile_all
// name: FUN_500561c0
// address: 0x500561c0
// body: available
// range: 0x500561c0-0x500565ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500561c0(int param_1,int param_2)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  int *local_34;
  int local_30;
  
  if ((*(int *)(*(int *)(param_1 + 0x45c) + 0x30) == 0) &&
     ((iVar4 = *(int *)(param_1 + 0x74), *(float *)(iVar4 + 0x48c) != 0.0 ||
      (*(float *)(iVar4 + 0x490) != 0.0)))) {
    *(undefined4 *)(iVar4 + 0x48c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0;
  }
  if ((((*(int *)(*(int *)(param_1 + 0x45c) + 0x30) == 0) ||
       (iVar4 = FUN_50050b50(param_1), iVar4 != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x45c) + 0x34) == 0)) &&
     ((*(int *)(*(int *)(param_1 + 0x45c) + 0x40) == 0 &&
      (*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x4fc) = 0, *(int *)(param_1 + 0x45c) != 0)))) {
    iVar4 = FUN_500544d0(param_1);
    if (iVar4 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x5c) = *(undefined4 *)(DAT_5015c96c + 0x18);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x5c) = 0;
      fVar6 = (float10)(*DAT_5015cb20)(0,0x43b40000);
      *(float *)(*(int *)(param_1 + 0x74) + 0x500) = (float)fVar6;
    }
  }
  iVar4 = *(int *)(param_1 + 0x45c);
  if ((*(int *)(iVar4 + 0x40) == 0) || (*(int *)(*(int *)(iVar4 + 0x40) + 0x10) != 1)) {
    if (*(float *)(iVar4 + 0x28) <= DAT_5015ccdc) {
      *(undefined4 *)(iVar4 + 100) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 100) = *(undefined4 *)(DAT_5015c96c + 0x18);
    }
  }
  else {
    *(float *)(iVar4 + 100) = -*(float *)(DAT_5015c96c + 0x18);
  }
  if (DAT_5015ccdc < *(float *)(*(int *)(*(int *)(param_1 + 0x74) + 0x34c) + 0x10)) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x48c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0;
  }
  lVar7 = __ftol();
  *(short *)(param_2 + 6) = (short)lVar7;
  lVar7 = __ftol();
  *(short *)(param_2 + 4) = (short)lVar7;
  *(undefined2 *)(param_2 + 8) = 0;
  if ((((*(float *)(*(int *)(param_1 + 0x74) + 0x48c) != 0.0) ||
       (*(float *)(*(int *)(param_1 + 0x74) + 0x490) != 0.0)) &&
      (iVar4 = (**(code **)(*DAT_5015c4d8 + 0x68))(), iVar4 == 0)) && (DAT_50159684 != 3)) {
    iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x70))();
    iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x6c))();
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *(float *)(*(int *)(param_1 + 0x45c) + 0x10) = DAT_5015ccdc + 2.0;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x48c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0;
    }
  }
  if (0 < *(int *)(param_1 + 0x2ec)) {
    local_34 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
    local_30 = param_1;
    (**(code **)(*local_34 + 0xf4))(&local_34);
    if ((local_34[0xb] == 0xc) && (*(float *)(*(int *)(param_1 + 0x74) + 0x48c) != 0.0)) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x74) + 0x47c);
      *puVar1 = *puVar1 | 1;
      goto LAB_5005642b;
    }
  }
  uVar3 = *(uint *)(*(int *)(param_1 + 0x74) + 0x47c);
  if ((uVar3 & 1) != 0) {
    *(uint *)(*(int *)(param_1 + 0x74) + 0x47c) = uVar3 - 1;
  }
LAB_5005642b:
  if ((*(float *)(*(int *)(param_1 + 0x45c) + 100) == 0.0) &&
     (iVar4 = FUN_50053f30(param_1), iVar4 != 0)) {
    *(float *)(*(int *)(param_1 + 0x45c) + 100) = -*(float *)(DAT_5015c96c + 0x18);
  }
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x47c);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x48c);
  fVar2 = *(float *)(*(int *)(param_1 + 0x74) + 0x490);
  *(float *)(param_2 + 0x14) = fVar2;
  if (fVar2 == 0.0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x74) + 0x34c) + 0xc) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x74) + 0x34c) + 0xc) = 1;
  }
  if ((*(float *)(param_2 + 0x10) == 0.0) && (*(float *)(param_2 + 0x14) == 0.0)) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x74) + 0x34c) + 8) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x74) + 0x34c) + 8) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x45c);
  if (*(int *)(iVar4 + 0x3f4) == 1) {
    *(undefined4 *)(iVar4 + 100) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x3f4) = 0;
    *(float *)(*(int *)(param_1 + 0x45c) + 0x3fc) = DAT_5015ccdc + 0.2;
  }
  else if (*(float *)(iVar4 + 0x3fc) <= DAT_5015ccdc) {
    if (*(float *)(iVar4 + 100) != 0.0) {
      *(undefined4 *)(iVar4 + 0x3f4) = 1;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 100) = 0;
  }
  lVar7 = __ftol();
  *(short *)(param_2 + 10) = (short)lVar7;
  lVar7 = __ftol();
  *(short *)(param_2 + 0xc) = (short)lVar7;
  lVar7 = __ftol();
  *(short *)(param_2 + 0xe) = (short)lVar7;
  if (((DAT_50159684 == 5) && (iVar4 = *(int *)(param_1 + 0x45c), *(int *)(iVar4 + 0x30) == 0)) &&
     (0x32 < *(int *)(iVar4 + 0x3dc))) {
    *(float *)(iVar4 + 0x3e4) = DAT_5015ccdc + 3.0;
  }
  return;
}

