// rea decompile_all
// name: FUN_500d2e50
// address: 0x500d2e50
// body: available
// range: 0x500d2e50-0x500d2ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl
FUN_500d2e50(undefined4 *param_1,float *param_2,int *param_3,undefined4 *param_4,int *param_5,
            int *param_6,undefined4 *param_7,undefined4 param_8,undefined4 *param_9,
            undefined4 *param_10)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  short sStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float afStack_9c [5];
  undefined4 auStack_88 [12];
  float afStack_58 [4];
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  undefined4 uStack_4;
  
  piVar1 = (int *)(**(code **)(*param_3 + 0x88))();
  piVar2 = (int *)(**(code **)(*param_5 + 0x88))();
  if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
    puVar3 = param_4;
    if ((short)param_4 == 0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x1c))(param_7);
    }
    piVar1 = param_6;
    if ((short)param_6 == 0) {
      piVar1 = (int *)(**(code **)(*piVar2 + 0x1c))(param_8);
    }
    sStack_d0 = (short)puVar3;
    if ((sStack_d0 != 0) && ((short)piVar1 != 0)) {
      uStack_48 = 0;
      FUN_500c3da0(param_1,param_2,auStack_88);
      uStack_4 = 0;
      (**(code **)(*param_5 + 200))(DAT_5015ccdc,auStack_44,piVar1,5,1);
      FUN_500ed0d0(&stack0xffffff20,afStack_58,afStack_9c);
      *param_4 = uStack_b0;
      param_4[1] = uStack_ac;
      param_4[2] = uStack_a8;
      if (param_5 != (int *)0x0) {
        *param_5 = iStack_c0;
        param_5[1] = iStack_bc;
        param_5[2] = iStack_b8;
      }
      if (param_6 != (int *)0x0) {
        *param_6 = (int)puVar3;
        param_6[1] = iStack_cc;
        param_6[2] = iStack_c8;
      }
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = unaff_EDI;
        param_7[1] = unaff_ESI;
        param_7[2] = unaff_EBP;
      }
      return 1;
    }
  }
  *param_9 = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  *param_10 = 0;
  param_10[1] = 0;
  param_10[2] = 0;
  return 0;
}

