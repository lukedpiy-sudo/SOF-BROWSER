// rea decompile_all
// name: FUN_50051250
// address: 0x50051250
// body: available
// range: 0x50051250-0x50051435 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50051250(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0x45c) != 0) {
    iVar3 = 1;
    iVar2 = DAT_5015cca0 + 0x464;
    iVar4 = iVar2;
    if (0 < DAT_5015d8c8) {
      do {
        if ((((*(int *)(iVar4 + 0x45c) != 0) && (*(int *)(iVar4 + 0x78) != 0)) &&
            (iVar5 = *(int *)(iVar4 + 0x74), iVar5 != 0)) &&
           (((*(int *)(iVar5 + 800) == 0 && (*(int *)(iVar4 + 0x458) != 0)) &&
            ((iVar4 != param_1 &&
             (*(int *)(iVar5 + 0x324) == *(int *)(*(int *)(param_1 + 0x74) + 0x324))))))) {
          if (*(int *)(*(int *)(iVar4 + 0x45c) + 0x3bc) == 1) {
            local_4 = local_4 + 1;
          }
          else {
            local_8 = local_8 + 1;
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x464;
      } while (iVar3 <= DAT_5015d8c8);
    }
    iVar4 = 1;
    if (DAT_50159684 == 6) {
      iVar2 = FUN_5005e890(&DAT_50159a60,param_1);
      if (iVar2 != 0) {
LAB_5005134a:
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x3bc) = 0;
        return;
      }
      iVar2 = FUN_5005e8e0(&DAT_50159a60,param_1);
      if (iVar2 != 0) {
LAB_50051324:
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x3bc) = 1;
        return;
      }
      if (local_8 <= local_4) {
        if (local_8 < local_4) goto LAB_5005134a;
        goto LAB_50051324;
      }
    }
    else {
      if (0 < DAT_5015d8c8) {
        iVar5 = 0x464;
        iVar3 = DAT_5015d8c8;
        do {
          if (((*(int *)(iVar2 + 0x78) != 0) && (iVar1 = *(int *)(iVar2 + 0x74), iVar1 != 0)) &&
             ((*(int *)(iVar1 + 800) == 0 &&
              (((iVar2 != param_1 &&
                (*(int *)(iVar1 + 0x324) != *(int *)(*(int *)(param_1 + 0x74) + 0x324))) &&
               (iVar2 = (**(code **)(**(int **)(iVar1 + 0x34c) + 0x54))(7), iVar3 = DAT_5015d8c8,
               iVar2 != 0)))))) {
            *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x3bc) = 1;
            return;
          }
          iVar5 = iVar5 + 0x464;
          iVar4 = iVar4 + 1;
          iVar2 = DAT_5015cca0 + iVar5;
        } while (iVar4 <= iVar3);
      }
      if (local_4 < local_8) {
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x3bc) = 1;
        return;
      }
      if (local_8 < local_4) {
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x3bc) = 0;
        return;
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x3bc) = 1;
  }
  return;
}

