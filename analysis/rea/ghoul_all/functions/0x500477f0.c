// rea decompile_all
// name: FUN_500477f0
// address: 0x500477f0
// body: available
// range: 0x500477f0-0x50047b18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500477f0(int param_1)

{
  float fVar1;
  int *piVar2;
  void *pvVar3;
  void *this;
  void *this_00;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  int local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pvVar3 = *(void **)(param_1 + 8);
  this = *(void **)(param_1 + 4);
  if (this != pvVar3) {
    piVar4 = (int *)((int)this + 4);
    do {
      this_00 = *(void **)(param_1 + 4);
      if (this_00 != pvVar3) {
        do {
          if (this != this_00) {
            local_54 = *(float *)((int)this_00 + 0x24);
            iVar5 = 1;
            piVar2 = (int *)FUN_500fc2d0(this,&local_4c);
            local_68 = *piVar2;
            if (local_68 != *piVar4) {
              do {
                if ((float)*(int *)(local_68 + 8) == local_54) {
                  if ((iVar5 != 0) &&
                     (pvVar3 = *(void **)(param_1 + 4), pvVar3 != *(void **)(param_1 + 8)))
                  goto LAB_50047890;
                  break;
                }
                iVar5 = iVar5 + 1;
                FUN_50049a30(&local_68,&local_48);
              } while (local_68 != *piVar4);
            }
          }
LAB_50047ae3:
          this_00 = (void *)((int)this_00 + 0x88);
        } while (this_00 != *(void **)(param_1 + 8));
      }
      pvVar3 = *(void **)(param_1 + 8);
      this = (void *)((int)this + 0x88);
      piVar4 = piVar4 + 0x22;
    } while (this != pvVar3);
  }
  return;
LAB_50047890:
  if (pvVar3 != this_00) {
    local_54 = *(float *)((int)pvVar3 + 0x24);
    iVar5 = 1;
    piVar2 = (int *)FUN_500fc2d0(this,&local_44);
    local_64 = *piVar2;
    if (local_64 != *piVar4) {
      do {
        if ((float)*(int *)(local_64 + 8) == local_54) {
          if (iVar5 != 0) {
            local_c = (float)piVar4[5] - *(float *)((int)pvVar3 + 0x18);
            local_4 = 0.0;
            local_8 = (float)piVar4[6] - *(float *)((int)pvVar3 + 0x1c);
            fVar6 = (float10)FUN_500fe050(&local_c);
            local_54 = (float)fVar6;
            local_18 = *(float *)((int)this_00 + 0x18) - *(float *)((int)pvVar3 + 0x18);
            local_10 = 0.0;
            local_14 = *(float *)((int)this_00 + 0x1c) - *(float *)((int)pvVar3 + 0x1c);
            fVar6 = (float10)FUN_500fe050(&local_18);
            local_50 = (float)fVar6;
            fVar1 = local_10 * local_4 + local_18 * local_c + local_14 * local_8;
            if (fVar1 < -0.97) {
              iVar5 = *(int *)((int)this_00 + 0x24);
              local_60 = (int *)FUN_500fc2d0(this,&local_3c);
              local_60 = (int *)*local_60;
              if (local_60 == (int *)*piVar4) goto LAB_500479d2;
              goto LAB_5004799b;
            }
            if (0.97 < fVar1) {
              if (local_54 <= local_50) {
                FUN_50046750(this_00,*(int *)((int)pvVar3 + 0x24));
                iVar5 = *(int *)((int)this_00 + 0x24);
                goto LAB_50047ac5;
              }
              iVar5 = *(int *)((int)pvVar3 + 0x24);
              local_58 = (int *)FUN_500fc2d0(this,&local_24);
              local_58 = (int *)*local_58;
              if (local_58 == (int *)*piVar4) goto LAB_50047ab0;
              goto LAB_50047a75;
            }
          }
          break;
        }
        iVar5 = iVar5 + 1;
        FUN_50049a30(&local_64,&local_40);
      } while (local_64 != *piVar4);
    }
  }
  goto LAB_50047acc;
  while (FUN_50049a30(&local_60,&local_38), local_60 != (int *)*piVar4) {
LAB_5004799b:
    if (local_60[2] == iVar5) {
      if (local_60[6] == 0) {
        FUN_500499f0(this,&local_34,local_60);
      }
      break;
    }
  }
LAB_500479d2:
  iVar5 = piVar4[8];
  local_5c = (int *)FUN_500fc2d0(this_00,&local_30);
  local_5c = (int *)*local_5c;
  if (local_5c != *(int **)((int)this_00 + 4)) {
    do {
      if (local_5c[2] == iVar5) {
        if (local_5c[6] == 0) {
          FUN_500499f0(this_00,&local_28,local_5c);
        }
        break;
      }
      FUN_50049a30(&local_5c,&local_2c);
    } while (local_5c != *(int **)((int)this_00 + 4));
  }
  goto LAB_50047acc;
LAB_50047a75:
  if (local_58[2] != iVar5) goto code_r0x50047a7a;
  if (local_58[6] == 0) {
    FUN_500499f0(this,&local_1c,local_58);
  }
LAB_50047ab0:
  iVar5 = piVar4[8];
  goto LAB_50047ac5;
code_r0x50047a7a:
  FUN_50049a30(&local_58,&local_20);
  if (local_58 == (int *)*piVar4) goto code_r0x50047a94;
  goto LAB_50047a75;
code_r0x50047a94:
  iVar5 = piVar4[8];
LAB_50047ac5:
  FUN_50046750(pvVar3,iVar5);
LAB_50047acc:
  pvVar3 = (void *)((int)pvVar3 + 0x88);
  if (pvVar3 == *(void **)(param_1 + 8)) goto LAB_50047ae3;
  goto LAB_50047890;
}

