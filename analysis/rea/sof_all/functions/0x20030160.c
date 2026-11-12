// rea decompile_all
// name: FUN_20030160
// address: 0x20030160
// body: available
// range: 0x20030160-0x200303b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20030160(float *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int aiStack_98 [3];
  undefined4 *puStack_8c;
  float *pfStack_88;
  float *pfStack_84;
  float *pfStack_80;
  float *pfStack_7c;
  undefined4 *puStack_78;
  float *pfStack_74;
  undefined *puStack_70;
  float *pfStack_6c;
  undefined *puStack_68;
  float *pfStack_64;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [56];
  
  pfStack_64 = (float *)&DAT_20367ebc;
  puStack_68 = (undefined *)0x20030171;
  fVar2 = (float)FUN_2001e260();
  param_1[0xe] = fVar2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (fVar2 == 0.0) {
    pfStack_64 = param_1;
    puStack_68 = &DAT_20367ebc;
    pfStack_6c = (float *)0x20030193;
    FUN_2001e4c0();
    pfVar1 = param_1 + 3;
    puStack_70 = &DAT_20367ebc;
    pfStack_74 = (float *)0x200301a1;
    pfStack_6c = pfVar1;
    FUN_2001e4c0();
    pfStack_74 = &local_50;
    pfStack_80 = &local_44;
    puStack_78 = &DAT_20390c24;
    pfStack_7c = (float *)&DAT_20390c24;
    pfStack_84 = (float *)local_38;
    *pfVar1 = *pfVar1 * 0.001;
    param_1[4] = param_1[4] * 0.001;
    param_1[5] = param_1[5] * 0.001;
    local_44 = *pfVar1 * 5.0 + *param_1;
    local_40 = param_1[4] * 5.0 + param_1[1];
    local_3c = param_1[5] * 5.0 + param_1[2];
    local_50 = *param_1 - *pfVar1 * 5.0;
    local_4c = param_1[1] - param_1[4] * 5.0;
    local_48 = param_1[2] - param_1[5] * 5.0;
    pfStack_88 = (float *)0x2003023f;
    puVar3 = (undefined4 *)FUN_200119c0();
    piVar5 = aiStack_98;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    FUN_200300d0(param_1);
    return;
  }
  if (fVar2 == 1.4013e-45) {
    pfStack_64 = param_1;
    puStack_68 = &DAT_20367ebc;
    param_1[0xc] = -NAN;
    pfStack_6c = (float *)0x20030274;
    FUN_2001e4c0();
    param_1[0xd] = -NAN;
    param_1[0xf] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 1.0;
    return;
  }
  if (fVar2 == 2.8026e-45) {
    puStack_68 = &DAT_20367ebc;
    pfStack_6c = (float *)0x200302a9;
    pfStack_64 = param_1 + 6;
    FUN_2001e4c0();
    pfVar1 = param_1 + 9;
    puStack_70 = &DAT_20367ebc;
    pfStack_74 = (float *)0x200302b7;
    pfStack_6c = pfVar1;
    FUN_2001e4c0();
    pfStack_74 = (float *)&DAT_20367ebc;
    *pfVar1 = *pfVar1 * 0.001;
    param_1[10] = param_1[10] * 0.001;
    param_1[0xb] = param_1[0xb] * 0.001;
    puStack_78 = (undefined4 *)0x200302e3;
    fVar2 = (float)FUN_2001e290();
    puStack_78 = (undefined4 *)&DAT_20367ebc;
    param_1[0xc] = fVar2;
    pfStack_7c = (float *)0x200302f0;
    fVar2 = (float)FUN_2001e260();
    param_1[0xd] = fVar2;
    pfStack_7c = param_1 + 3;
    pfStack_80 = param_1;
    puStack_8c = &DAT_2015eef8 + (int)param_1[0xc] * 99;
    aiStack_98[2] = 0x20030314;
    pfStack_88 = param_1 + 6;
    pfStack_84 = pfVar1;
    FUN_2002fff0();
    iVar4 = (int)param_1[0xc] * 0x18c;
    *param_1 = *(float *)(&DAT_2015f058 + (int)param_1[0xc] * 0x18c) + *param_1;
    param_1[1] = *(float *)(&DAT_2015f05c + iVar4) + param_1[1];
    fVar2 = *(float *)(&DAT_2015f060 + iVar4);
    param_1[0xf] = 0.0;
    param_1[2] = fVar2 + param_1[2];
    return;
  }
  if (fVar2 == 4.2039e-45) {
    pfStack_64 = param_1;
    puStack_68 = &DAT_20367ebc;
    param_1[0xc] = -NAN;
    pfStack_6c = (float *)0x2003036c;
    FUN_2001e4c0();
    pfVar1 = param_1 + 3;
    puStack_70 = &DAT_20367ebc;
    pfStack_74 = (float *)0x2003037a;
    pfStack_6c = pfVar1;
    FUN_2001e4c0();
    pfStack_74 = (float *)&DAT_20367ebc;
    *pfVar1 = *pfVar1 * 0.001;
    param_1[4] = param_1[4] * 0.001;
    param_1[5] = param_1[5] * 0.001;
    puStack_78 = (undefined4 *)0x200303a6;
    fVar2 = (float)FUN_2001e260();
    param_1[0xd] = fVar2;
    param_1[0xf] = 0.0;
  }
  return;
}

