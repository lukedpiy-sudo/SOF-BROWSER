// rea decompile_all
// name: FUN_50047b20
// address: 0x50047b20
// body: available
// range: 0x50047b20-0x50047d8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50047b20(void *this,void *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  ushort uVar5;
  float10 fVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  float *local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  char cStack_37;
  float fStack_34;
  
  local_50 = 0xc1800000;
  local_4c = 0xc1800000;
  pfVar1 = (float *)((int)param_1 + 0x18);
  local_48 = 0;
  local_5c = 0x41800000;
  local_58 = 0x41800000;
  local_54 = 0x41c00000;
  local_68 = 0xc0000000;
  local_64 = 0xc0000000;
  local_60 = 0xc0000000;
  local_44 = 0x40000000;
  local_40 = 0x40000000;
  local_3c = 0x40000000;
  if (*(float *)((int)param_1 + 0x18) <= 9000.0) {
    if (param_2 == 0) {
      local_9c = *(float **)((int)this + 8);
      pfVar3 = *(float **)((int)this + 4);
    }
    else {
      pfVar3 = *(float **)((int)this + 0x186a18);
      local_9c = *(float **)((int)this + 0x186a1c);
    }
    if (((*(uint *)((int)param_1 + 0x38) & 0x18005) != 0) && (pfVar3 != local_9c)) {
      pfVar3 = pfVar3 + 6;
      do {
        if (((param_2 != 0) || (*(float *)((int)param_1 + 0x24) != pfVar3[3])) &&
           (*pfVar3 <= 9000.0)) {
          local_98 = *pfVar1 - *pfVar3;
          local_94 = *(float *)((int)param_1 + 0x1c) - pfVar3[1];
          local_90 = *(float *)((int)param_1 + 0x20) - pfVar3[2];
          if (param_2 == 0) {
            fVar6 = FUN_500fe130(&local_98);
            uVar5 = (ushort)(fVar6 < (float10)512.0) << 8 | (ushort)(fVar6 == (float10)512.0) << 0xe
            ;
          }
          else {
            fVar6 = FUN_500fe130(&local_98);
            uVar5 = (ushort)(fVar6 < (float10)384.0) << 8 | (ushort)(fVar6 == (float10)384.0) << 0xe
            ;
          }
          if (uVar5 != 0) {
            local_74 = local_98;
            local_70 = local_94;
            local_6c = local_90;
            FUN_500fe050(&local_74);
            local_84 = *(undefined4 *)((int)param_1 + 0x20);
            local_8c = *pfVar1;
            local_88 = *(undefined4 *)((int)param_1 + 0x1c);
            local_78 = pfVar3[2];
            local_80 = *pfVar3;
            local_7c = pfVar3[1];
            if (ABS(local_6c) <= 0.5) {
              if (param_2 == 0) {
                uVar9 = 0x6000083;
                puVar8 = &local_5c;
                puVar7 = &local_50;
              }
              else {
                uVar9 = 3;
                puVar8 = &local_44;
                puVar7 = &local_68;
              }
              (*DAT_5015cac0)(&local_8c,puVar7,puVar8,&local_80,0,uVar9,&local_38);
              if (((0.99 <= fStack_34) && (cStack_37 == '\0')) &&
                 ((iVar4 = FUN_50044010(pfVar3,pfVar1,1.0,(float *)0x0), iVar4 != 0 &&
                  (FUN_50046670(param_1,(int)pfVar3[3],param_2,0), param_2 == 0)))) {
                FUN_50046670(pfVar3 + -6,*(int *)((int)param_1 + 0x24),0,0);
              }
            }
          }
        }
        pfVar2 = pfVar3 + 0x1c;
        pfVar3 = pfVar3 + 0x22;
      } while (pfVar2 != local_9c);
    }
  }
  return;
}

