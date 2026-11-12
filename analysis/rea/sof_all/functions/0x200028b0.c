// rea decompile_all
// name: FUN_200028b0
// address: 0x200028b0
// body: available
// range: 0x200028b0-0x20002e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200028b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  float10 fVar13;
  
  puVar1 = (undefined4 *)(param_2 + 0x34);
  iVar9 = 0x32;
  puVar10 = puVar1;
  if (param_1 == 0) {
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
  }
  else {
    puVar10 = (undefined4 *)(param_1 + 0x34);
    puVar11 = puVar1;
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  uVar5 = FUN_2001e310(&DAT_20367ebc);
  if ((uVar5 & 0x10000) != 0) {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0xa4) = uVar4;
    uVar4 = FUN_2001e260(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0xa6) = uVar4;
    piVar6 = (int *)FUN_20069630(1,0);
    uVar7 = (**(code **)(*piVar6 + 0x24))(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0xa4)));
    *(undefined4 *)(param_2 + 0xa0) = uVar7;
  }
  if ((uVar5 & 0x20000) != 0) {
    uVar4 = FUN_2001e260(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0xa8) = uVar4;
  }
  if ((uVar5 & 0x40000) != 0) {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0xaa) = uVar4;
  }
  if ((uVar5 & 0x40000000) != 0) {
    bVar2 = FUN_2001e260(&DAT_20367ebc);
    *(byte *)(param_2 + 0xac) = bVar2;
    if (DAT_20225040 != bVar2) {
      DAT_20225918 = 1;
      DAT_20225040 = (uint)bVar2;
    }
  }
  if ((uVar5 & 0x10000000) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0xad) = uVar3;
  }
  if ((uVar5 & 0x20000000) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0xae) = uVar3;
  }
  if ((uVar5 & 0x100000) != 0) {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0xb4) = uVar4;
    piVar6 = (int *)FUN_20069630(1,0);
    uVar7 = (**(code **)(*piVar6 + 0x24))(CONCAT22(extraout_var_00,*(undefined2 *)(param_2 + 0xb4)))
    ;
    *(undefined4 *)(param_2 + 0xb0) = uVar7;
  }
  if ((uVar5 & 1) != 0) {
    uVar7 = FUN_2001e260(&DAT_20367ebc);
    *puVar1 = uVar7;
    if ((DAT_201e7e94 == 7) || (DAT_201e7e94 == 2)) {
      uVar7 = 0x3f800000;
    }
    else {
      uVar7 = 0x40800000;
    }
    Cvar_SetValue(s_r_nearclipdist_2011c834,uVar7);
  }
  if ((uVar5 & 2) != 0) {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x38) = uVar4;
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x3a) = uVar4;
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x3c) = uVar4;
  }
  if ((uVar5 & 4) != 0) {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x3e) = uVar4;
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x40) = uVar4;
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x42) = uVar4;
  }
  if ((uVar5 & 8) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0x45) = uVar3;
  }
  if ((uVar5 & 0x10) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0x44) = uVar3;
  }
  if ((uVar5 & 0x20) != 0) {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x46) = uVar4;
  }
  if ((uVar5 & 0x40) != 0) {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x48) = uVar4;
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x4a) = uVar4;
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0x4c) = uVar4;
  }
  if ((uVar5 & 0x8000000) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0x4e) = uVar3;
  }
  if (DAT_201e947c != '\0') {
    *puVar1 = 5;
  }
  if ((char)uVar5 < '\0') {
    iVar9 = FUN_2001e230(&DAT_20367ebc);
    *(float *)(param_2 + 0x5c) = (float)iVar9 * 0.25;
    iVar9 = FUN_2001e230(&DAT_20367ebc);
    *(float *)(param_2 + 0x60) = (float)iVar9 * 0.25;
    iVar9 = FUN_2001e230(&DAT_20367ebc);
    *(float *)(param_2 + 100) = (float)iVar9 * 0.2 + 14.6;
  }
  if ((uVar5 & 0x100) != 0) {
    fVar13 = (float10)FUN_2001e5f0(&DAT_20367ebc);
    *(float *)(param_2 + 0x50) = (float)fVar13;
    fVar13 = (float10)FUN_2001e5f0(&DAT_20367ebc);
    *(float *)(param_2 + 0x54) = (float)fVar13;
    fVar13 = (float10)FUN_2001e5f0(&DAT_20367ebc);
    *(float *)(param_2 + 0x58) = (float)fVar13;
  }
  if ((char)(uVar5 >> 8) < '\0') {
    fVar13 = (float10)FUN_2001e5f0(&DAT_20367ebc);
    *(float *)(param_2 + 0x8c) = (float)fVar13;
    fVar13 = (float10)FUN_2001e5f0(&DAT_20367ebc);
    *(float *)(param_2 + 0x90) = (float)fVar13;
    fVar13 = (float10)FUN_2001e5f0(&DAT_20367ebc);
    *(float *)(param_2 + 0x94) = (float)fVar13;
  }
  if ((uVar5 & 0x1000) != 0) {
    iVar9 = FUN_2001e290(&DAT_20367ebc);
    *(float *)(param_2 + 0x80) = (float)iVar9;
    iVar9 = FUN_2001e290(&DAT_20367ebc);
    *(float *)(param_2 + 0x84) = (float)iVar9;
    iVar9 = FUN_2001e290(&DAT_20367ebc);
    *(float *)(param_2 + 0x88) = (float)iVar9;
  }
  if ((uVar5 & 0x2000) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0x9c) = uVar3;
    uVar7 = FUN_2001e260(&DAT_20367ebc);
    *(undefined4 *)(param_2 + 0x98) = uVar7;
  }
  if ((uVar5 & 0x200) != 0) {
    iVar9 = FUN_2001e230(&DAT_20367ebc);
    *(float *)(param_2 + 0x68) = (float)iVar9 * 0.25;
    iVar9 = FUN_2001e230(&DAT_20367ebc);
    *(float *)(param_2 + 0x6c) = (float)iVar9 * 0.25;
    iVar9 = FUN_2001e230(&DAT_20367ebc);
    *(float *)(param_2 + 0x70) = (float)iVar9 * 0.25;
  }
  if ((uVar5 & 0x80000) != 0) {
    iVar9 = FUN_2001e230(&DAT_20367ebc);
    *(float *)(param_2 + 0x74) = (float)iVar9 * 0.25;
  }
  if ((uVar5 & 0x400) != 0) {
    iVar9 = FUN_2001e260(&DAT_20367ebc);
    *(float *)(param_2 + 0xb8) = (float)iVar9 * 0.003921569;
    iVar9 = FUN_2001e260(&DAT_20367ebc);
    *(float *)(param_2 + 0xbc) = (float)iVar9 * 0.003921569;
    iVar9 = FUN_2001e260(&DAT_20367ebc);
    *(float *)(param_2 + 0xc0) = (float)iVar9 * 0.003921569;
    iVar9 = FUN_2001e260(&DAT_20367ebc);
    *(float *)(param_2 + 0xc4) = (float)iVar9 * 0.003921569;
  }
  if ((uVar5 & 0x800) != 0) {
    iVar9 = FUN_2001e260(&DAT_20367ebc);
    *(float *)(param_2 + 200) = (float)iVar9;
  }
  if ((uVar5 & 0x4000) != 0) {
    uVar7 = FUN_2001e260(&DAT_20367ebc);
    *(undefined4 *)(param_2 + 0xcc) = uVar7;
  }
  uVar8 = FUN_2001e310(&DAT_20367ebc);
  iVar9 = 0;
  puVar12 = (undefined2 *)(param_2 + 0xd8);
  do {
    if ((uVar8 & 1 << ((byte)iVar9 & 0x1f)) != 0) {
      uVar4 = FUN_2001e290(&DAT_20367ebc);
      *puVar12 = uVar4;
    }
    iVar9 = iVar9 + 1;
    puVar12 = puVar12 + 1;
  } while (iVar9 < 0x10);
  if ((uVar5 & 0x400000) != 0) {
    bVar2 = FUN_2001e260(&DAT_20367ebc);
    *(byte *)(param_2 + 0xfb) = bVar2;
    Cvar_SetValue(s_cl_cinematicfreeze_2011c820,(float)bVar2);
  }
  if ((uVar5 & 0x800000) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0xd2) = uVar3;
  }
  if ((uVar5 & 0x1000000) != 0) {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    *(undefined2 *)(param_2 + 0xd0) = uVar4;
  }
  if ((uVar5 & 0x2000000) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0xf8) = uVar3;
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0xf9) = uVar3;
  }
  if ((uVar5 & 0x4000000) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    *(undefined1 *)(param_2 + 0xfa) = uVar3;
  }
  return;
}

