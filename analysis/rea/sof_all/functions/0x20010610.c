// rea decompile_all
// name: FUN_20010610
// address: 0x20010610
// body: available
// range: 0x20010610-0x200106cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20010610(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_4;
  
  if (DAT_20225250 != (undefined4 *)0x0) {
    FUN_200f9d32(DAT_20225250);
  }
  DAT_20225250 = (undefined4 *)0x0;
  iVar1 = FS_LoadFile(param_1,&local_4,0);
  if (iVar1 == -1) {
    Com_Error(1,s_Could_not_open_effects_file___s__2011f2f8,param_1);
    return 0;
  }
  iVar1 = local_4 + 0x10;
  uVar2 = __ftol();
  iVar3 = FUN_20010470(uVar2,0,iVar1);
  if (iVar3 == 0) {
    FS_FreeFile(local_4);
    return 0;
  }
  DAT_20225250 = _malloc(iVar3 << 8);
  *DAT_20225250 = 0;
  uVar2 = FUN_20010470(uVar2,1,iVar1);
  FS_FreeFile(local_4);
  return uVar2;
}

