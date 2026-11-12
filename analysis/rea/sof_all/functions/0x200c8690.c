// rea decompile_all
// name: FUN_200c8690
// address: 0x200c8690
// body: available
// range: 0x200c8690-0x200c87e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c8690(undefined4 param_1,undefined1 param_2,undefined1 *param_3)

{
  undefined4 uStack_cc;
  char *pcStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined1 local_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010e0ae;
  pvStack_c = ExceptionList;
  local_4 = 0;
  pcStack_c0 = param_3;
  if (param_3 == (undefined1 *)0x0) {
    pcStack_c0 = &DAT_201116cc;
  }
  pcStack_c4 = s_pics_menus_20158678;
  pcStack_c8 = s__s__s_2011f104;
  uStack_cc = 0x80;
  ExceptionList = &pvStack_c;
  Com_sprintf(local_8c);
  (*DAT_20403590)(local_8c);
  pcStack_c8 = &param_2;
  pcStack_c0 = (char *)0xffffffff;
  pcStack_c4 = (char *)0x0;
  auStack_b0[0] = param_2;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_cc = 0x200c871a;
  FUN_2000a3a0();
  pcStack_c0 = (char *)0x0;
  auStack_a0[0] = auStack_b0[0];
  local_4._0_1_ = 1;
  pcStack_c4 = (char *)0x200c8734;
  FUN_2000a5b0();
  pcStack_c0 = (char *)0xffffffff;
  pcStack_c8 = auStack_b0;
  pcStack_c4 = (char *)0x0;
  uStack_cc = 0x200c8745;
  FUN_2000a3a0();
  puStack_90 = (undefined1 *)&uStack_cc;
  local_4._0_1_ = 2;
  uStack_cc = CONCAT31(uStack_cc._1_3_,auStack_a0[0]);
  FUN_2000a5b0(0);
  FUN_2000a3a0(auStack_a0,0,0xffffffff);
  FUN_200c9560();
  pcStack_c0 = (char *)0x1;
  local_4._0_1_ = 1;
  pcStack_c4 = (char *)0x200c8796;
  FUN_2000a5b0();
  pcStack_c0 = (char *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  pcStack_c4 = (char *)0x200c87a8;
  FUN_2000a5b0();
  if (param_3 != (undefined1 *)0x0) {
    pcStack_c0 = param_3 + -1;
    if (param_3[-1] == '\0') {
      pcStack_c4 = (char *)0x200c87c7;
      FUN_200f9f75();
    }
    else {
      *pcStack_c0 = param_3[-1] + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

