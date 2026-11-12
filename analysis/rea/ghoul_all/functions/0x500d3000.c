// rea decompile_all
// name: FUN_500d3000
// address: 0x500d3000
// body: available
// range: 0x500d3000-0x500d3159 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl
FUN_500d3000(undefined4 *param_1,float *param_2,int *param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 *param_6,undefined4 *param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  int unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_cc;
  int iStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float afStack_9c [4];
  undefined4 uStack_8c;
  undefined4 auStack_88 [12];
  float afStack_58 [4];
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  undefined4 uStack_4;
  
  piVar1 = (int *)(**(code **)(*param_3 + 0x88))();
  if (piVar1 != (int *)0x0) {
    puVar2 = param_4;
    if ((short)param_4 == 0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x1c))();
      if ((short)puVar2 == 0) goto LAB_500d3130;
    }
    uStack_48 = 0;
    FUN_500c3da0(param_1,param_2,auStack_88);
    uStack_8c = 0;
    uStack_4 = 0;
    uVar4 = 1;
    uVar3 = 5;
    (**(code **)(*param_3 + 200))(DAT_5015ccdc,auStack_44,puVar2);
    FUN_500ed0d0(&stack0xffffff20,afStack_58,afStack_9c);
    *param_1 = uStack_b0;
    param_1[1] = uStack_ac;
    param_1[2] = uStack_a8;
    *param_2 = fStack_c0;
    param_2[1] = fStack_bc;
    param_2[2] = fStack_b8;
    if (param_3 != (int *)0x0) {
      *param_3 = unaff_EBX;
      param_3[1] = iStack_cc;
      param_3[2] = iStack_c8;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar3;
      param_4[1] = uVar4;
      param_4[2] = unaff_EDI;
    }
    return 1;
  }
LAB_500d3130:
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  return 0;
}

