// rea decompile_all
// name: FUN_20090b20
// address: 0x20090b20
// body: available
// range: 0x20090b20-0x20090e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20090b20(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  undefined1 **local_a4;
  undefined4 uStack_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 *local_90;
  undefined4 *local_8c;
  float local_88 [15];
  undefined1 auStack_4c [4];
  undefined4 local_48;
  float local_44 [16];
  undefined4 local_4;
  
  *(undefined1 *)(in_ECX + 5) = 1;
  local_48 = 0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x6c) == 0) {
    if (*(char *)(in_ECX + 0x74) == '\0') {
      FUN_200a1020(*(int *)(in_ECX + 0xc0) + *(int *)(param_1 + 8) * 0x44,
                   *(int *)(in_ECX + 0xc0) + *(int *)(param_1 + 0x18) * 0x44,
                   *(undefined4 *)(param_1 + 0x20));
    }
    else {
      pfVar6 = (float *)(in_ECX + 0x78);
      pfVar8 = local_88;
      for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
      }
    }
  }
  else {
    FUN_200a0cc0();
    iVar5 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18);
    puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x6c) + iVar5 * 8);
    local_ac = iVar2 * 8 + iVar5 * -8;
    FUN_2008fd20(local_88,*puVar7);
    FUN_2008fd20(local_44,puVar7[iVar5 * -2 + iVar2 * 2]);
    iVar5 = 8;
    local_a4 = &local_90;
    local_b0 = 0.0;
    local_8c = &local_48;
    local_90 = auStack_4c;
    do {
      local_9c = *(float *)(local_90 + iVar5);
      local_98 = *(float *)((int)local_8c + iVar5);
      local_94 = *(float *)((int)local_44 + iVar5);
      fVar1 = *(float *)(param_1 + 0x20);
      local_bc = local_9c + (*(float *)((int)local_a4 + iVar5) - local_9c) * fVar1;
      local_b8 = local_98 + (*(float *)((int)local_88 + iVar5 + -4) - local_98) * fVar1;
      local_b4 = local_94 + (*(float *)((int)local_88 + iVar5) - local_94) * fVar1;
      FUN_200a15d0(local_b0,&local_bc);
      iVar5 = iVar5 + 0x10;
      local_b0 = (float)((int)local_b0 + 1);
    } while (iVar5 < 0x38);
    uVar3 = puVar7[1];
    local_a4 = (undefined1 **)(uVar3 >> 0x14);
    uStack_a0 = 0;
    uVar4 = *(uint *)((int)(puVar7 + 1) + local_ac);
    fVar1 = (float)(uVar4 >> 10 & 0x3ff);
    local_ac = uVar4 >> 0x14;
    uStack_a8 = 0;
    local_94 = (float)local_ac;
    local_b0 = *(float *)(param_1 + 0x20);
    local_bc = ((float)(uVar4 & 0x3ff) +
               ((float)(uVar3 & 0x3ff) - (float)(uVar4 & 0x3ff)) * local_b0) *
               *(float *)(in_ECX + 0x50) + *(float *)(in_ECX + 0x5c);
    local_b8 = (fVar1 + ((float)(uVar3 >> 10 & 0x3ff) - fVar1) * local_b0) *
               *(float *)(in_ECX + 0x54) + *(float *)(in_ECX + 0x60);
    local_b4 = (local_94 + ((float)local_a4 - local_94) * local_b0) * *(float *)(in_ECX + 0x58) +
               *(float *)(in_ECX + 100);
    FUN_200a15d0(3,&local_bc);
    FUN_200a0c70();
  }
  FUN_200a0530(local_88,1);
  return;
}

