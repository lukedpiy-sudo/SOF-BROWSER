// rea decompile_all
// name: FUN_50044d60
// address: 0x50044d60
// body: available
// range: 0x50044d60-0x5004503b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50044d60(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  float *local_10;
  int *local_c;
  int local_8;
  void *local_4;
  
  piVar1 = param_1;
  pfVar7 = (float *)((int)this + 4);
  local_4 = this;
  FUN_50107a3c((int *)pfVar7,*(undefined4 **)this,100,&LAB_50044c80);
  iVar5 = 1;
  local_1c = 1;
  if (1 < *(int *)this) {
    iVar6 = *(int *)this + -1;
    do {
      if (pfVar7[0x19] != *pfVar7) {
        iVar5 = iVar5 + 1;
        local_1c = iVar5;
      }
      pfVar7 = pfVar7 + 0x19;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  piVar2 = operator_new(iVar5 << 2);
  local_c = piVar2;
  piVar3 = operator_new(local_1c * 4);
  iVar5 = 1;
  iVar6 = 0;
  local_20 = 1;
  local_18 = piVar3;
  if (1 < *(int *)this) {
    local_10 = (float *)((int)this + 4);
    iVar8 = (int)piVar2 - (int)piVar3;
    do {
      if (local_10[0x19] == *local_10) {
        if (local_10[0x1a] != local_10[1]) {
          iVar5 = iVar5 + 1;
        }
      }
      else {
        *(int *)(iVar8 + (int)piVar3) = iVar5;
        pvVar4 = operator_new(iVar5 << 2);
        *piVar3 = (int)pvVar4;
        iVar6 = iVar6 + 1;
        iVar5 = 1;
        piVar3 = piVar3 + 1;
      }
      local_10 = local_10 + 0x19;
      local_20 = local_20 + 1;
      piVar2 = local_c;
    } while (local_20 < *(int *)this);
  }
  if (iVar6 == local_1c + -1) {
    piVar2[iVar6] = iVar5;
    pvVar4 = operator_new(iVar5 * 4);
    local_18[iVar6] = (int)pvVar4;
  }
  iVar5 = 1;
  iVar6 = 0;
  local_20 = 1;
  if (1 < *(int *)this) {
    pfVar7 = (float *)((int)this + 4);
    piVar3 = local_18;
    do {
      if (pfVar7[0x19] == *pfVar7) {
        if (pfVar7[0x1a] == pfVar7[1]) {
          iVar5 = iVar5 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
          *(int *)(*piVar3 + -4 + iVar6 * 4) = iVar5;
          iVar5 = 1;
        }
      }
      else {
        iVar8 = *piVar3;
        piVar3 = piVar3 + 1;
        *(int *)(iVar8 + iVar6 * 4) = iVar5;
        iVar6 = 0;
        iVar5 = 1;
      }
      pfVar7 = pfVar7 + 0x19;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)this);
  }
  iVar6 = 0;
  *(int *)(local_18[local_1c + -1] + -4 + piVar2[local_1c + -1] * 4) = iVar5;
  FUN_5010784a(this,4,1,(int *)*param_1);
  FUN_5010784a((char *)&local_1c,4,1,(int *)*param_1);
  local_20 = 0;
  piVar3 = piVar2;
  if (0 < local_1c) {
    local_14 = (int)local_18 - (int)local_c;
    do {
      FUN_5010784a((char *)((int)this + iVar6 * 100 + 4),4,1,(int *)*piVar1);
      FUN_5010784a((char *)piVar2,4,1,(int *)*piVar1);
      local_10 = (float *)0x0;
      if (0 < *piVar2) {
        do {
          FUN_5010784a((char *)((int)this + iVar6 * 100 + 8),4,1,(int *)*piVar1);
          iVar5 = (int)local_10 * 4;
          FUN_5010784a((char *)(*(int *)(local_14 + (int)piVar2) + iVar5),4,1,(int *)*piVar1);
          local_8 = 0;
          if (0 < *(int *)(iVar5 + *(int *)(local_14 + (int)piVar2))) {
            param_1 = (int *)((int)this + iVar6 * 100 + 4);
            do {
              FUN_50044680(param_1,piVar1);
              param_1 = param_1 + 0x19;
              iVar6 = iVar6 + 1;
              local_8 = local_8 + 1;
            } while (local_8 < *(int *)(iVar5 + *(int *)(local_14 + (int)piVar2)));
          }
          local_10 = (float *)((int)local_10 + 1);
          this = local_4;
        } while ((int)local_10 < *piVar2);
      }
      local_20 = local_20 + 1;
      piVar2 = piVar2 + 1;
      piVar3 = local_c;
    } while (local_20 < local_1c);
  }
  FUN_50106b60((undefined *)piVar3);
  FUN_50106b60((undefined *)local_18);
  return;
}

