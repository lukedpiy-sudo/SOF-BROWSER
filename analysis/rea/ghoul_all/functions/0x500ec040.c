// rea decompile_all
// name: FUN_500ec040
// address: 0x500ec040
// body: available
// range: 0x500ec040-0x500ec29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_500ec040(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined3 extraout_var;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST0;
  int unaff_retaddr;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 auStack_48 [3];
  undefined1 auStack_3c [4];
  float fStack_38;
  uint uStack_c;
  
  iVar6 = (**(code **)(*param_1 + 0x228))();
  uVar10 = 0;
  if (((iVar6 != 0) && (uVar10 = *(uint *)(iVar6 + 0x60), uVar10 != 0)) &&
     (piVar14 = *(int **)(uVar10 + 0x1c), piVar14 != (int *)0x0)) {
    piVar7 = (int *)(**(code **)(*piVar14 + 0x88))();
    uVar10 = 0;
    if (piVar7 != (int *)0x0) {
      puVar8 = (undefined4 *)(**(code **)(*piVar7 + 0x1c))(s_flash_machine_gun_50153f78);
      FUN_500d3000((undefined4 *)(unaff_retaddr + 4),(float *)(param_1[0x61] + 0x10),piVar14,puVar8,
                   0,auStack_48,&fStack_54);
      if ((*(char *)((int)param_1 + 0x291) != '\0') &&
         ((*DAT_5015cac0)(auStack_48,0,0,param_1 + 0xa6,unaff_retaddr,3,auStack_3c),
         fStack_38 < 0.95)) {
        uVar10 = uStack_c;
        if ((uStack_c == 0) || (uStack_c == DAT_5015cca0)) goto LAB_500ec292;
        if (*(int *)(uStack_c + 0x450) != 0) {
          bVar5 = FUN_500887e0(uStack_c,unaff_retaddr);
          uVar10 = CONCAT31(extraout_var,bVar5);
          if (uVar10 != 0) goto LAB_500ec292;
        }
      }
      iVar6 = DAT_5015d950;
      fVar3 = DAT_5015ccdc - (float)param_1[0xa5];
      fVar11 = (float10)(*DAT_5015cb20)(0,0x3e4ccccd);
      iVar9 = DAT_5015d950;
      fVar11 = fVar11 * (float10)iVar6 + (float10)0.2;
      uVar1 = (ushort)(DAT_5015ccdc - (float)param_1[0xa5] < 0.0);
      uVar2 = (ushort)(DAT_5015ccdc - (float)param_1[0xa5] == 0.0);
      uVar10 = (uint)(ushort)(uVar1 << 8 | uVar2 << 0xe);
      if (uVar1 == 0 && uVar2 == 0) {
        if ((float10)fVar3 < fVar11) {
          iVar17 = 0;
          iVar16 = 0;
          uVar15 = 1;
          fVar3 = (float)(5 - DAT_5015d950) * 0.03;
          iVar6 = unaff_retaddr;
          iVar9 = (*DAT_5015c9f8)(s_weapons_othermz_machinegun_50143f0c);
          FUN_50085470(&DAT_5015c518,iVar9,iVar6,piVar14,(short)puVar8,uVar15,iVar16,iVar17);
          fVar4 = -fVar3;
          fVar11 = (float10)(*DAT_5015cb20)(fVar4,fVar3);
          fVar12 = (float10)(*DAT_5015cb20)(fVar4,fVar3);
          fVar13 = (float10)(*DAT_5015cb20)(fVar4,fVar3);
          fStack_54 = (float)(fVar13 + (float10)fStack_54);
          fStack_50 = fStack_50 + (float)fVar12;
          fStack_4c = fStack_4c + (float)fVar11;
          uVar15 = FUN_500659c0(&DAT_50159b18,0xc,unaff_retaddr,auStack_48,&fStack_54,(float *)0x0,
                                (undefined4 *)0x0);
          return CONCAT31((int3)((uint)uVar15 >> 8),1);
        }
      }
      else if ((float10)fVar3 < fVar11) goto LAB_500ec292;
      uVar10 = (*DAT_5015cb20)(0x3e99999a,0x3f19999a);
      param_1[0xa5] = (int)(float)(extraout_ST0 * (float10)(5 - iVar9) + (float10)DAT_5015ccdc);
    }
  }
LAB_500ec292:
  return CONCAT31((int3)(uVar10 >> 8),1);
}

