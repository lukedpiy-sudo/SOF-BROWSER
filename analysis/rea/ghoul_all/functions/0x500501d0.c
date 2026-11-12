// rea decompile_all
// name: FUN_500501d0
// address: 0x500501d0
// body: available
// range: 0x500501d0-0x50050379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong __cdecl FUN_500501d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_EDX;
  float10 fVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x45c);
  if ((iVar3 != 0) &&
     (in_EDX = *(uint *)(param_1 + 0x74), *(float *)(in_EDX + 0x564) < DAT_5015ccdc)) {
    if (((3 < *(int *)(*(int *)(iVar3 + 0x400) + 0x210)) &&
        ((*(int *)(iVar3 + 0x30) != 0 && (*(int *)(*(int *)(iVar3 + 0x400) + 0x200) < 0x14)))) &&
       ((iVar1 = *(int *)(*(int *)(in_EDX + 0x34c) + 0x2c), iVar1 == 7 || (iVar1 == 10)))) {
      uVar5 = FUN_500500e0(param_1,*(int *)(iVar3 + 0x30));
      in_EDX = (uint)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x48c) = 0;
        uVar2 = *(uint *)(param_1 + 0x74);
        *(undefined4 *)(uVar2 + 0x490) = 0;
        return (ulonglong)uVar2 << 0x20;
      }
    }
    iVar3 = *(int *)(param_1 + 0x74);
    if (DAT_5015ccdc < *(float *)(*(int *)(iVar3 + 0x34c) + 0x10)) {
      *(undefined4 *)(iVar3 + 0x48c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0;
      return (ulonglong)in_EDX << 0x20;
    }
    in_EDX = *(uint *)(param_1 + 0x45c);
    if (*(float *)(in_EDX + 0x10) < DAT_5015ccdc) {
      iVar3 = FUN_5004fed0(param_1);
      if (iVar3 == 0) {
        fVar4 = FUN_5004f960(param_1);
        *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x48c) = 0x3f800000;
        *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0;
      }
      else {
        fVar4 = FUN_5004fa80(param_1);
        *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0x3f800000;
        *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x48c) = 0;
      }
      iVar3 = (**(code **)(*DAT_5015c4d8 + 0x68))();
      if ((iVar3 == 0) && (DAT_50159684 != 3)) {
        iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x70))();
        uVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x6c))();
        if ((iVar3 == 0) && ((int)uVar5 == 0)) {
          *(float *)(*(int *)(param_1 + 0x45c) + 0x10) = DAT_5015ccdc + 2.0;
          return CONCAT44((int)((ulonglong)uVar5 >> 0x20),1);
        }
      }
      *(float *)(*(int *)(param_1 + 0x45c) + 0x10) = (float)fVar4;
      return CONCAT44((float)fVar4,1);
    }
    *(undefined4 *)(iVar3 + 0x48c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0;
  }
  return (ulonglong)in_EDX << 0x20;
}

