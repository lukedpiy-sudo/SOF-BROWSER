// rea decompile_all
// name: FUN_500d2180
// address: 0x500d2180
// body: available
// range: 0x500d2180-0x500d23f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __cdecl FUN_500d2180(int param_1)

{
  float *pfVar1;
  short sVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
  iVar5 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  lVar7 = __ftol();
  fVar3 = (float)((uint)lVar7 & 0xffff) * 0.005493164;
  *(float *)(param_1 + 0x18) = fVar3;
  if (((fVar3 == 0.0) || (360.0 < fVar3 + 4.0)) || (fVar3 - 4.0 < 0.0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar4 = 1;
  }
  else if (fVar3 <= 180.0) {
    *(float *)(param_1 + 0x18) = fVar3 - 4.0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    *(float *)(param_1 + 0x18) = fVar3 + 4.0;
  }
  iVar6 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  sVar2 = *(short *)(iVar6 + 0x76);
  if (*(int *)(iVar6 + 0x50) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar6 + 0x50) + 0x1c);
  }
  pfVar1 = (float *)(param_1 + 0x10);
  FUN_500fdd70(pfVar1,&fStack_24,afStack_c,(float *)0x0);
  fStack_18 = fStack_24 * 100.0 + *(float *)(param_1 + 4);
  fStack_14 = fStack_20 * 100.0 + *(float *)(param_1 + 8);
  fStack_10 = fStack_1c * 100.0 + *(float *)(param_1 + 0xc);
  FUN_500d1fc0(param_1,&fStack_18,iVar6,sVar2);
  if (((*(uint *)(iVar5 + 0x194) & 0x40) != 0) && ((*(uint *)(iVar5 + 0x194) & 0x10) != 0)) {
    FUN_500fdd70(pfVar1,&fStack_24,afStack_c,(float *)0x0);
    fStack_24 = fStack_24 * 500.0 + *(float *)(param_1 + 4);
    fStack_20 = fStack_20 * 500.0 + *(float *)(param_1 + 8);
    fStack_1c = fStack_1c * 500.0 + *(float *)(param_1 + 0xc);
    FUN_500d3230(param_1,&fStack_24,1);
  }
  if (*pfVar1 <= 180.0) {
    if (-180.0 <= *pfVar1) goto LAB_500d236c;
    fVar3 = *pfVar1 + 360.0;
  }
  else {
    fVar3 = 360.0 - *pfVar1;
  }
  *pfVar1 = fVar3;
LAB_500d236c:
  if (((*pfVar1 < 0.0) || (*pfVar1 < 1.5 == (*pfVar1 == 1.5))) &&
     ((*pfVar1 < 0.0 == (*pfVar1 == 0.0) || (*pfVar1 < -1.5)))) {
    if (-1.5 <= *pfVar1) {
      *pfVar1 = *pfVar1 - 1.5;
      return 0;
    }
    *pfVar1 = *pfVar1 + 1.5;
    return 0;
  }
  *pfVar1 = 0.0;
  return uVar4;
}

