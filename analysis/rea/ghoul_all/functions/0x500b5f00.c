// rea decompile_all
// name: FUN_500b5f00
// address: 0x500b5f00
// body: available
// range: 0x500b5f00-0x500b627e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_500b5f00(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float10 fVar8;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e4;
  float local_e0;
  float local_d8;
  int local_d4;
  int local_d0;
  undefined1 local_cc [64];
  undefined4 local_8c;
  float local_88 [16];
  undefined4 local_48;
  undefined1 local_44 [64];
  undefined4 local_4;
  
  uVar7 = 1;
  iVar2 = *param_1;
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x164) == 0)) ||
     ((*(char *)((int)param_1 + 0x3d) == '\0' && ((char)param_1[0xf] == '\0')))) {
    return 3;
  }
  fVar3 = (float)param_1[10];
  local_e0 = (float)param_1[0xb];
  local_e4 = (float)param_1[8];
  fVar4 = (float)param_1[9];
  local_48 = 0;
  local_8c = 0;
  local_4 = 0;
  FUN_500c3da0((undefined4 *)(iVar2 + 4),(float *)(iVar2 + 0x10),local_88);
  local_d8 = (float)param_1[5];
  local_d4 = param_1[6];
  local_d0 = param_1[7];
  FUN_500ec880(local_cc,local_88);
  FUN_500ed3e0(local_cc,&local_f8,&local_d8);
  fVar8 = (float10)fpatan((float10)local_f4,(float10)local_f8);
  iVar2 = *param_1;
  local_100 = (float)-fVar8;
  fVar8 = (float10)fpatan((float10)local_f0,
                          SQRT((float10)local_f8 * (float10)local_f8 +
                               (float10)local_f4 * (float10)local_f4));
  local_fc = (float)fVar8;
  FUN_500ecdf0(local_44,-*(float *)(iVar2 + 4),-*(float *)(iVar2 + 8),-*(float *)(iVar2 + 0xc));
  FUN_500ed3e0(local_44,&local_f8,&local_d8);
  fVar8 = (float10)fpatan((float10)local_f4,(float10)local_f8);
  fVar1 = (float)-fVar8;
  fVar8 = (float10)fpatan((float10)local_f0,
                          SQRT((float10)local_f8 * (float10)local_f8 +
                               (float10)local_f4 * (float10)local_f4));
  iVar2 = *param_1;
  fVar5 = *(float *)(iVar2 + 0x14) * -0.017453292;
  fVar6 = *(float *)(iVar2 + 0x10) * -0.017453292;
  if (fVar1 <= 3.1415927) {
    if (fVar1 < -3.1415927) {
      fVar1 = fVar1 + 6.2831855;
    }
  }
  else {
    fVar1 = -(6.2831855 - fVar1);
  }
  if (fVar8 <= (float10)3.141592653589793) {
    if (fVar8 < (float10)-3.141592653589793) {
      fVar8 = fVar8 + (float10)6.283185307179586;
    }
  }
  else {
    fVar8 = -((float10)6.283185307179586 - fVar8);
  }
  if (((fVar1 < fVar3 - 0.0005) && (*(char *)((int)param_1 + 0x3d) != '\0')) ||
     ((local_e0 + 0.0005 < fVar1 && (fVar3 = local_e0, *(char *)((int)param_1 + 0x3d) != '\0')))) {
    local_100 = fVar3 - fVar5;
    uVar7 = 3;
  }
  if (((fVar8 < (float10)local_e4 - (float10)0.0005) && ((char)param_1[0xf] != '\0')) ||
     (((float10)fVar4 + (float10)0.0005 < fVar8 && (local_e4 = fVar4, (char)param_1[0xf] != '\0'))))
  {
    local_fc = local_e4 - fVar6;
    uVar7 = 3;
  }
  local_108 = local_100;
  if ((local_100 <= (float)param_1[0xc]) || (*(char *)((int)param_1 + 0x3d) == '\0')) {
    if ((local_100 < -(float)param_1[0xc]) && (*(char *)((int)param_1 + 0x3d) != '\0')) {
      uVar7 = 2;
      local_108 = -(float)param_1[0xc];
    }
  }
  else {
    uVar7 = 2;
    local_108 = (float)param_1[0xc];
  }
  if ((local_fc <= (float)param_1[0xc]) || ((char)param_1[0xf] == '\0')) {
    if ((-(float)param_1[0xc] <= local_fc) ||
       (fVar1 = -(float)param_1[0xc], (char)param_1[0xf] == '\0')) goto LAB_500b6227;
  }
  else {
    fVar1 = (float)param_1[0xc];
  }
  local_fc = fVar1;
  uVar7 = 2;
LAB_500b6227:
  if (*(char *)((int)param_1 + 0x3d) != '\0') {
    *(float *)(iVar2 + 0x14) = -(local_108 + fVar5) * 57.29578;
  }
  if ((char)param_1[0xf] == '\0') {
    return uVar7;
  }
  *(float *)(*param_1 + 0x10) = -(local_fc + fVar6) * 57.29578;
  return uVar7;
}

