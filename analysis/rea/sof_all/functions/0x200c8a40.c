// rea decompile_all
// name: FUN_200c8a40
// address: 0x200c8a40
// body: available
// range: 0x200c8a40-0x200c8aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c8a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined1 local_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010e118;
  pvStack_c = ExceptionList;
  local_4 = 0;
  puVar1 = &DAT_201116cc;
  if (param_4 != (undefined1 *)0x0) {
    puVar1 = param_4;
  }
  ExceptionList = &pvStack_c;
  Com_sprintf(local_8c,0x80,s__s__s_2011f104,s_pics_menus_20158678,puVar1);
  (*DAT_204035b8)(param_1,param_2,local_8c,param_7);
  if (param_4 != (undefined1 *)0x0) {
    if (param_4[-1] != '\0') {
      param_4[-1] = param_4[-1] + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_200f9f75(param_4 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

