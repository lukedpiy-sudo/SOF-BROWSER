// rea decompile_all
// name: FUN_501010c0
// address: 0x501010c0
// body: available
// range: 0x501010c0-0x50101226 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_501010c0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  float local_70 [10];
  int iStack_48;
  byte bStack_44;
  float fStack_40;
  float afStack_38 [14];
  
  (*DAT_5015cac0)(param_1 + 1,0,0,param_2 + 8,*param_1,0x22,local_70);
  if ((bStack_44 & 2) == 0) {
    if ((bStack_44 & 0x20) != 0) {
      iVar10 = 0;
      pfVar4 = local_70 + 2;
      uVar3 = 1;
      iVar7 = (*DAT_5015c9f8)(s_environ_bulletsplash_50150018);
      FUN_500852e0(&DAT_5015c518,iVar7,pfVar4,uVar3,iVar10);
    }
  }
  else if (((*(char *)(iStack_48 + 0x23) == '%') || (*(char *)(iStack_48 + 0x23) == '&')) ||
          (*(int *)((int)fStack_40 + 0x31c) == 7)) {
    uVar3 = *param_1;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = FUN_500658c0(param_1[8]);
    uVar2 = FUN_50065880(param_1[8]);
    uVar2 = uVar2 | 0x200;
    iVar7 = 1;
    FUN_50065850(param_1[8]);
    lVar6 = __ftol();
    FUN_5008bb10(fStack_40,uVar3,(float)uVar3,(float *)(param_1 + 4),local_70 + 2,
                 (float *)(param_1 + 1),(int)lVar6,iVar7,uVar2,uVar1,uVar8,uVar9);
    FUN_500f8fe0();
    uVar3 = (*DAT_5015cb24)(0,1);
    FUN_500658f0(param_1[8]);
    lVar6 = __ftol();
    pfVar4 = local_70;
    pfVar5 = afStack_38;
    for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    if ((*(int *)((int)fStack_40 + 0x74) == 0) && (*(int *)((int)fStack_40 + 0x450) == 0)) {
      iVar7 = (**(code **)(*DAT_5015c4d8 + 4))();
      if (iVar7 == 0) {
        FUN_500840d0((int)afStack_38,(float *)(param_1 + 4),(int)lVar6,1,uVar3);
      }
    }
    FUN_500ee7f0(0.2);
    return;
  }
  return;
}

