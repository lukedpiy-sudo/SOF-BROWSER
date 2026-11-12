// rea decompile_all
// name: FUN_50073760
// address: 0x50073760
// body: available
// range: 0x50073760-0x500738ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 __cdecl
FUN_50073760(float param_1,float param_2,float param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  undefined4 unaff_ESI;
  ushort uVar16;
  undefined4 unaff_retaddr;
  int in_stack_00001030;
  uint in_stack_00001038;
  float *in_stack_0000103c;
  
  FUN_501074f0();
  FUN_500c2770(in_stack_0000103c,0x43000000,3,unaff_ESI,unaff_retaddr,param_1,param_2,param_3,
               param_4,param_5);
  fVar3 = *in_stack_0000103c + *(float *)(in_stack_00001038 + 0x11c);
  iVar15 = 0;
  fVar4 = *(float *)(in_stack_00001038 + 0x120) + in_stack_0000103c[1];
  fVar5 = *(float *)(in_stack_00001038 + 0x124) + in_stack_0000103c[2];
  fVar6 = *(float *)(in_stack_00001038 + 0x128) + *in_stack_0000103c;
  fVar7 = *(float *)(in_stack_00001038 + 300) + in_stack_0000103c[1];
  fVar8 = *(float *)(in_stack_00001038 + 0x130) + in_stack_0000103c[2];
  if (0 < in_stack_00001030) {
    do {
      iVar1 = *(int *)(&stack0x00000030 + iVar15 * 4);
      fVar9 = *(float *)(iVar1 + 4) + *(float *)(iVar1 + 0x11c);
      fVar10 = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x120);
      fVar11 = *(float *)(iVar1 + 0xc) + *(float *)(iVar1 + 0x124);
      fVar12 = *(float *)(iVar1 + 4) + *(float *)(iVar1 + 0x128);
      fVar13 = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 300);
      fVar14 = *(float *)(iVar1 + 0xc) + *(float *)(iVar1 + 0x130);
      in_stack_00001038 =
           (uint)(ushort)((ushort)(fVar9 < fVar6) << 8 | (ushort)(NAN(fVar9) || NAN(fVar6)) << 10 |
                         (ushort)(fVar9 == fVar6) << 0xe);
      if ((fVar9 < fVar6) &&
         (uVar16 = (ushort)(fVar12 < fVar3), uVar2 = (ushort)(fVar12 == fVar3),
         in_stack_00001038 = (uint)(ushort)(uVar16 << 8 | uVar2 << 0xe), uVar16 == 0 && uVar2 == 0))
      {
        in_stack_00001038 =
             (uint)(ushort)((ushort)(fVar10 < fVar7) << 8 |
                            (ushort)(NAN(fVar10) || NAN(fVar7)) << 10 |
                           (ushort)(fVar10 == fVar7) << 0xe);
        if ((fVar10 < fVar7) &&
           (uVar16 = (ushort)(fVar13 < fVar4), uVar2 = (ushort)(fVar13 == fVar4),
           in_stack_00001038 = (uint)(ushort)(uVar16 << 8 | uVar2 << 0xe), uVar16 == 0 && uVar2 == 0
           )) {
          in_stack_00001038 =
               (uint)(ushort)((ushort)(fVar11 < fVar8) << 8 |
                              (ushort)(NAN(fVar11) || NAN(fVar8)) << 10 |
                             (ushort)(fVar11 == fVar8) << 0xe);
          if ((fVar11 < fVar8) &&
             (uVar16 = (ushort)(fVar14 < fVar5) << 8 | (ushort)(fVar14 == fVar5) << 0xe,
             in_stack_00001038 = (uint)uVar16, fVar14 >= fVar5 && (fVar14 == fVar5) == 0)) {
            return uVar16;
          }
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < in_stack_00001030);
  }
  return (short)CONCAT31((int3)(in_stack_00001038 >> 8),1);
}

