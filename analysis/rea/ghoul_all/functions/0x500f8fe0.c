// rea decompile_all
// name: FUN_500f8fe0
// address: 0x500f8fe0
// body: available
// range: 0x500f8fe0-0x500f9211 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_500f8fe0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int *piVar8;
  int in_stack_00001000;
  int in_stack_00001008;
  float *in_stack_0000100c;
  int in_stack_00001010;
  int in_stack_00001014;
  float in_stack_00001018;
  undefined4 in_stack_0000101c;
  int in_stack_00001020;
  int in_stack_00001024;
  
  FUN_501074f0();
  fVar7 = 0.0;
  FUN_5004f700(in_stack_00001008,in_stack_0000100c,in_stack_00001018,0);
  iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
  if ((iVar4 == 0) && ((*(byte *)(in_stack_00001008 + 0x1a0) & 0x20) == 0)) {
    if (in_stack_00001010 == 4) {
      if (in_stack_00001014 != 0) {
        FUN_500b1920(in_stack_00001014);
      }
    }
    else {
      FUN_500c2990(&stack0x00000000,in_stack_0000100c,in_stack_00001018,1,in_stack_0000101c,0);
      iVar4 = 0;
      if (0 < in_stack_00001000) {
        do {
          fVar7 = *(float *)(&stack0x00000000 + iVar4 * 4);
          if ((*(int *)((int)fVar7 + 0x450) != 0) && (*(int *)((int)fVar7 + 0x2f8) != 2)) {
            if (in_stack_00001020 == 0) {
LAB_500f90e4:
              FUN_500b1920((int)fVar7);
              if (in_stack_00001024 != 0) {
                (**(code **)(**(int **)((int)fVar7 + 0x450) + 0x8c))
                          (in_stack_00001008 + 4,in_stack_00001008 + 4,in_stack_00001008);
              }
            }
            else {
              iVar6 = in_stack_00001008;
              if (in_stack_00001014 != 0) {
                iVar6 = in_stack_00001014;
              }
              iVar5 = FUN_500b0e70(fVar7,iVar6);
              if (iVar5 != 0) {
                iVar6 = FUN_500b0d40((int)fVar7,iVar6,0);
                if (iVar6 != 0) goto LAB_500f90e4;
              }
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < in_stack_00001000);
      }
      if (in_stack_00001020 == 0) {
        if (DAT_5015db24 == 0) {
          FUN_500b2270(0x5015d9c0);
        }
        if (-1 < DAT_5015dae0 + -1) {
          piVar8 = (int *)(&DAT_5015dae4 + (DAT_5015dae0 + -1) * 4);
          iVar4 = DAT_5015dae0;
          do {
            if (DAT_5015db24 == 0) {
              FUN_500b2270(0x5015d9c0);
            }
            iVar6 = DAT_5015cca0 + *piVar8 * 0x464;
            if (((iVar6 != 0) && (*(code **)(iVar6 + 0x2c4) != (code *)0x0)) &&
               (fVar1 = *(float *)(iVar6 + 4) - *in_stack_0000100c,
               fVar3 = *(float *)(iVar6 + 8) - in_stack_0000100c[1],
               fVar2 = *(float *)(iVar6 + 0xc) - in_stack_0000100c[2],
               fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 < (float)*(int *)(iVar6 + 0x2ec))) {
              (**(code **)(iVar6 + 0x2c4))(iVar6,fVar7,fVar7);
            }
            piVar8 = piVar8 + -1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    _DAT_5018b43c = 0;
  }
  return;
}

