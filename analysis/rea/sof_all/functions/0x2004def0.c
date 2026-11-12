// rea decompile_all
// name: FUN_2004def0
// address: 0x2004def0
// body: available
// range: 0x2004def0-0x2004dfff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_2004def0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  if (param_1 == 0) {
    Com_sprintf(&DAT_203900d0,0x40,s_loopback_20136d30);
    return &DAT_203900d0;
  }
  if (param_1 == 2) {
    uVar1 = Ordinal_15();
    Com_sprintf(&DAT_203900d0,0x40,s__i__i__i__i__i_20136d20,2,0,0,0,uVar1);
    return &DAT_203900d0;
  }
  uVar1 = Ordinal_15();
  Com_sprintf(&DAT_203900d0,0x40,s__02x_02x_02x_02x__02x_02x_02x_02_20136cf0,(undefined1)param_2,
              param_2._1_1_,param_2._2_1_,param_2._3_1_,(undefined1)param_3,param_3._1_1_,
              param_3._2_1_,param_3._3_1_,(undefined1)param_4,param_4._1_1_,uVar1);
  return &DAT_203900d0;
}

