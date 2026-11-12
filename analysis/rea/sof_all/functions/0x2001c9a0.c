// rea decompile_all
// name: Com_Error
// address: 0x2001c9a0
// body: available
// range: 0x2001c9a0-0x2001cab4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Com_Error(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x1c9a0  7  Com_Error */
  if (DAT_20249638 != 0) {
    Sys_Error(s_Recursive_Com_Error_after___s_201212e8,&DAT_20249f60);
  }
  DAT_20249638 = 1;
  FUN_200fb04d(&DAT_20249f60,param_2,&stack0x0000000c);
  Com_Printf(&DAT_20121260,&DAT_20249f60);
  FUN_200601c0(s_current_20121258);
  FUN_200c7380();
  iVar1 = param_1;
  if (param_1 == 2) {
    param_1 = 0;
    iVar1 = __CxxThrowException_8(&param_1,&DAT_201149a8);
  }
  if (iVar1 == 1) {
    FUN_20022170(s_console_20121250,&DAT_2011d31c);
    param_1 = 1;
    iVar1 = __CxxThrowException_8(&param_1,&DAT_201149a8);
  }
  if (iVar1 == 3) {
    param_1 = 2;
    __CxxThrowException_8(&param_1,&DAT_201149a8);
  }
  uVar2 = FUN_20055450(&DAT_20121234,&DAT_20249f60,0);
  FUN_2005fec0(uVar2);
  FUN_2000dde0();
  if (DAT_20249e4c != 0) {
    FUN_200fa9ae(DAT_20249e4c);
    DAT_20249e4c = 0;
  }
  Sys_Error(&DAT_2011d114,&DAT_20249f60);
  return;
}

