// rea decompile_all
// name: FUN_5005e930
// address: 0x5005e930
// body: available
// range: 0x5005e930-0x5005ebfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5005e930(void *this,int param_1)

{
  float *pfVar1;
  ushort uVar2;
  float fVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined *local_10;
  int local_c;
  uint local_8 [2];
  
  puVar10 = (undefined4 *)0x0;
  uVar9 = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    local_c = 0;
  }
  else {
    local_c = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  local_8[0] = 0;
  local_10 = &DAT_501502f9;
  if (*(int *)(param_1 + 0x45c) == 0) {
    return;
  }
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x45c) + 0x408);
  if ((uVar2 == 0) || (*(int *)((int)this + 0x38) < 4)) {
    if (local_c < 1) goto LAB_5005eb88;
    do {
      iVar8 = *(int *)((int)this + 0x18);
      fVar3 = *(float *)(param_1 + 4) - *(float *)((int)puVar10 + iVar8);
      fVar6 = *(float *)(param_1 + 8) - *(float *)((int)puVar10 + iVar8 + 4);
      fVar5 = *(float *)(param_1 + 0xc) - *(float *)((int)puVar10 + iVar8 + 8);
      puVar4 = (undefined *)(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5);
      if ((((*(float *)((int)puVar10 + iVar8) != 0.0) ||
           (*(float *)((int)puVar10 + iVar8 + 4) != 0.0)) ||
          (*(float *)((int)puVar10 + iVar8 + 8) != 0.0)) &&
         ((((float)puVar4 < (float)local_10 &&
           (*(float *)((int)puVar10 + iVar8 + 8) < *(float *)(param_1 + 0xc) + 5.0)) &&
          (iVar8 = FUN_50050ca0(param_1,(undefined4 *)((int)puVar10 + iVar8)), iVar8 != 0)))) {
        local_10 = puVar4;
        local_8[0] = uVar9;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 0xd;
    } while ((int)uVar9 < local_c);
  }
  else {
    iVar8 = *(int *)((int)this + 0x18);
    while( true ) {
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = *(undefined4 **)(iVar8 + (uint)uVar2 * 0x34 + 0x30);
      }
      else {
        puVar10 = (undefined4 *)*puVar10;
      }
      if (puVar10 == (undefined4 *)0x0) break;
      uVar9 = *(ushort *)(puVar10 + 1) & 0x7fff;
      iVar7 = *(int *)((int)this + 0x18);
      fVar3 = *(float *)(param_1 + 4) - *(float *)(iVar7 + uVar9 * 0x34);
      fVar6 = *(float *)(param_1 + 8) - *(float *)(iVar7 + 4 + uVar9 * 0x34);
      pfVar1 = (float *)(iVar7 + uVar9 * 0x34);
      fVar5 = *(float *)(param_1 + 0xc) - pfVar1[2];
      puVar4 = (undefined *)(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5);
      if (((((*pfVar1 != 0.0) || (pfVar1[1] != 0.0)) || (pfVar1[2] != 0.0)) &&
          (((float)puVar4 < (float)local_10 && (pfVar1[2] < *(float *)(param_1 + 0xc) + 5.0)))) &&
         (iVar7 = FUN_50050ca0(param_1,pfVar1), iVar7 != 0)) {
        local_8[0] = *(ushort *)(puVar10 + 1) & 0x7fff;
        local_10 = puVar4;
      }
    }
  }
  if (local_8[0] != 0) {
    *(uint *)(*(int *)(param_1 + 0x45c) + 0x40) = *(int *)((int)this + 0x18) + local_8[0] * 0x34;
    *(float *)(*(int *)(param_1 + 0x45c) + 0x54) = DAT_5015ccdc + 30.0;
    return;
  }
LAB_5005eb88:
  FUN_50060c10(&DAT_50159a60,(float *)(param_1 + 4),(ushort *)local_8);
  if ((DAT_50159a78 != 0) && ((local_8[0] & 0xffff) < (uint)((DAT_50159a7c - DAT_50159a78) / 0x34)))
  {
    *(uint *)(*(int *)(param_1 + 0x45c) + 0x40) = DAT_50159a78 + (local_8[0] & 0xffff) * 0x34;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x40) = 0;
  return;
}

