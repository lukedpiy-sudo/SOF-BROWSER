// rea decompile_all
// name: FUN_2003e360
// address: 0x2003e360
// body: available
// range: 0x2003e360-0x2003e581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003e360(int param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 extraout_ST0;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0.0;
  local_28 = param_3;
  if (4 < param_3) {
    param_3 = __ftol();
  }
  local_28 = param_3;
  fVar5 = (float10)flrand(0x3f4ccccd,0x3f99999a);
  local_20 = (float)fVar5;
  fVar5 = (float10)flrand(0x3f4ccccd,0x3f99999a);
  local_24 = (float)fVar5;
  local_1c = param_3 + 1;
  param_3 = 1;
  if (1 < local_1c) {
    local_2c = 8;
    do {
      iVar3 = FUN_2003b170(&local_30);
      if (iVar3 == 0) {
        return;
      }
      local_4 = (float)param_3;
      iVar3 = param_4 * 0x10;
      fVar1 = local_4 * *(float *)(&DAT_201346e0 + iVar3) * local_24;
      fVar2 = local_4 * *(float *)(&DAT_201346e4 + iVar3) * local_20;
      local_18 = fVar2 * *param_2 + fVar1 * *(float *)(param_1 + 0xc);
      local_14 = fVar2 * param_2[1] + fVar1 * *(float *)(param_1 + 0x10);
      local_10 = fVar2 * param_2[2] + fVar1 * *(float *)(param_1 + 0x14) + (float)local_2c;
      local_4 = local_4 * *(float *)(&DAT_201346e8 + iVar3);
      FUN_20038130(local_30,(int)*(short *)(&DAT_201346ec + iVar3),8,(&DAT_201346ef)[iVar3],
                   (float *)(param_1 + 0xc));
      fVar1 = (float)local_28;
      iVar4 = *(int *)(param_1 + 0x34) * 0x10;
      flrand(0,0x40c90fdb);
      FUN_20039e00(local_30,param_1,fVar1,fVar1,(&DAT_201348b8)[iVar4],(&DAT_201348b9)[iVar4],
                   (&DAT_201348ba)[iVar4],(&DAT_201348bb)[iVar4],(float)extraout_ST0);
      FUN_20039c90(local_30,&local_18,&local_c,0,
                   (float)(int)((uint)(byte)(&DAT_201346ee)[iVar3] * param_3) /
                   ((float)(int)*(short *)(&DAT_201346ec + iVar3) * 0.001),
                   (float)(int)-(uint)*(byte *)(local_30 + 0x2f) /
                   ((float)(int)*(short *)(&DAT_201346ec + iVar3) * 0.001),0);
      param_3 = param_3 + 1;
      local_2c = local_2c + 8;
    } while (param_3 < local_1c);
  }
  return;
}

