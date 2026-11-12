// rea decompile_all
// name: FUN_20038130
// address: 0x20038130
// body: available
// range: 0x20038130-0x200381df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20038130(int param_1,int param_2,ushort param_3,int param_4,float *param_5)

{
  float fVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (float)param_2 * 0.001 + DAT_2027c478;
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | param_3;
  *(float *)(param_1 + 0x6c) = fVar1;
  if ((param_4 < 0) || (0x39 < param_4)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(float *)(param_1 + 0x6c) = DAT_2027c478;
  }
  else {
    uVar3 = FUN_20037e40((&PTR_s_textures_sprites_smoke2_20131580)[param_4]);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    if (param_5 != (float *)0x0) {
      local_c = *param_5 * -1.0;
      local_8 = param_5[1] * -1.0;
      local_4 = param_5[2] * -1.0;
      uVar2 = FUN_2001d080(&local_c);
      *(undefined1 *)(param_1 + 0x3a) = uVar2;
    }
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      *(float *)(param_1 + 0x6c) = DAT_2027c478 + 5000.0;
      return;
    }
  }
  return;
}

