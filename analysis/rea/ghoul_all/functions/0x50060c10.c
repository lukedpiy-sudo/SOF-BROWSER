// rea decompile_all
// name: FUN_50060c10
// address: 0x50060c10
// body: available
// range: 0x50060c10-0x50060d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __thiscall FUN_50060c10(void *this,float *param_1,ushort *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort local_44;
  float local_40;
  undefined1 local_38 [4];
  float fStack_34;
  
  uVar6 = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    local_44 = 0;
  }
  else {
    local_44 = (ushort)((*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34);
  }
  uVar5 = 1;
  local_40 = 9999999.0;
  if (1 < local_44) {
    iVar7 = 0x34;
    uVar6 = 0;
    do {
      iVar1 = *(int *)((int)this + 0x18);
      fVar2 = *(float *)(iVar7 + iVar1) - *param_1;
      fVar3 = *(float *)(iVar7 + 4 + iVar1) - param_1[1];
      fVar4 = *(float *)(iVar7 + iVar1 + 8) - param_1[2];
      fVar2 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
      (*DAT_5015cac0)(iVar7 + iVar1,&DAT_5018bf0c,&DAT_5018bf0c,param_1,DAT_5015cca0 + 0x464,
                      0x2010003,local_38);
      if ((fStack_34 == 1.0) && (fVar2 < local_40)) {
        local_40 = fVar2;
        uVar6 = uVar5;
      }
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 0x34;
    } while (uVar5 < local_44);
  }
  *param_2 = uVar6;
  *(float *)(param_2 + 2) = local_40;
  return uVar6 != 0;
}

