// rea decompile_all
// name: FUN_30014120
// address: 0x30014120
// body: available
// range: 0x30014120-0x30014306 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30014120(float param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iStack_4;
  
  FUN_30006170('\0');
  DAT_3008fda0 = DAT_3008fda0 + 1;
  iVar2 = *(int *)((int)param_1 + 0x34);
  if (*(int *)(iVar2 + 0x28) != 0) {
    if (((*(uint *)(iVar2 + 0x20) & 0x1000) == 0) ||
       (*(char *)(*(int *)(iVar2 + 0x2c) + 0x55) == '\0')) {
      iVar3 = *(int *)(DAT_3008fed8 + 0x34);
    }
    else {
      lVar4 = __ftol();
      iVar3 = (int)lVar4;
    }
    for (iVar3 = iVar3 % *(int *)(iVar2 + 0x24); iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar2 = *(int *)(iVar2 + 0x28);
    }
  }
  iVar2 = *(int *)(iVar2 + 0x2c);
  FUN_30006400(iVar2);
  if ((*(byte *)(*(int *)((int)param_1 + 0x34) + 0x20) & 8) == 0) {
    if (*(float *)(DAT_3008ff2c + 0x18) == 0.0) {
      uVar5 = 0x1e01;
    }
    else {
      uVar5 = 0x2100;
    }
    FUN_300062a0(uVar5);
    if (*(float *)(DAT_3008fc84 + 0x18) < 3.0) {
      (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000);
      FUN_30014010(param_1);
    }
    if ((((*(int *)(iVar2 + 0x5c) != 0) &&
         ((*(uint *)(*(int *)((int)param_1 + 0x34) + 0x20) & 0x400) == 0)) &&
        (*(float *)(DAT_3008fc84 + 0x18) != 0.0)) && (DAT_300a3730 < 0x400)) {
      (&DAT_300a1728)[DAT_300a3730] = param_1;
      DAT_300a3730 = DAT_300a3730 + 1;
    }
    iVar2 = FUN_30014310((int)param_1,&iStack_4);
    if ((char)iVar2 != '\0') {
      bVar1 = *(byte *)(iStack_4 + 0x50 + (int)param_1);
      if ((((0x1f < bVar1) || (bVar1 == 0)) || (bVar1 == 0xd)) &&
         (*(int *)((int)param_1 + 0x44) != DAT_3008fd90)) {
        FUN_300143a0();
        *(float *)((int)param_1 + 0x30) = (&DAT_30090028)[*(int *)((int)param_1 + 0x4c)];
        (&DAT_30090028)[*(int *)((int)param_1 + 0x4c)] = param_1;
        return;
      }
      *(float *)((int)param_1 + 0x30) = DAT_30090028;
      DAT_30090028 = param_1;
      return;
    }
    *(float *)((int)param_1 + 0x30) = (&DAT_30090028)[*(int *)((int)param_1 + 0x4c)];
    (&DAT_30090028)[*(int *)((int)param_1 + 0x4c)] = param_1;
  }
  else {
    FUN_300062a0(0x2100);
    (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000);
    FUN_30018640((int)param_1);
    if (*(int *)((int)param_1 + 0x38) != 0) {
      FUN_30012710((int)param_1);
      return;
    }
  }
  return;
}

