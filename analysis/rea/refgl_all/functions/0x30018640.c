// rea decompile_all
// name: FUN_30018640
// address: 0x30018640
// body: available
// range: 0x30018640-0x30018b39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x30018b2d to 0x3001b650 FUN_3001b650 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30018640(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float unaff_retaddr;
  int iStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  (*DAT_300a446c)();
  FUN_3001b650();
  for (puVar1 = *(uint **)((int)unaff_retaddr + 0x28); puVar1 != (uint *)0x0;
      puVar1 = (uint *)*puVar1) {
    (*DAT_300a4710)();
    iStack_34 = 0;
    pfVar6 = (float *)(puVar1 + 2);
    if (0 < (int)puVar1[1]) {
      do {
        fVar2 = pfVar6[3];
        fVar3 = pfVar6[4];
        FUN_30008ff0(pfVar6,&fStack_14,0xff);
        lVar7 = __ftol();
        fStack_24 = (fVar2 + *(float *)(&DAT_3002fac8 + ((uint)lVar7 & 0xff) * 4)) * 0.015625;
        lVar7 = __ftol();
        fStack_20 = *pfVar6;
        fStack_1c = pfVar6[1];
        fStack_18 = pfVar6[2];
        fStack_28 = (fVar3 + *(float *)(&DAT_3002fac8 + ((uint)lVar7 & 0xff) * 4)) * 0.015625;
        if (*(float *)(DAT_3008fc98 + 0x18) != 0.0) {
          fStack_14 = (float)(*puVar1 & 0xff) * 0.003921569;
          uStack_30 = (uint)puVar1 & 0xff;
          fStack_10 = (float)((int)*puVar1 >> 8 & 0xff) * 0.003921569;
          fStack_c = (float)uStack_30 * 0.003921569;
        }
        if ((*(uint *)(*(int *)((int)unaff_retaddr + 0x34) + 0x20) & 0x2000) == 0) {
          (*DAT_300a4724)(&fStack_14);
        }
        else {
          lVar7 = __ftol();
          lVar8 = __ftol();
          FUN_30018b40((int)&fStack_20,&fStack_2c);
          fVar2 = (fStack_2c + 4.5) * 0.099999994 + 0.1;
          (*DAT_300a46f8)(fVar2 * fStack_14,fStack_10 * fVar2,fStack_c * fVar2,
                          (*(float *)(&DAT_3002fac8 + ((uint)lVar7 & 0xff) * 4) * 0.5625 *
                           *(float *)(&DAT_3002fac8 + ((uint)lVar8 & 0xff) * 4) * 0.125 + 4.5) *
                          0.038888887 + 0.6);
          unaff_retaddr = fStack_14;
        }
        (*DAT_300a42f4)(iStack_34,fVar3);
        (*DAT_300a4520)(&stack0xffffffc8);
        iStack_34 = iStack_34 + 1;
        pfVar6 = pfVar6 + 7;
      } while (iStack_34 < (int)puVar1[1]);
    }
    (*DAT_300a45f4)();
  }
  if (*(float *)(DAT_3008fc98 + 0x18) != 0.0) {
    (*DAT_300a4490)(0x3f800000,0x3f800000);
  }
  if (((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(*(int *)(param_1 + 0x5c) + 0x40) == 8)) &&
     (*(float *)(DAT_3008fc98 + 0x18) == 0.0)) {
    DAT_300a4610 = 0x306;
    DAT_300a43fc = 0x300;
    if ((DAT_300a4388 == 0x306) && (DAT_300a45d8 == 0x300)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    FUN_300062a0(0x2100);
    (*DAT_300a4460)(0x2000,0x2500);
    (*DAT_300a4460)(0x2001,0x2500,0x2402);
    DAT_300a46e0 = DAT_300a46e0 | 0x40;
    if (((byte)DAT_300a4588 & 0x40) != 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 | 0x80;
    if ((char)(byte)DAT_300a4588 < '\0') {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    FUN_3001b650();
    (*DAT_300a45a4)(*(undefined4 *)((int)unaff_retaddr + 4));
    (*DAT_300a46f8)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    for (puVar4 = *(undefined4 **)((int)unaff_retaddr + 0x28); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      (*DAT_300a4710)(6);
      iVar5 = 0;
      if (0 < (int)puVar4[1]) {
        do {
          if ((*(uint *)(*(int *)(uStack_30 + 0x34) + 0x20) & 0x2000) != 0) {
            __ftol();
          }
          (*DAT_300a4520)(&stack0xffffffb4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)puVar4[1]);
      }
      (*DAT_300a45f4)();
    }
    DAT_300a46e0 = DAT_300a46e0 & 0xffffffbf;
    if (((byte)DAT_300a4588 & 0x40) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 & 0xffffff7f;
    if (-1 < (char)(byte)DAT_300a4588) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a4610 = 0x302;
    DAT_300a43fc = 0x303;
    if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    FUN_3001b650();
    return;
  }
  return;
}

