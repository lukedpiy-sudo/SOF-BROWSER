// rea decompile_all
// name: FUN_200412d0
// address: 0x200412d0
// body: available
// range: 0x200412d0-0x20041436 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200412d0(int param_1,float *param_2,undefined4 *param_3,char param_4,char param_5,
                 char param_6)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_7c [12];
  undefined4 local_70 [14];
  undefined1 local_38 [56];
  
  pfVar2 = (float *)(param_1 + 4);
  if (param_1 == 0) {
    pfVar2 = param_2;
  }
  local_b0 = *pfVar2;
  local_ac = pfVar2[1];
  local_a8 = pfVar2[2];
  if (param_1 != 0) {
    FUN_20054b30(param_1 + 0x10,local_7c,&local_94,0);
    if ((param_4 == '\0') && (param_5 == '\0')) {
      fVar1 = (float)(int)((-(uint)(param_6 != '\0') & 10) - 5);
      local_b0 = local_94 * fVar1 + local_b0;
      local_ac = local_90 * fVar1 + local_ac;
      local_a8 = local_8c * fVar1 + local_a8;
    }
  }
  local_80 = local_a8 + 10.0;
  local_88 = local_b0;
  local_84 = local_ac;
  local_a0 = local_b0;
  local_98 = local_a8 - 64.0;
  local_9c = local_ac;
  puVar3 = (undefined4 *)FUN_2002fdb0(local_38,&local_88,&DAT_20390c24,&DAT_20390c24,&local_a0);
  puVar6 = local_70;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = local_70;
  puVar6 = param_3;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  fVar1 = (float)param_3[1];
  if (fVar1 >= 0.99 && (fVar1 == 0.99) == 0) {
    return (uint)(byte)(fVar1 < 0.99 | (byte)((ushort)((ushort)(fVar1 == 0.99) << 0xe) >> 8)) << 8;
  }
  if ('*' < *(char *)(param_3[10] + 0x23)) {
    uVar4 = Com_Printf(s_Surface_out_of_range____20134f80);
    return uVar4 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)param_3[10] >> 8),1);
}

