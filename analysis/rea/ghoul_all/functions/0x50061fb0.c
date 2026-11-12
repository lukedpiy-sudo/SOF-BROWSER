// rea decompile_all
// name: FUN_50061fb0
// address: 0x50061fb0
// body: available
// range: 0x50061fb0-0x50062253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_50061fb0(void *this,int param_1)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  undefined3 extraout_var;
  int *piVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  undefined4 unaff_EBP;
  uint local_10;
  undefined4 local_c;
  uint local_8 [2];
  
  iVar4 = param_1;
  iVar13 = *(int *)(param_1 + 0x45c);
  iVar11 = *(int *)(iVar13 + 0x40c);
  sVar2 = *(short *)(iVar13 + 0x408);
  local_10 = CONCAT22((short)((uint)unaff_EBP >> 0x10),sVar2);
  uVar8 = *(uint *)(*(int *)(iVar13 + 0x4c) + 0xc);
  if (uVar8 == *(ushort *)(iVar11 + 0x10)) {
    fVar1 = *(float *)(iVar11 + 0xc);
    if (DAT_5015ccdc < fVar1) {
      return CONCAT31((int3)(CONCAT22((short)(uVar8 >> 0x10),
                                      (ushort)(DAT_5015ccdc < fVar1) << 8 |
                                      (ushort)(NAN(DAT_5015ccdc) || NAN(fVar1)) << 10 |
                                      (ushort)(DAT_5015ccdc == fVar1) << 0xe) >> 8),1);
    }
  }
  if (*(int *)(iVar11 + 0x2c) != 0) {
    do {
      FUN_500499f0((void *)(iVar11 + 0x24),(int *)local_8,(int *)**(undefined4 **)(iVar11 + 0x28));
    } while (*(int *)(iVar11 + 0x2c) != 0);
  }
  *(undefined2 *)(iVar11 + 0x10) = 0;
  *(undefined2 *)(iVar11 + 0x30) = 0;
  *(undefined4 *)(iVar11 + 0xc) = 0;
  *(undefined4 *)(iVar11 + 0x20) = 0;
  if (sVar2 == 0) {
    bVar5 = FUN_50061b10(this,param_1,(short *)local_8,'\x01');
    puVar7 = (ushort *)CONCAT31(extraout_var,bVar5);
    if (!bVar5) goto LAB_500620e4;
    local_10 = local_8[0];
  }
  iVar13 = 0;
  piVar6 = *(int **)((int)this + 0xa8);
  if (piVar6 != *(int **)((int)this + 0xac)) {
    do {
      iVar11 = *piVar6;
      piVar6 = piVar6 + 1;
      *(undefined1 *)(iVar11 + 7) = 0;
      *(undefined1 *)(iVar11 + 6) = 0;
    } while (piVar6 != *(int **)((int)this + 0xac));
  }
  puVar7 = (ushort *)0x0;
  if (*(int *)((int)this + 0x98) != 0) {
    iVar11 = *(int *)((int)this + 0x9c) - *(int *)((int)this + 0x98);
    iVar13 = iVar11 / 0x1c;
    puVar7 = (ushort *)-(iVar11 >> 0x1f);
  }
  iVar13 = iVar13 + -1;
  if (0 < iVar13) {
    puVar7 = (ushort *)(*(int *)((int)this + 0x98) + 4 + iVar13 * 0x1c);
    do {
      uVar10 = (ushort)local_10;
      if ((puVar7[-1] <= uVar10) && (uVar10 <= *puVar7)) {
        if ('\0' < (char)iVar13) {
          if (*(int *)((int)this + 0x98) == 0) {
            puVar12 = (ushort *)0x0;
          }
          else {
            puVar12 = (ushort *)((*(int *)((int)this + 0x9c) - *(int *)((int)this + 0x98)) / 0x1c);
          }
          puVar7 = (ushort *)(int)(char)iVar13;
          if (puVar7 < puVar12) {
            uVar8 = FUN_50062b10((void *)((int)puVar7 * 0x1c + *(int *)((int)this + 0x98)),local_10)
            ;
            local_8[0] = CONCAT31(local_8[0]._1_3_,(char)uVar8);
            uVar3 = *(ushort *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x4c) + 0xc);
            if (*(int *)((int)this + 0x98) == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = (*(int *)((int)this + 0x9c) - *(int *)((int)this + 0x98)) / 0x1c;
            }
            iVar11 = iVar11 + -1;
            if (iVar11 < 1) goto LAB_500621a8;
            puVar12 = (ushort *)(*(int *)((int)this + 0x98) + 4 + iVar11 * 0x1c);
            goto LAB_50062195;
          }
        }
        break;
      }
      iVar13 = iVar13 + -1;
      puVar7 = puVar7 + -0xe;
    } while (0 < iVar13);
  }
  goto LAB_500620da;
  while( true ) {
    iVar11 = iVar11 + -1;
    puVar12 = puVar12 + -0xe;
    if (iVar11 < 1) break;
LAB_50062195:
    if ((puVar12[-1] <= uVar3) && (uVar3 <= *puVar12)) goto LAB_500621aa;
  }
LAB_500621a8:
  iVar11 = 0;
LAB_500621aa:
  param_1 = CONCAT31(param_1._1_3_,(char)iVar11);
  uVar8 = FUN_50062b10((void *)(*(int *)((int)this + 0x98) + (char)iVar11 * 0x1c),
                       CONCAT22((short)((uint)iVar13 >> 0x10),uVar3));
  local_c = CONCAT31(local_c._1_3_,(char)uVar8);
  puVar7 = (ushort *)
           FUN_500625d0((void *)((int)puVar7 * 0x1c + *(int *)((int)this + 0x98)),iVar4,local_8[0],
                        local_c,param_1,0);
  if ((char)puVar7 != '\0') {
    *(undefined2 *)(*(int *)(*(int *)(iVar4 + 0x45c) + 0x40c) + 0x10) =
         *(undefined2 *)(*(int *)(*(int *)(iVar4 + 0x45c) + 0x4c) + 0xc);
    *(float *)(*(int *)(*(int *)(iVar4 + 0x45c) + 0x40c) + 0xc) = DAT_5015ccdc + 20.0;
    uVar9 = FUN_50062c60(*(void **)(*(int *)(iVar4 + 0x45c) + 0x40c),iVar4,uVar10);
    DAT_50159b14 = 0;
    return CONCAT31((int3)((uint)uVar9 >> 8),1);
  }
LAB_500620da:
  DAT_50159b14 = 0;
LAB_500620e4:
  return (uint)puVar7 & 0xffffff00;
}

