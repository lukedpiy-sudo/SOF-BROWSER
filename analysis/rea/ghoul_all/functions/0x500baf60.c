// rea decompile_all
// name: FUN_500baf60
// address: 0x500baf60
// body: available
// range: 0x500baf60-0x500bb0d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_500baf60(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int unaff_ESI;
  int *in_stack_00004028;
  undefined1 *puVar10;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  uint uStack_10;
  
  FUN_501074f0();
  uStack_10 = 0;
  _uStack_14 = 0;
  uVar6 = (*DAT_5015cb48)(0x47484c49,&stack0x00000024);
  uStack_10 = 0x500baf92;
  piVar7 = (int *)(**(code **)(*in_stack_00004028 + 0x60))();
  _uStack_14 = 0x33;
  uVar4 = (**(code **)(*piVar7 + 0x98))(&stack0x00000024,uVar6,&PTR_DAT_5014dda8);
  uStack_10 = (uint)uVar4;
  bVar1 = true;
  piVar3 = (int *)DAT_50165b40[1];
  piVar2 = DAT_50165b40;
  while (piVar3 != DAT_50165b44) {
    bVar1 = (short)uVar4 < (short)piVar3[3];
    piVar2 = piVar3;
    if (bVar1) {
      piVar3 = (int *)*piVar3;
    }
    else {
      piVar3 = (int *)piVar3[2];
    }
  }
  if (DAT_50165b48 == '\0') {
    if (bVar1) {
      piVar9 = (int *)FUN_500fc2d0(&DAT_50165b3c,(undefined4 *)&stack0x00000008);
      if (piVar2 == (int *)*piVar9) {
        puVar10 = &uStack_11;
        _uStack_14 = CONCAT13(1,_uStack_14);
        puVar8 = (undefined4 *)
                 FUN_500bbdc0(&DAT_50165b3c,(undefined4 *)&stack0x00000000,(int)piVar3,piVar2,
                              (short *)&uStack_10);
        goto LAB_500bb0ab;
      }
      FUN_500bc010((int *)&stack0xfffffff4);
      uVar4 = (ushort)uStack_10;
    }
    if ((short)piVar2[3] < (short)uVar4) {
      puVar10 = &uStack_14;
      _uStack_14 = CONCAT31(_uStack_13,1);
      puVar8 = (undefined4 *)
               FUN_500bbdc0(&DAT_50165b3c,(undefined4 *)&stack0x00000004,(int)piVar3,piVar2,
                            (short *)&uStack_10);
    }
    else {
      puVar10 = &uStack_12;
      puVar8 = (undefined4 *)&stack0xfffffff4;
      _uStack_14 = (uint3)_uStack_14;
    }
  }
  else {
    puVar10 = &uStack_13;
    _uStack_14 = CONCAT11(1,uStack_14);
    puVar8 = (undefined4 *)
             FUN_500bbdc0(&DAT_50165b3c,(undefined4 *)&stack0x0000000c,(int)piVar3,piVar2,
                          (short *)&uStack_10);
  }
LAB_500bb0ab:
  FUN_50010d30(&stack0xfffffff8,puVar8,puVar10);
  uVar5 = (**(code **)(*piVar7 + 0x9c))();
  *(undefined2 *)(unaff_ESI + 0xe) = uVar5;
  return piVar7;
}

