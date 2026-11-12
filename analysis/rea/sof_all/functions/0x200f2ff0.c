// rea decompile_all
// name: FUN_200f2ff0
// address: 0x200f2ff0
// body: available
// range: 0x200f2ff0-0x200f30bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f2ff0(int *param_1,undefined4 param_2,char *param_3,int param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 local_10;
  int *local_c;
  char *local_8;
  int local_4;
  
  if (((*param_1 != 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    if (param_4 == 0) {
      pcVar2 = s_PRIVMSG__s___s_20159bc8;
    }
    else if (param_4 == 1) {
      pcVar2 = &DAT_20159bb0;
    }
    else if (param_4 == 2) {
      pcVar2 = s_NOTICE__s___s_20159ba0;
    }
    else {
      if (param_4 != 3) {
        return;
      }
      pcVar2 = s_UTM__s___s_20159b94;
    }
    FUN_200f3a80(param_1 + 6,pcVar2,param_2,param_3);
    puVar1 = (undefined4 *)FUN_200ef1f0(param_1,param_2);
    if (puVar1 != (undefined4 *)0x0) {
      local_c = param_1 + 0x58;
      local_10 = param_2;
      local_8 = param_3;
      local_4 = param_4;
      FUN_200edf60(param_1,4,*puVar1,&local_10,puVar1[10],0,param_2,0x10);
    }
  }
  return;
}

