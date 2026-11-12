// rea decompile_all
// name: FUN_50065bf0
// address: 0x50065bf0
// body: available
// range: 0x50065bf0-0x50065d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_50065bf0(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,int *param_6)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  undefined4 local_24;
  undefined4 local_10;
  
  iVar4 = *(int *)this + param_1 * 0x14c;
  if (*(int *)(iVar4 + 0x128) != 0) {
    local_48 = param_2;
    local_44 = *param_3;
    local_10 = 0;
    local_40 = param_3[1];
    local_3c = param_3[2];
    local_38 = *param_4;
    local_34 = param_4[1];
    local_30 = param_4[2];
    local_24 = param_5;
    if (*(int *)(param_2 + 0x450) == 0) {
      fVar6 = *(float *)(iVar4 + 0x118);
    }
    else {
      fVar6 = *(float *)(iVar4 + 0x11c);
    }
    local_28 = iVar4;
    FUN_500ee7f0(fVar6);
    (**(code **)(iVar4 + 0x128))(&local_48);
  }
  if (param_6 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_6 + 0x88))();
    sVar1 = (**(code **)(*piVar2 + 0x1c))(s_flash_50133d48);
    if (sVar1 != 0) {
      iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
      iVar5 = *(int *)this + param_1 * 0x14c;
      if (iVar4 == 0) {
        if ((*(int *)(iVar5 + 0x13c) == 0) && (iVar5 + 0x94 != 0)) {
          uVar3 = (*DAT_5015c9f8)(iVar5 + 0x94);
          *(undefined4 *)(iVar5 + 0x13c) = uVar3;
        }
        iVar4 = *(int *)(iVar5 + 0x13c);
      }
      else {
        if ((*(int *)(iVar5 + 0x138) == 0) && (iVar5 + 0x54 != 0)) {
          uVar3 = (*DAT_5015c9f8)(iVar5 + 0x54);
          *(undefined4 *)(iVar5 + 0x138) = uVar3;
        }
        iVar4 = *(int *)(iVar5 + 0x138);
      }
      FUN_50085470(&DAT_5015c518,iVar4,param_1,param_6,sVar1,1,1,0);
    }
  }
  return;
}

