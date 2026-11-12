// rea decompile_all
// name: FUN_20053500
// address: 0x20053500
// body: available
// range: 0x20053500-0x200537ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20053500(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  int iStack_78;
  int local_74;
  undefined4 uStack_70;
  float fStack_6c;
  float afStack_5c [5];
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 local_38 [56];
  
  local_7c = DAT_20390228 - 0.25;
  local_84 = DAT_20390220;
  local_80 = DAT_20390224;
  if (DAT_20390234 <= 100.0) {
    puVar1 = (undefined4 *)
             (**(code **)(DAT_20390290 + 0xf0))
                       (local_38,&DAT_20390220,DAT_20390290 + 0xcc,DAT_20390290 + 0xd8,&local_84);
    puVar6 = &uStack_70;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar6 = puVar6 + 1;
    }
    pfVar5 = afStack_5c;
    pfVar7 = (float *)&DAT_20390264;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    DAT_20390278 = uStack_44;
    DAT_20390260 = uStack_48;
    if ((iStack_40 == 0) || ((afStack_5c[2] < 0.7 && (uStack_70._1_1_ == '\0')))) {
      *(undefined4 *)(DAT_20390290 + 0xe4) = 0;
      *(byte *)(DAT_20390290 + 0x10) = *(byte *)(DAT_20390290 + 0x10) & 0xfb;
    }
    else {
      *(int *)(DAT_20390290 + 0xe4) = iStack_40;
      if ((*(byte *)(DAT_20390290 + 0x10) & 8) != 0) {
        *(byte *)(DAT_20390290 + 0x10) = *(byte *)(DAT_20390290 + 0x10) & 199;
        *(undefined1 *)(DAT_20390290 + 0x11) = 0;
      }
      if (((*(byte *)(DAT_20390290 + 0x10) & 4) == 0) &&
         (*(byte *)(DAT_20390290 + 0x10) = *(byte *)(DAT_20390290 + 0x10) | 4, DAT_20390234 < -200.0
         )) {
        *(byte *)(DAT_20390290 + 0x10) = *(byte *)(DAT_20390290 + 0x10) | 0x10;
        if (-400.0 <= DAT_20390234) {
          *(undefined1 *)(DAT_20390290 + 0x11) = 0x12;
        }
        else {
          *(undefined1 *)(DAT_20390290 + 0x11) = 0x19;
        }
      }
    }
    if (((fStack_6c < 1.0) && (iStack_40 != 0)) && (DAT_20390234 < 0.0)) {
      DAT_20390234 = 0.0;
    }
    if ((*(int *)(DAT_20390290 + 0x38) < 0x20) && (iStack_40 != 0)) {
      *(int *)(DAT_20390290 + 0x3c + *(int *)(DAT_20390290 + 0x38) * 4) = iStack_40;
      *(int *)(DAT_20390290 + 0x38) = *(int *)(DAT_20390290 + 0x38) + 1;
    }
  }
  else {
    *(byte *)(DAT_20390290 + 0x10) = *(byte *)(DAT_20390290 + 0x10) & 0xfb;
    *(undefined4 *)(DAT_20390290 + 0xe4) = 0;
  }
  *(undefined4 *)(DAT_20390290 + 0xec) = 0;
  *(undefined4 *)(DAT_20390290 + 0xe8) = 0;
  iVar4 = DAT_20390290;
  iVar2 = __ftol();
  local_7c = DAT_20390228 + *(float *)(iVar4 + 0xd4) + 1.0;
  local_74 = iVar2;
  uVar3 = (**(code **)(iVar4 + 0xf4))(&local_84);
  if ((uVar3 & 0x38) != 0) {
    *(uint *)(DAT_20390290 + 0xe8) = uVar3;
    *(undefined4 *)(DAT_20390290 + 0xec) = 1;
    iStack_78 = iVar2 / 2;
    local_7c = (float)iStack_78 + *(float *)(DAT_20390290 + 0xd4) + DAT_20390228;
    uVar3 = (**(code **)(DAT_20390290 + 0xf4))(&local_84);
    if ((uVar3 & 0x38) != 0) {
      *(undefined4 *)(DAT_20390290 + 0xec) = 2;
      local_7c = (float)local_74 + *(float *)(DAT_20390290 + 0xd4) + DAT_20390228;
      uVar3 = (**(code **)(DAT_20390290 + 0xf4))(&local_84);
      if ((uVar3 & 0x38) != 0) {
        *(undefined4 *)(DAT_20390290 + 0xec) = 3;
      }
    }
  }
  return;
}

