// rea decompile_all
// name: FUN_200303c0
// address: 0x200303c0
// body: available
// range: 0x200303c0-0x20030530 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_200303c0(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 *param_7)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar4;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_9c [16];
  undefined4 uStack_8c;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  undefined4 uStack_4;
  
  piVar2 = (int *)(**(code **)(*param_3 + 0x88))();
  if (piVar2 != (int *)0x0) {
    puVar3 = param_4;
    if ((short)param_4 == 0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))(param_5);
      if ((short)puVar3 == 0) goto LAB_20030506;
    }
    uVar1 = (**(code **)(*piVar2 + 0x20))();
    if ((ushort)puVar3 <= uVar1) {
      uStack_48 = 0;
      FUN_2002ed90(param_1,param_2,auStack_88);
      uStack_8c = 0;
      uStack_4 = 0;
      uVar4 = 1;
      (**(code **)(*param_3 + 200))(DAT_2027c478,auStack_44,puVar3,5);
      FUN_200a1100(auStack_58,auStack_9c);
      *param_1 = uStack_b0;
      param_1[1] = uStack_ac;
      param_1[2] = uStack_a8;
      *param_2 = uStack_c0;
      param_2[1] = uStack_bc;
      param_2[2] = uStack_b8;
      if (param_3 != (int *)0x0) {
        *param_3 = unaff_EBX;
        param_3[1] = iStack_cc;
        param_3[2] = iStack_c8;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = uVar4;
        param_4[1] = unaff_EDI;
        param_4[2] = unaff_ESI;
      }
      return 1;
    }
  }
LAB_20030506:
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  return 0;
}

