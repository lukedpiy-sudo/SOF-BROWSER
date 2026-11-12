// rea decompile_all
// name: FUN_50067640
// address: 0x50067640
// body: available
// range: 0x50067640-0x500678b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_50067640(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  void *pvVar7;
  int local_40;
  void *local_3c;
  undefined4 *local_38;
  undefined4 local_34 [2];
  int local_2c [3];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501143fb;
  local_c = ExceptionList;
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 4), 0 < iVar1)) && (iVar1 < 0x28)) &&
     (iVar2 = *(int *)(&DAT_5015c7bc + iVar1 * 4), iVar2 != 0)) {
    if ((iVar1 < 1) || (0x27 < iVar1)) {
      iVar2 = 0;
    }
    local_40 = *(int *)(iVar2 + 0x54);
    pvVar7 = (void *)((int)this + 4);
    ExceptionList = &local_c;
    local_3c = pvVar7;
    FUN_5006b1a0(pvVar7,(int *)&local_38,&local_40);
    iVar1 = param_1;
    if (local_38 != *(undefined4 **)((int)this + 8)) {
      pvVar7 = (void *)local_38[4];
      local_3c = (void *)0x0;
      local_3c = (void *)FUN_500672d0(pvVar7,param_1);
      if (local_3c == (void *)0x0) {
        pvVar3 = operator_new(0x38);
        if (pvVar3 == (void *)0x0) {
          local_3c = (void *)0x0;
        }
        else {
          local_3c = (void *)FUN_50067300(pvVar3,iVar1,param_2);
        }
        FUN_5000a290((void *)((int)pvVar7 + 8),&param_1,*(int *)((int)pvVar7 + 0xc),(int *)&local_3c
                    );
      }
      ExceptionList = local_c;
      return local_38[4];
    }
    puVar4 = operator_new(0x14);
    iVar1 = local_40;
    local_4 = 0;
    local_38 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *(undefined1 *)(puVar4 + 2) = (undefined1)param_1;
      uVar5 = FUN_5006b170((undefined4 *)0x0,0);
      puVar4[3] = uVar5;
      puVar4[4] = 0;
      puVar4[1] = iVar1;
      *puVar4 = &PTR_FUN_50128814;
      pvVar7 = local_3c;
    }
    local_4 = 0xffffffff;
    local_2c[0] = local_40;
    local_2c[1] = 0;
    piVar6 = (int *)FUN_500c7c80(pvVar7,local_34,local_2c);
    *(undefined4 **)(*piVar6 + 0x10) = puVar4;
    FUN_5006b1a0(pvVar7,(int *)&local_38,&local_40);
    if (local_38 != *(undefined4 **)((int)this + 8)) {
      iVar1 = local_38[4];
      local_3c = (void *)0x0;
      piVar6 = (int *)FUN_500fc2d0((void *)(iVar1 + 8),local_34);
      local_38 = (undefined4 *)*piVar6;
      if (local_38 != *(undefined4 **)(iVar1 + 0xc)) {
        do {
          if (*(int *)(local_38[2] + 4) == param_1) {
            local_3c = (void *)local_38[2];
            goto LAB_50067818;
          }
          FUN_50049a30(&local_38,local_2c);
        } while (local_38 != *(undefined4 **)(iVar1 + 0xc));
      }
      local_3c = (void *)0x0;
LAB_50067818:
      if (local_3c == (void *)0x0) {
        pvVar3 = operator_new(0x38);
        if (pvVar3 == (void *)0x0) {
          local_3c = (void *)0x0;
        }
        else {
          local_3c = (void *)FUN_50067300(pvVar3,param_1,param_2);
        }
        FUN_5000a290((void *)(iVar1 + 8),&param_1,*(int *)(iVar1 + 0xc),(int *)&local_3c);
      }
      local_2c[2] = local_40;
      local_20 = 0;
      FUN_5000a5e0(pvVar7,&local_1c,local_2c + 2);
      FUN_50010d30(local_14,&local_1c,local_18);
      ExceptionList = local_c;
      return *(undefined4 *)(local_14[0] + 0x10);
    }
  }
  ExceptionList = local_c;
  return 0;
}

