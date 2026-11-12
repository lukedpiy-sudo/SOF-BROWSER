// rea decompile_all
// name: FUN_50104cc2
// address: 0x50104cc2
// body: available
// range: 0x50104cc2-0x50104fba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_50104cc2(undefined4 param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,undefined4 param_9,float param_10)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  int in_stack_0000105c;
  int *in_stack_00001064;
  float *in_stack_0000106c;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  if (in_stack_0000106c != (float *)0x0) {
    _DAT_5015c530 = *in_stack_0000106c;
    _DAT_5015c534 = in_stack_0000106c[1];
    _DAT_5015c538 = in_stack_0000106c[2];
    DAT_5015c51c = DAT_5015c51c | 8;
  }
  iVar12 = 0;
  uVar10 = 1;
  pfVar1 = (float *)(in_stack_00001064 + 1);
  pfVar9 = pfVar1;
  iVar4 = (*DAT_5015c9f8)(s_weapons_world_sluggren_50155d84);
  FUN_500852e0(&DAT_5015c518,iVar4,pfVar9,uVar10,iVar12);
  FUN_500ee7f0(0.1);
  if (in_stack_0000106c == (float *)0x0) {
    param_3 = *pfVar1;
    param_4 = (float)in_stack_00001064[2];
    param_5 = (float)in_stack_00001064[3];
  }
  else {
    param_3 = *in_stack_0000106c * 8.0 + *pfVar1;
    param_4 = in_stack_0000106c[1] * 8.0 + (float)in_stack_00001064[2];
    param_5 = in_stack_0000106c[2] * 8.0 + (float)in_stack_00001064[3];
  }
  FUN_500c2990(&stack0x0000005c,&param_3,210.0,0,0,0);
  param_2 = 0;
  if (0 < in_stack_0000105c) {
    do {
      fVar2 = *(float *)(&stack0x0000005c + param_2 * 4);
      if (((*(int *)((int)fVar2 + 0x74) != 0) || (*(int *)((int)fVar2 + 0x450) != 0)) ||
         (*(int *)((int)fVar2 + 0x30c) != 0)) {
        pfVar9 = (float *)((int)fVar2 + 4);
        (*DAT_5015cac0)(&param_3,&DAT_5018bf0c,&DAT_5018bf0c,pfVar9,in_stack_00001064,3,&param_9);
        if (0.99 <= param_10) {
          param_6 = *pfVar9 - *pfVar1;
          param_7 = *(float *)((int)fVar2 + 8) - (float)in_stack_00001064[2];
          param_8 = *(float *)((int)fVar2 + 0xc) - (float)in_stack_00001064[3];
          fVar5 = (float10)FUN_500fe050(&param_6);
          lVar6 = __ftol();
          iVar4 = (int)lVar6;
          fVar3 = (float)in_stack_00001064[0x58];
          if (fVar2 == fVar3) {
            lVar6 = __ftol();
            iVar4 = (int)lVar6;
          }
          uVar11 = 0;
          uVar10 = 0;
          uVar8 = 0x25;
          uVar7 = 0x80;
          if (*(int *)((int)fVar2 + 0x74) == 0) {
            lVar6 = __ftol();
            iVar4 = (int)lVar6;
            lVar6 = __ftol();
            iVar12 = (int)lVar6;
          }
          else {
            lVar6 = __ftol();
            iVar12 = (int)lVar6;
          }
          FUN_5008bb10(fVar2,in_stack_00001064,fVar3,&param_6,pfVar1,pfVar9,iVar12,iVar4,uVar7,uVar8
                       ,uVar10,uVar11);
          iVar4 = *(int *)((int)fVar2 + 0x74);
          if (iVar4 == 0) {
            if (*(int **)((int)fVar2 + 0x450) != (int *)0x0) {
              (**(code **)(**(int **)((int)fVar2 + 0x450) + 0x6c))(2,0x41c80000,2,0x41c80000);
            }
          }
          else {
            *(float *)(iVar4 + 0x4e4) =
                 (float)((float10)1.0 - fVar5 * (float10)0.004) + 0.2 + *(float *)(iVar4 + 0x4e4);
            if (0.95 < *(float *)(*(int *)((int)fVar2 + 0x74) + 0x4e4)) {
              *(undefined4 *)(*(int *)((int)fVar2 + 0x74) + 0x4e4) = 0x3f733333;
            }
            iVar4 = *(int *)((int)fVar2 + 0x74);
            if ((*(float *)(iVar4 + 0x4e8) < 0.0 != (*(float *)(iVar4 + 0x4e8) == 0.0)) ||
               (0.15 < *(float *)(iVar4 + 0x4e8))) {
              *(undefined4 *)(iVar4 + 0x4e8) = 0x3e19999a;
            }
            uVar10 = 0x1e;
            lVar6 = __ftol();
            FUN_50083b60((int)fVar2,0x11 - (int)lVar6,uVar10);
          }
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < in_stack_0000105c);
  }
  FUN_500c3880(in_stack_00001064);
  return;
}

