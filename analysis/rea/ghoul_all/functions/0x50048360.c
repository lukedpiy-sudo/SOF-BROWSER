// rea decompile_all
// name: FUN_50048360
// address: 0x50048360
// body: available
// range: 0x50048360-0x500484bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50048360(void *this,float *param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  undefined2 uVar7;
  ushort uVar8;
  float local_14;
  uint local_10;
  float local_c [3];
  
  local_10 = 0;
  local_14 = 9999999.0;
  if ((*(int *)((int)this + 4) != 0) &&
     (1 < (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x88))) {
    iVar5 = 0x88;
    uVar3 = 1;
    while ((uVar4 = uVar3, iVar2 = *(int *)((int)this + 4), iVar2 != 0 &&
           (uVar4 < (uint)((*(int *)((int)this + 8) - iVar2) / 0x88)))) {
      FUN_50048330((float *)(iVar2 + 0x18 + iVar5),param_1,local_c);
      fVar6 = FUN_500fe130(local_c);
      if ((float10)local_14 <= fVar6) {
        iVar5 = iVar5 + 0x88;
        uVar3 = uVar4 + 1;
      }
      else {
        local_14 = (float)fVar6;
        iVar5 = iVar5 + 0x88;
        uVar3 = uVar4 + 1;
        local_10 = uVar4;
      }
    }
    if ((local_14 < 0.0 == (local_14 == 0.0)) && (local_14 <= 128.0)) {
      iVar5 = *(int *)((int)this + 4) + local_10 * 0x88;
      uVar3 = (uint)(*(int *)(iVar5 + 0x54) == 0);
      *(uint *)(iVar5 + 0x54) = uVar3;
      iVar5 = *(int *)(local_10 * 0x88 + 0x48 + *(int *)((int)this + 4));
      if (iVar5 != 0) {
        uVar8 = 0;
        if (uVar3 == 0) {
          iVar2 = (*DAT_5015c9f8)(s_edit_ignore_501424b0);
          FUN_50085590(iVar2,iVar5,uVar8);
        }
        else {
          uVar7 = 0;
          uVar1 = (*DAT_5015c9f8)(s_edit_ignore_501424b0);
          FUN_50085530(uVar1,iVar5,uVar7);
        }
      }
      FUN_500adb20((byte *)s_Status_on_node_toggled_50142948);
    }
  }
  return;
}

