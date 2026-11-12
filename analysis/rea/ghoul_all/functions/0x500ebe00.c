// rea decompile_all
// name: FUN_500ebe00
// address: 0x500ebe00
// body: available
// range: 0x500ebe00-0x500ec030 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_500ebe00(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 extraout_var;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float in_stack_ffffffa0;
  float fVar11;
  float in_stack_ffffffa4;
  float in_stack_ffffffa8;
  float in_stack_ffffffac;
  float in_stack_ffffffb0;
  float in_stack_ffffffb4;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [8];
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = (**(code **)(*param_1 + 0x228))();
  piVar4 = (int *)0x0;
  if (((iVar3 != 0) && (piVar4 = *(int **)(iVar3 + 0x5c), piVar4 != (int *)0x0)) &&
     (piVar1 = (int *)piVar4[7], piVar1 != (int *)0x0)) {
    piVar4 = (int *)(**(code **)(*piVar1 + 0x88))();
    if ((piVar4 != (int *)0x0) && (iVar2 = *(int *)(iVar3 + 0x54), iVar2 != 0)) {
      fVar9 = *(float *)(iVar3 + 0x98);
      if (fVar9 != 0.0) {
LAB_500ebf26:
        if (fVar9 >= 500.0 && (fVar9 == 500.0) == 0) {
          *(float *)(iVar3 + 0x98) = fVar9 - 500.0;
          return (uint)(byte)(fVar9 < 500.0 | (byte)((ushort)((ushort)(fVar9 == 500.0) << 0xe) >> 8)
                             ) << 8;
        }
        *(undefined4 *)(iVar3 + 0x98) = 0;
        piVar4 = FUN_500c3690();
        fVar9 = *(float *)(iVar3 + 0xa0);
        fVar10 = *(float *)(iVar3 + 0xa4);
        fVar11 = *(float *)(iVar3 + 0xa8) + 10.0;
        iVar8 = 0;
        uVar7 = 1;
        piVar4[0x58] = iVar2;
        piVar4[1] = (int)fVar9;
        puVar6 = &stack0xffffff98;
        piVar4[2] = (int)fVar10;
        piVar4[3] = (int)fVar11;
        iVar3 = (*DAT_5015c9f8)(s_weapons_world_rocketexplode_50152a98);
        FUN_500852e0(&DAT_5015c518,iVar3,puVar6,uVar7,iVar8);
        FUN_5008c220((float)piVar4,(float)piVar4[0x58],130.0,(int)piVar4,150.0,0.0,4.59177e-41,
                     unaff_EDI,unaff_ESI,unaff_EBX,fVar9,fVar10,fVar11,in_stack_ffffffa4,
                     in_stack_ffffffa8,in_stack_ffffffac,in_stack_ffffffb0,in_stack_ffffffb4);
        FUN_500b1950((float)piVar4,150.0,250.0,unaff_EDI,unaff_ESI,unaff_EBX);
        FUN_500aeb50(piVar4 + 1,1.4013e-43,4.2039e-43,4.2039e-44);
        uVar7 = FUN_500c3880(piVar4);
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      }
      puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x1c))(s_flash_canon_50153f6c);
      FUN_500d3000((undefined4 *)(iVar2 + 4),(float *)(iVar2 + 0x10),piVar1,puVar5,0,
                   (undefined4 *)&stack0xffffffa0,(undefined4 *)&stack0xffffffac);
      fStack_48 = in_stack_ffffffac * 4096.0 + in_stack_ffffffa0;
      fStack_44 = in_stack_ffffffb0 * 4096.0 + in_stack_ffffffa4;
      fStack_40 = in_stack_ffffffb4 * 4096.0 + in_stack_ffffffa8;
      (*DAT_5015cac0)(&stack0xffffffa0,0,0,&fStack_48,iVar2,3,auStack_3c);
      piVar4 = (int *)CONCAT22(extraout_var,
                               (ushort)(1.0 < fStack_34) << 8 | (ushort)NAN(fStack_34) << 10 |
                               (ushort)(fStack_34 == 1.0) << 0xe);
      if (fStack_34 != 1.0) {
        fVar9 = fStack_34 * 4000.0;
        *(undefined4 *)(iVar3 + 0xa0) = uStack_30;
        *(undefined4 *)(iVar3 + 0xa4) = uStack_2c;
        *(undefined4 *)(iVar3 + 0xa8) = uStack_28;
        goto LAB_500ebf26;
      }
      goto LAB_500ec026;
    }
  }
  *(undefined4 *)(iVar3 + 0x98) = 0;
LAB_500ec026:
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}

