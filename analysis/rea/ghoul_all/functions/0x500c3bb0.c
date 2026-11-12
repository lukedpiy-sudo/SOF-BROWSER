// rea decompile_all
// name: FUN_500c3bb0
// address: 0x500c3bb0
// body: available
// range: 0x500c3bb0-0x500c3d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl
FUN_500c3bb0(undefined4 *param_1,float *param_2,float *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 *param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_a4;
  float fStack_a0;
  float afStack_9c [2];
  float afStack_94 [3];
  undefined4 auStack_88 [12];
  float afStack_58 [4];
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  undefined4 uStack_4;
  
  piVar1 = (int *)(**(code **)((int)*param_3 + 0x88))();
  if (piVar1 != (int *)0x0) {
    puVar2 = param_4;
    if ((short)param_4 == 0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x1c))(param_5);
      if ((short)puVar2 == 0) goto LAB_500c3d68;
    }
    uStack_48 = 0;
    FUN_500fdd70(param_2,afStack_94,&fStack_f0,&fStack_a0);
    FUN_500ecdc0(auStack_88);
    fStack_f0 = fStack_f0 * -1.0;
    fStack_ec = fStack_ec * -1.0;
    fStack_e8 = fStack_e8 * -1.0;
    FUN_500ed5a0(auStack_88,0,afStack_94);
    FUN_500ed5a0(auStack_88,1,&fStack_f0);
    FUN_500ed5a0(auStack_88,2,&fStack_a0);
    FUN_500ed5a0(auStack_88,3,param_1);
    FUN_500ecd70((int)auStack_88);
    uStack_a4 = 0;
    uStack_4 = 0;
    (**(code **)((int)*param_3 + 200))(DAT_5015ccdc,auStack_44,puVar2,5,1);
    FUN_500ed0d0(&stack0xffffff08,afStack_58,afStack_9c);
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = uStack_c8;
      param_1[1] = uStack_c4;
      param_1[2] = uStack_c0;
    }
    if (param_2 != (float *)0x0) {
      *param_2 = fStack_d8;
      param_2[1] = fStack_d4;
      param_2[2] = fStack_d0;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = fStack_e8;
      param_3[1] = fStack_e4;
      param_3[2] = fStack_e0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = unaff_ESI;
      param_4[1] = unaff_EBX;
      param_4[2] = fStack_f0;
    }
    return 1;
  }
LAB_500c3d68:
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
    param_7[1] = 0;
    param_7[2] = 0;
  }
  return 0;
}

