// rea decompile_all
// name: FUN_500c3e40
// address: 0x500c3e40
// body: available
// range: 0x500c3e40-0x500c40c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl
FUN_500c3e40(float param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  float unaff_ESI;
  float unaff_EDI;
  ulonglong uVar5;
  longlong lVar6;
  float unaff_retaddr;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float in_stack_fffffff4;
  float in_stack_fffffff8;
  float in_stack_fffffffc;
  
  fVar3 = param_1;
  uVar4 = 0;
  if (*(int *)((int)param_1 + 0x30c) != 0) {
    if ((DAT_5015ccdc < *(float *)((int)param_1 + 0x36c)) && (*(int *)((int)param_1 + 0x2ec) < 1)) {
      uVar5 = __ftol();
      if ((int)((longlong)((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff) % 3)
          == 0) {
        piVar2 = *(int **)((int)fVar3 + 0x164);
        if (*(int *)((int)fVar3 + 0x374) == 0) {
          *(undefined4 *)((int)fVar3 + 0x374) = DAT_5015cca0;
        }
        FUN_5008c220(fVar3,*(float *)((int)fVar3 + 0x374),10.0,(int)fVar3,80.0,3.78351e-44,
                     2.8026e-45,unaff_EDI,unaff_ESI,in_stack_fffffff4,in_stack_fffffff8,
                     in_stack_fffffffc,unaff_retaddr,param_1,param_2,param_3,param_4,param_5);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x3c))(&stack0xfffffff8,&stack0xfffffff4,&param_1,&stack0xfffffffc)
          ;
          if (((0.2 < in_stack_fffffff8) || (0.2 < in_stack_fffffff4)) || (0.2 < param_1)) {
            in_stack_fffffff8 = in_stack_fffffff8 - 0.05;
            in_stack_fffffff4 = in_stack_fffffff4 - 0.05;
            param_1 = param_1 - 0.05;
            (**(code **)(*piVar2 + 0x40))
                      (in_stack_fffffff8,in_stack_fffffff4,param_1,in_stack_fffffffc);
          }
        }
      }
    }
    fVar1 = *(float *)((int)fVar3 + 0x370);
    uVar4 = (uint)(ushort)((ushort)(fVar1 < DAT_5015ccdc) << 8 |
                          (ushort)(fVar1 == DAT_5015ccdc) << 0xe);
    if (fVar1 >= DAT_5015ccdc && (fVar1 == DAT_5015ccdc) == 0) {
      uVar5 = __ftol();
      uVar5 = (ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff;
      uVar4 = (uint)((longlong)uVar5 / 3);
      if ((int)((longlong)uVar5 % 3) == 0) {
        if ((*(int *)((int)fVar3 + 0x2ec) < 1) &&
           (piVar2 = *(int **)((int)fVar3 + 0x164), piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 0x3c))(&stack0xfffffff4,&stack0xfffffff8,&param_1,&stack0xfffffffc)
          ;
          if ((0.2 < in_stack_fffffff4) || ((0.2 < in_stack_fffffff8 || (0.2 < param_1)))) {
            param_1 = param_1 - 0.05;
            (**(code **)(*piVar2 + 0x40))
                      (in_stack_fffffff4 - 0.05,in_stack_fffffff8 - 0.05,param_1,in_stack_fffffffc);
          }
        }
        if (*(int *)((int)fVar3 + 0x374) == 0) {
          *(undefined4 *)((int)fVar3 + 0x374) = DAT_5015cca0;
        }
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0x1b;
        uVar4 = 2;
        iVar7 = 0;
        lVar6 = __ftol();
        uVar4 = FUN_5008bb10(fVar3,fVar3,*(float *)((int)fVar3 + 0x374),(float *)&DAT_501557a0,
                             (float *)((int)fVar3 + 4),(float *)((int)fVar3 + 4),(int)lVar6,iVar7,
                             uVar4,uVar8,uVar9,uVar10);
      }
    }
  }
  return uVar4;
}

