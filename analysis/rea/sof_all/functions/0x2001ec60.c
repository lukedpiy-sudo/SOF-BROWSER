// rea decompile_all
// name: FUN_2001ec60
// address: 0x2001ec60
// body: available
// range: 0x2001ec60-0x2001ef4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001ec60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int *local_9c [2];
  int *local_94;
  int local_90;
  int local_88;
  int *local_84;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined4 local_78;
  undefined *local_74;
  int *local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ae3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2001fcf0(&local_7e,0,&local_7d);
  uVar2 = local_78;
  uVar1 = local_7c;
  local_4 = 0;
  puVar5 = DAT_20249e58;
  if (DAT_20249e58 != &DAT_20249e54) {
    do {
      local_74 = *(undefined **)(puVar5 + 4);
      local_9c[0] = (int *)(int)*(short *)(puVar5 + 10);
      FUN_2001fd60(&local_70,local_9c);
      local_84 = local_70;
      if (local_70 == local_94) {
        local_48 = local_7c;
        local_44 = local_78;
        local_4c = (int)*(short *)(puVar5 + 10);
        FUN_2001fdd0(local_5c,&local_4c);
        FUN_2008c5b0(local_5c,local_58);
        *(undefined4 *)(local_54 + 0x10) = *(undefined4 *)(puVar5 + 0xc);
        local_28 = (int)*(short *)(puVar5 + 10);
        local_24 = local_54;
        local_20 = local_50;
        FUN_2001fdd0(local_64,&local_28);
        FUN_2008c5b0(local_64,local_60);
        *(undefined4 *)(local_1c + 0x14) = 1;
      }
      else {
        local_3c = uVar1;
        local_38 = uVar2;
        local_40 = (int)*(short *)(puVar5 + 10);
        FUN_2001fdd0(&local_7c,&local_40);
        FUN_2008c5b0(&local_7c,&local_78);
        local_2c = local_68;
        *(int *)(local_6c + 0x10) = *(int *)(local_6c + 0x10) + *(int *)(puVar5 + 0xc);
        local_34 = (int)*(short *)(puVar5 + 10);
        local_30 = local_6c;
        piVar3 = (int *)FUN_2001fc30(local_14,&local_34);
        *(int *)(*piVar3 + 0x14) = *(int *)(*piVar3 + 0x14) + 1;
      }
      puVar5 = local_74;
    } while (local_74 != &DAT_20249e54);
  }
  local_84 = (int *)*local_94;
  if (local_84 != local_94) {
    do {
      Com_Printf(s_Tag___d____d_in__d_chunks_20121458,local_84[3],local_84[4],local_84[5]);
      FUN_20020020();
    } while (local_84 != local_94);
  }
  Com_Printf(s_Total___d_in__d_chunks_20121440,DAT_20249e70,DAT_20249634);
  piVar3 = local_94;
  local_9c[0] = (int *)*local_94;
  local_4 = 0xffffffff;
  if (((local_88 == 0) ||
      (puVar4 = (undefined4 *)FUN_20083550(&local_74), local_9c[0] != (int *)*puVar4)) ||
     (piVar3 != local_94)) {
    while (local_9c[0] != piVar3) {
      puVar4 = (undefined4 *)FUN_2001fbd0(local_64,0);
      FUN_20083820(local_5c,*puVar4);
    }
  }
  else {
    FUN_2001ffe0(local_94[1]);
    local_94[1] = local_90;
    local_88 = 0;
    *local_94 = (int)local_94;
    local_94[2] = (int)local_94;
    FUN_20083550(&local_70);
  }
  FUN_200f9f75(local_94);
  local_94 = (int *)0x0;
  local_88 = 0;
  FUN_200f9f75(local_90);
  ExceptionList = local_c;
  return;
}

