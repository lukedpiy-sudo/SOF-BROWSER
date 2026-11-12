// rea decompile_all
// name: FUN_2004f1b0
// address: 0x2004f1b0
// body: available
// range: 0x2004f1b0-0x2004f2cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004f1b0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_200216d0(s_dedicated_20121588);
  iVar1 = __ftol();
  if (DAT_20390114 == 0) {
    Cvar_Get(s_ipx_hostport_20137020,&DAT_2011c4ac,8,0);
    iVar2 = __ftol();
    if (iVar2 == 0) {
      Cvar_Get(s_hostport_20136f54,&DAT_2011c4ac,8,0);
      iVar2 = __ftol();
      if (iVar2 == 0) {
        uVar3 = FUN_20055450(&DAT_2011ee58,0x70ee,8,0);
        Cvar_Get(&DAT_20136f4c,uVar3);
        iVar2 = __ftol();
      }
    }
    DAT_20390114 = FUN_2004f090(iVar2);
  }
  if ((iVar1 == 0) && (DAT_20390110 == 0)) {
    Cvar_Get(s_ipx_clientport_20137010,&DAT_2011c4ac,8,0);
    iVar1 = __ftol();
    if (iVar1 == 0) {
      uVar3 = FUN_20055450(&DAT_2011ee58,0x70e5,8,0);
      Cvar_Get(s_clientport_20136f04,uVar3);
      iVar1 = __ftol();
      if (iVar1 == 0) {
        iVar1 = -1;
      }
    }
    DAT_20390110 = FUN_2004f090(iVar1);
    if (DAT_20390110 == 0) {
      DAT_20390110 = FUN_2004f090(0xffffffff);
    }
  }
  return;
}

