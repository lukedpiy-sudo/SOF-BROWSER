// rea decompile_all
// name: FUN_500ec450
// address: 0x500ec450
// body: available
// range: 0x500ec450-0x500ec513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_500ec450(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  float fStack_34;
  
  iVar2 = (**(code **)(*(int *)this + 0x228))();
  if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 0x54), iVar1 != 0)) {
    uStack_44 = *(undefined4 *)(iVar2 + 0x44);
    uStack_40 = *(undefined4 *)(iVar2 + 0x48);
    uStack_3c = *(undefined4 *)(iVar2 + 0x4c);
    (*DAT_5015cac0)(iVar1 + 4,iVar1 + 0x11c,iVar1 + 0x128,&uStack_44,iVar1,3,auStack_38);
    uVar4 = CONCAT22(extraout_var,
                     (ushort)(1.0 < fStack_34) << 8 | (ushort)NAN(fStack_34) << 10 |
                     (ushort)(fStack_34 == 1.0) << 0xe);
    if (fStack_34 == 1.0) {
      uVar3 = (*DAT_5015c9f4)(s_Ambient_Models_Tank_tanklp_wav_50153d90);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      *(undefined4 *)(param_1 + 0x40) = 0xfb;
      uVar4 = FUN_500eb990(this);
      if ((char)uVar4 != '\0') {
        param_1 = FUN_500ebb10(this);
        uVar4 = param_1;
        if ((char)param_1 != '\0') goto LAB_500ec50a;
      }
    }
    return uVar4 & 0xffffff00;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
LAB_500ec50a:
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

