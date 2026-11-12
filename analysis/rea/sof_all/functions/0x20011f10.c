// rea decompile_all
// name: FUN_20011f10
// address: 0x20011f10
// body: available
// range: 0x20011f10-0x20012008 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20011f10(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int *unaff_ESI;
  int *local_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined4 *puStack_10;
  float fStack_c;
  int iStack_8;
  
  local_30 = param_1;
  local_34 = DAT_20225930;
  (**(code **)(*DAT_20225930 + 0xf4))(&local_34);
  uVar2 = DAT_2022592c & 0xff;
  uVar1 = ~(uint)DAT_201e7f0e;
  local_30 = uVar1 & uVar2 & 1;
  uStack_2c = uVar1 & uVar2 & 4;
  uStack_24 = uVar1 & uVar2 & 0x10;
  uStack_28 = uVar1 & uVar2 & 8;
  uStack_20 = (uint)(0.0 < (double)(int)DAT_201e759c._3_1_);
  uStack_1c = (uint)((double)(int)DAT_201e759c._3_1_ < 0.0);
  uStack_18 = (uint)DAT_201e7f58._3_1_;
  puStack_10 = &DAT_202253fc;
  fStack_c = DAT_201c1f10 * 10.0;
  uStack_14 = (uint)(DAT_201e7efc != '\0');
  iStack_8 = DAT_20225918;
  if (DAT_20225918 != 0) {
    DAT_20225918 = 0;
  }
  (**(code **)(*unaff_ESI + 0xc))();
  return;
}

