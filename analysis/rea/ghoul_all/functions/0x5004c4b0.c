// rea decompile_all
// name: FUN_5004c4b0
// address: 0x5004c4b0
// body: available
// range: 0x5004c4b0-0x5004c737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5004c4b0(void *this,int *param_1,undefined4 *param_2)

{
  void *this_00;
  short sVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if ((*(float *)(DAT_5015cca4 + 0x18) == 0.0) && (*(int *)this != 0)) {
    this_00 = (void *)((int)this + 0x28);
    puVar8 = *(undefined4 **)((int)this + 0x40);
    for (uVar5 = *(uint *)((int)this + 0x3c) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    iVar6 = FUN_5004bbf0(this_00,(float *)(DAT_5015d1ec + 4));
    if (iVar6 != 0) {
      *param_2 = *(undefined4 *)(iVar6 + 0x10);
      sVar1 = *(short *)(iVar6 + 0x14);
      *param_1 = (int)sVar1;
      if (sVar1 < 1) {
        *param_1 = 0;
      }
      if (*(int *)this <= *param_1) {
        *param_1 = 0;
      }
    }
    *(int *)((int)this + 0x10) = *param_1;
    local_c = *(float *)(DAT_5015d1ec + 4) - 16.0;
    local_4 = *(undefined4 *)(DAT_5015d1ec + 0xc);
    local_8 = *(float *)(DAT_5015d1ec + 8) - 16.0;
    iVar6 = FUN_5004bbf0(this_00,&local_c);
    if (iVar6 != 0) {
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar6 + 0x10);
      FUN_5004bcb0(this_00,*(int *)(iVar6 + 0x10));
    }
    local_c = local_c + 32.0;
    iVar6 = FUN_5004bbf0(this_00,&local_c);
    if (iVar6 != 0) {
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(iVar6 + 0x10);
      iVar6 = *(int *)(iVar6 + 0x10);
      if (-1 < iVar6) {
        iVar7 = iVar6 >> 4;
        bVar4 = ((char)iVar6 + (char)iVar7 * -0x10) * '\x02';
        uVar5 = *(uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
        puVar3 = (uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
        uVar2 = (int)uVar5 >> (bVar4 & 0x1f) & 3;
        if (uVar2 == 0) {
          *puVar3 = ~(0 << (bVar4 & 0x1f)) & uVar5;
          puVar3 = (uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
          iVar6 = 1;
        }
        else {
          *puVar3 = ~(uVar2 << (bVar4 & 0x1f)) & uVar5;
          puVar3 = (uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
          iVar6 = 2;
        }
        *puVar3 = *puVar3 | iVar6 << (bVar4 & 0x1f);
      }
    }
    local_8 = local_8 + 32.0;
    iVar6 = FUN_5004bbf0(this_00,&local_c);
    if (iVar6 != 0) {
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(iVar6 + 0x10);
      iVar6 = *(int *)(iVar6 + 0x10);
      if (-1 < iVar6) {
        iVar7 = iVar6 >> 4;
        bVar4 = ((char)iVar6 + (char)iVar7 * -0x10) * '\x02';
        uVar5 = *(uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
        puVar3 = (uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
        uVar2 = (int)uVar5 >> (bVar4 & 0x1f) & 3;
        if (uVar2 == 0) {
          *puVar3 = ~(0 << (bVar4 & 0x1f)) & uVar5;
          puVar3 = (uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
          iVar6 = 1;
        }
        else {
          *puVar3 = ~(uVar2 << (bVar4 & 0x1f)) & uVar5;
          puVar3 = (uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
          iVar6 = 2;
        }
        *puVar3 = *puVar3 | iVar6 << (bVar4 & 0x1f);
      }
    }
    local_c = local_c - 32.0;
    iVar6 = FUN_5004bbf0(this_00,&local_c);
    if (iVar6 != 0) {
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(iVar6 + 0x10);
      iVar6 = *(int *)(iVar6 + 0x10);
      if (-1 < iVar6) {
        iVar7 = iVar6 >> 4;
        bVar4 = ((char)iVar6 + (char)iVar7 * -0x10) * '\x02';
        uVar5 = *(uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
        puVar3 = (uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
        uVar2 = (int)uVar5 >> (bVar4 & 0x1f) & 3;
        if (uVar2 == 0) {
          *puVar3 = ~(0 << (bVar4 & 0x1f)) & uVar5;
          puVar3 = (uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
          iVar6 = 1;
        }
        else {
          *puVar3 = ~(uVar2 << (bVar4 & 0x1f)) & uVar5;
          puVar3 = (uint *)(*(int *)((int)this + 0x40) + iVar7 * 4);
          iVar6 = 2;
        }
        *puVar3 = *puVar3 | iVar6 << (bVar4 & 0x1f);
      }
    }
    if (param_1 != (int *)0x0) {
      iVar6 = *(int *)((int)this + 0x24);
      *(int *)((int)this + 0x24) = iVar6 + 1;
      FUN_5004c090((void *)(*param_1 * 0x50 + *(int *)((int)this + 4)),(float)iVar6);
    }
  }
  return;
}

