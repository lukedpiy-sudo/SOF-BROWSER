// rea decompile_all
// name: FUN_500e9c10
// address: 0x500e9c10
// body: available
// range: 0x500e9c10-0x500e9ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_500e9c10(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 extraout_var;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  float fStack_34;
  
  uVar2 = (**(code **)(*param_1 + 0x240))();
  if ((uVar2 != 0) && (iVar1 = *(int *)(uVar2 + 0x54), iVar1 != 0)) {
    uStack_44 = *(undefined4 *)(uVar2 + 0x44);
    uStack_40 = *(undefined4 *)(uVar2 + 0x48);
    uStack_3c = *(undefined4 *)(uVar2 + 0x4c);
    (*DAT_5015cac0)(iVar1 + 4,iVar1 + 0x11c,iVar1 + 0x128,&uStack_44,iVar1,3,auStack_38);
    uVar2 = CONCAT22(extraout_var,
                     (ushort)(1.0 < fStack_34) << 8 | (ushort)NAN(fStack_34) << 10 |
                     (ushort)(fStack_34 == 1.0) << 0xe);
    if (fStack_34 == 1.0) {
      uVar2 = FUN_500e94e0(param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_500e9640(param_1);
        if ((char)uVar2 != '\0') goto LAB_500e9c9e;
      }
    }
    return uVar2 & 0xffffff00;
  }
LAB_500e9c9e:
  return CONCAT31((int3)(uVar2 >> 8),1);
}

