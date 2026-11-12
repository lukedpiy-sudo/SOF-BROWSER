// rea decompile_all
// name: FUN_20109ae0
// address: 0x20109ae0
// body: available
// range: 0x20109ae0-0x20109b9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20109ae0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char local_7c [120];
  
  uVar1 = FUN_20109e77(param_1);
  iVar2 = (*DAT_20408808)(uVar1,(-(uint)(DAT_204087f4 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_20408800 = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_204087f8,local_7c);
  if (iVar2 == 0) {
    if (DAT_204087f4 == 0) {
      uVar3 = 1;
      goto LAB_20109b6c;
    }
  }
  else {
    if (((DAT_204087f4 != 0) || (DAT_204087f0 == 0)) ||
       (iVar2 = FUN_200fbba0(DAT_204087f8,local_7c,DAT_204087f0), iVar2 != 0)) goto LAB_20109b8b;
    uVar3 = 0;
LAB_20109b6c:
    iVar2 = FUN_20109cf9(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_20109b8b;
  }
  DAT_20408800 = DAT_20408800 | 4;
  DAT_204087e8 = uVar1;
  DAT_20408804 = uVar1;
LAB_20109b8b:
  return ~DAT_20408800 >> 2 & 1;
}

