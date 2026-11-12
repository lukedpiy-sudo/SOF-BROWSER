// rea decompile_all
// name: FUN_5007c4a0
// address: 0x5007c4a0
// body: available
// range: 0x5007c4a0-0x5007c59b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_5007c4a0(void *param_1)

{
  int *piVar1;
  undefined2 extraout_var;
  undefined4 *puVar2;
  int iVar3;
  float unaff_ESI;
  int *piVar4;
  float10 fVar5;
  
  if (*(int *)((int)param_1 + 0x148) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    if (piVar4 != (int *)0x0) goto LAB_5007c4fb;
  }
  FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_Time_Wait_50145934);
LAB_5007c4fb:
  (**(code **)(*piVar4 + 8))();
  (**(code **)*piVar4)(1);
  if (unaff_ESI < DAT_5015ccdc != (unaff_ESI == DAT_5015ccdc)) {
    return CONCAT22(extraout_var,
                    (ushort)(unaff_ESI < DAT_5015ccdc) << 8 |
                    (ushort)(NAN(unaff_ESI) || NAN(DAT_5015ccdc)) << 10 |
                    (ushort)(unaff_ESI == DAT_5015ccdc) << 0xe);
  }
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_LAB_5012972c;
    fVar5 = FUN_5010777b((double)((unaff_ESI + 0.05) * 10.0));
    puVar2[2] = 2;
    *puVar2 = &PTR_FUN_5012970c;
    puVar2[3] = 0;
    puVar2[1] = (float)(fVar5 * (float10)0.1);
  }
  iVar3 = FUN_50081380(param_1,(int)puVar2);
  *(undefined4 *)((int)param_1 + 0x108) = 5;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

