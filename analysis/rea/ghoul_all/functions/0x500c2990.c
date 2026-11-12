// rea decompile_all
// name: FUN_500c2990
// address: 0x500c2990
// body: available
// range: 0x500c2990-0x500c2b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall
FUN_500c2990(void *this,float *param_1,float param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  float afStack_24 [3];
  float local_18 [6];
  
  iVar7 = 0;
  *(undefined4 *)((int)this + 0x1000) = 0;
  if (param_3 != 0) {
    FUN_500b1ee0(&DAT_5015d9c0,param_1,param_2,(int)this,param_5);
    return this;
  }
  local_18[3] = *param_1;
  local_18[0] = *param_1;
  local_18[4] = param_1[1];
  local_18[5] = param_1[2];
  local_18[1] = param_1[1];
  local_18[2] = param_1[2];
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(float *)((int)local_18 + iVar2 + 0xc) = *(float *)((int)local_18 + iVar2 + 0xc) - param_2;
    *(float *)((int)local_18 + iVar2) = param_2 + *(float *)((int)local_18 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 < 0xc);
  iVar2 = (*DAT_5015cb30)(local_18 + 3,local_18,this,0x400,1);
  *(int *)((int)this + 0x1000) = iVar2;
  if (0 < iVar2) {
    do {
      iVar1 = *(int *)((int)this + iVar7 * 4);
      if (*(int *)(iVar1 + 0x78) == 0) {
LAB_500c2abd:
        *(undefined4 *)((int)this + iVar7 * 4) = 0;
        *(int *)((int)this + 0x1000) = *(int *)((int)this + 0x1000) + -1;
      }
      else {
        iVar3 = 0;
        pfVar5 = (float *)(iVar1 + 0x11c);
        do {
          iVar1 = iVar3 + 1;
          local_18[iVar3 + -3] = param_1[iVar3] - ((pfVar5[3] + *pfVar5) * 0.5 + pfVar5[-0x46]);
          iVar3 = iVar1;
          pfVar5 = pfVar5 + 1;
        } while (iVar1 < 3);
        if (param_2 * param_2 <
            afStack_24[0] * afStack_24[0] +
            afStack_24[1] * afStack_24[1] + afStack_24[2] * afStack_24[2]) goto LAB_500c2abd;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  piVar6 = (int *)((int)this + iVar2 * 4 + -4);
  piVar4 = this;
  do {
    iVar7 = *piVar4;
    for (; (iVar7 != 0 && (piVar4 < piVar6)); piVar4 = piVar4 + 1) {
      iVar7 = piVar4[1];
    }
    iVar7 = *piVar6;
    for (; (iVar7 == 0 && (piVar4 < piVar6)); piVar6 = piVar6 + -1) {
      iVar7 = piVar6[-1];
    }
    iVar7 = *piVar6;
    piVar6 = piVar6 + -1;
    *piVar4 = iVar7;
    piVar4 = piVar4 + 1;
  } while (piVar4 < piVar6);
  return this;
}

