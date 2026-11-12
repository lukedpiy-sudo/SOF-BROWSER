// rea decompile_all
// name: FUN_50047040
// address: 0x50047040
// body: available
// range: 0x50047040-0x5004748f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50047040(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int extraout_ECX;
  int iVar8;
  int extraout_ECX_00;
  void *this;
  uint uVar9;
  void *local_28;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = *(void **)(param_1 + 4);
  pvVar2 = *(void **)(param_1 + 8);
  if (local_28 != pvVar2) {
    do {
      if (local_28 == *(void **)(param_1 + 4)) {
        local_28 = (void *)((int)local_28 + 0x88);
      }
      this = local_28;
      if (local_28 != pvVar2) {
        do {
          if (local_28 != this) {
            uVar1 = *(uint *)((int)local_28 + 0x24);
            uVar7 = *(uint *)((int)this + 0x24);
            uVar9 = (uint)*(byte *)(*(int *)((int)local_28 + 0x28) + uVar7);
            if ((uVar9 == 0) || (piVar3 = FUN_50047010(local_28,uVar9), piVar3 == (int *)0x0)) {
              iVar8 = 0;
            }
            else {
              iVar8 = *piVar3;
            }
            uVar9 = (uint)*(byte *)(uVar1 + *(int *)((int)this + 0x28));
            if ((uVar9 == 0) || (piVar3 = FUN_50047010(this,uVar9), piVar3 == (int *)0x0)) {
              iVar4 = 0;
            }
            else {
              iVar4 = *piVar3;
            }
            if ((((iVar8 != 0) && (iVar4 != 0)) || (DAT_50159168 = DAT_50159168 + 1, iVar8 != 0)) ||
               (iVar4 != 0)) {
              iVar8 = *(int *)(param_1 + 4);
              for (uVar9 = 0;
                  (iVar8 != 0 && (uVar9 < (uint)((*(int *)(param_1 + 8) - iVar8) / 0x88)));
                  uVar9 = uVar9 + 1) {
                if ((uVar9 != uVar1) && (uVar9 != uVar7)) {
                  uVar5 = (uint)*(byte *)(*(int *)((int)local_28 + 0x28) + uVar9);
                  if (uVar5 != 0) {
                    FUN_50047010(local_28,uVar5);
                  }
                  uVar5 = (uint)*(byte *)(uVar9 + *(int *)((int)this + 0x28));
                  if (uVar5 != 0) {
                    FUN_50047010(this,uVar5);
                  }
                }
              }
              if (uVar1 != 0) {
                uVar9 = uVar1;
                if (iVar8 != *(int *)(param_1 + 8)) {
                  do {
                    *(undefined4 *)(iVar8 + 0x30) = 0;
                    FUN_50046650(iVar8);
                    iVar8 = extraout_ECX + 0x88;
                  } while (iVar8 != *(int *)(param_1 + 8));
                }
                while ((uVar9 != uVar7 && (uVar9 != 0))) {
                  pvVar2 = (void *)(*(int *)(param_1 + 4) + uVar9 * 0x88);
                  if ((pvVar2 == *(void **)(param_1 + 8)) || (*(int *)((int)pvVar2 + 0x30) != 0)) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = (uint)*(byte *)(*(int *)((int)pvVar2 + 0x28) + uVar7);
                    if ((uVar9 == 0) || (puVar6 = FUN_50047010(pvVar2,uVar9), puVar6 == (uint *)0x0)
                       ) {
                      uVar9 = 0;
                      *(undefined4 *)((int)pvVar2 + 0x30) = 1;
                    }
                    else {
                      uVar9 = *puVar6;
                      *(undefined4 *)((int)pvVar2 + 0x30) = 1;
                    }
                  }
                }
              }
              if (uVar7 != 0) {
                iVar8 = *(int *)(param_1 + 4);
                if (iVar8 != *(int *)(param_1 + 8)) {
                  do {
                    *(undefined4 *)(iVar8 + 0x30) = 0;
                    FUN_50046650(iVar8);
                    iVar8 = extraout_ECX_00 + 0x88;
                  } while (iVar8 != *(int *)(param_1 + 8));
                }
joined_r0x5004727f:
                do {
                  if ((uVar7 == uVar1) || (uVar7 == 0)) break;
                  pvVar2 = (void *)(*(int *)(param_1 + 4) + uVar7 * 0x88);
                  if ((pvVar2 == *(void **)(param_1 + 8)) || (*(int *)((int)pvVar2 + 0x30) != 0)) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = (uint)*(byte *)(*(int *)((int)pvVar2 + 0x28) + uVar1);
                    if (uVar7 != 0) {
                      uVar9 = 1;
                      piVar3 = (int *)FUN_500fc2d0(pvVar2,&local_8);
                      local_c = *piVar3;
                      if (local_c != *(int *)((int)pvVar2 + 4)) {
                        do {
                          if (uVar9 == uVar7) {
                            if ((uint *)(local_c + 8) != (uint *)0x0) {
                              uVar7 = *(uint *)(local_c + 8);
                              *(undefined4 *)((int)pvVar2 + 0x30) = 1;
                              goto joined_r0x5004727f;
                            }
                            break;
                          }
                          uVar9 = uVar9 + 1;
                          FUN_50049a30(&local_c,&local_4);
                        } while (local_c != *(int *)((int)pvVar2 + 4));
                      }
                    }
                    uVar7 = 0;
                    *(undefined4 *)((int)pvVar2 + 0x30) = 1;
                  }
                } while( true );
              }
            }
          }
          this = (void *)((int)this + 0x88);
        } while (this != *(void **)(param_1 + 8));
      }
      pvVar2 = *(void **)(param_1 + 8);
      local_28 = (void *)((int)local_28 + 0x88);
    } while (local_28 != pvVar2);
  }
  FUN_500adb20((byte *)s__d_nodes_pointing_towards_each_o_501428e0);
  FUN_500adb20((byte *)s__d_nodes_link_up_in_only_one_dir_501428b8);
  FUN_500adb20((byte *)s__d_Nodes_were_unable_to_find_eac_5014288c);
  FUN_500adb20((byte *)s__d_Nodes_that_are_completely_unc_50142860);
  FUN_500adb20((byte *)s__d_Invalid_looping_paths_50142844);
  FUN_500adb20((byte *)s__f_Average_Nodes_from_point_to_p_5014281c);
  FUN_500adb20((byte *)s__d_Regions_50142810);
  return;
}

