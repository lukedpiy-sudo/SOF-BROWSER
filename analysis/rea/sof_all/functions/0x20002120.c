// rea decompile_all
// name: FUN_20002120
// address: 0x20002120
// body: available
// range: 0x20002120-0x2000244c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20002120(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  float10 fVar8;
  
  puVar6 = param_2;
  for (iVar5 = 0x1d; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  *param_2 = param_3;
  if ((param_4 & 0x100000) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    param_2[8] = uVar3;
  }
  if ((param_4 & 0x200) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    param_2[9] = uVar3;
  }
  if ((param_4 & 0x20000) != 0) {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    param_2[10] = uVar3;
  }
  if ((param_4 & 0x1000) != 0) {
    uVar3 = FUN_2001e290(&DAT_20367ebc);
    param_2[10] = uVar3;
  }
  if (((param_4 & 0x80000) == 0) || ((param_4 & 0x2000000) == 0)) {
    if ((param_4 & 0x80000) != 0) {
      uVar3 = FUN_2001e260(&DAT_20367ebc);
      goto LAB_200021de;
    }
    if ((param_4 & 0x2000000) != 0) {
      uVar3 = FUN_2001e290(&DAT_20367ebc);
      goto LAB_200021de;
    }
  }
  else {
    uVar3 = FUN_2001e310(&DAT_20367ebc);
LAB_200021de:
    param_2[0xb] = uVar3;
  }
  if ((param_4 & 0x14000) == 0x14000) {
    uVar3 = FUN_2001e310(&DAT_20367ebc);
LAB_20002223:
    param_2[0xc] = uVar3;
  }
  else {
    if ((param_4 & 0x10000) != 0) {
      uVar3 = FUN_2001e260(&DAT_20367ebc);
      goto LAB_20002223;
    }
    if ((param_4 & 0x4000) != 0) {
      uVar3 = FUN_2001e290(&DAT_20367ebc);
      goto LAB_20002223;
    }
  }
  if ((param_4 & 0x500) == 0x500) {
    uVar3 = FUN_2001e310(&DAT_20367ebc);
LAB_20002265:
    param_2[0xd] = uVar3;
  }
  else {
    if ((param_4 & 0x400) != 0) {
      uVar3 = FUN_2001e260(&DAT_20367ebc);
      goto LAB_20002265;
    }
    if ((param_4 & 0x100) != 0) {
      uVar3 = FUN_2001e290(&DAT_20367ebc);
      goto LAB_20002265;
    }
  }
  if ((param_4 & 1) != 0) {
    fVar8 = (float10)FUN_2001e460(&DAT_20367ebc);
    param_2[1] = (float)fVar8;
  }
  if ((param_4 & 2) != 0) {
    fVar8 = (float10)FUN_2001e460(&DAT_20367ebc);
    param_2[2] = (float)fVar8;
  }
  if ((param_4 & 0x20) != 0) {
    fVar8 = (float10)FUN_2001e460(&DAT_20367ebc);
    param_2[3] = (float)fVar8;
  }
  if ((param_4 & 0x10) != 0) {
    fVar8 = (float10)FUN_2001e5a0(&DAT_20367ebc);
    param_2[4] = (float)fVar8;
  }
  if ((param_4 & 4) != 0) {
    fVar8 = (float10)FUN_2001e5a0(&DAT_20367ebc);
    param_2[5] = (float)fVar8;
  }
  if ((param_4 & 0x4000000) != 0) {
    fVar8 = (float10)FUN_2001e5a0(&DAT_20367ebc);
    param_2[7] = (float)fVar8;
  }
  if ((param_4 & 8) != 0) {
    fVar8 = (float10)FUN_2001e5a0(&DAT_20367ebc);
    param_2[6] = (float)fVar8;
  }
  if ((param_4 & 0x200000) != 0) {
    iVar5 = FUN_2001e260(&DAT_20367ebc);
    param_2[0xf] = iVar5;
    if ((param_4 & 0x400000) != 0) {
      param_2[0xf] = iVar5 + 0x100;
    }
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    param_2[0x10] = uVar3;
  }
  if ((param_4 & 0x40) == 0) {
    param_2[0x11] = 0;
LAB_200023a8:
    param_2[0x12] = 0;
  }
  else {
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    param_2[0x11] = uVar3;
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    param_2[0x14] = uVar3;
    if (-1 < *(char *)(param_2 + 0x11)) goto LAB_200023a8;
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    param_2[0x12] = uVar3;
    uVar3 = FUN_2001e260(&DAT_20367ebc);
    param_2[0x15] = uVar3;
    if (*(char *)(param_2 + 0x12) < '\0') {
      uVar3 = FUN_2001e260(&DAT_20367ebc);
      param_2[0x13] = uVar3;
      uVar3 = FUN_2001e260(&DAT_20367ebc);
      param_2[0x16] = uVar3;
      goto LAB_200023ae;
    }
  }
  param_2[0x13] = 0;
LAB_200023ae:
  if ((param_4 & 0x40000) != 0) {
    uVar3 = FUN_2001e310(&DAT_20367ebc);
    param_2[0xe] = uVar3;
  }
  if ((param_4 & 0x2000) != 0) {
    uVar4 = FUN_2001e290(&DAT_20367ebc);
    iVar5 = 2;
    puVar7 = (undefined2 *)((int)param_2 + 0x5e);
    do {
      bVar1 = (byte)iVar5;
      if ((uVar4 & 1 << (bVar1 - 2 & 0x1f)) != 0) {
        uVar2 = FUN_2001e290(&DAT_20367ebc);
        puVar7[-1] = uVar2;
      }
      if ((uVar4 & 1 << (bVar1 - 1 & 0x1f)) != 0) {
        uVar2 = FUN_2001e290(&DAT_20367ebc);
        *puVar7 = uVar2;
      }
      if ((uVar4 & 1 << (bVar1 & 0x1f)) != 0) {
        uVar2 = FUN_2001e290(&DAT_20367ebc);
        puVar7[1] = uVar2;
      }
      iVar5 = iVar5 + 3;
      puVar7 = puVar7 + 3;
    } while (iVar5 < 0xe);
  }
  return;
}

