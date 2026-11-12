// rea decompile_all
// name: FUN_20109886
// address: 0x20109886
// body: available
// range: 0x20109886-0x20109a89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20109886(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  char local_7c [120];
  
  iVar1 = FUN_20109e77(param_1);
  iVar2 = (*DAT_20408808)(iVar1,(-(uint)(DAT_204087ec != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_20408800 = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_204087fc,local_7c);
  if (iVar2 == 0) {
    iVar2 = (*DAT_20408808)(iVar1,(-(uint)(DAT_204087f4 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_20408800 = 0;
      return 1;
    }
    iVar2 = __strcmpi(DAT_204087f8,local_7c);
    if (iVar2 == 0) {
      DAT_20408800 = DAT_20408800 | 0x304;
      DAT_20408804 = iVar1;
LAB_2010992c:
      DAT_204087e8 = iVar1;
    }
    else if ((DAT_20408800 & 2) == 0) {
      if ((DAT_204087f0 == 0) ||
         (iVar2 = FUN_200fbba0(DAT_204087f8,local_7c,DAT_204087f0), iVar2 != 0)) {
        if (((DAT_20408800 & 1) == 0) && (iVar2 = FUN_20109cda(iVar1), iVar2 != 0)) {
          DAT_20408800 = DAT_20408800 | 1;
          DAT_20408804 = iVar1;
        }
      }
      else {
        DAT_20408800 = DAT_20408800 | 2;
        DAT_20408804 = iVar1;
        sVar3 = _strlen(DAT_204087f8);
        if (sVar3 == DAT_204087f0) goto LAB_2010992c;
      }
    }
  }
  if ((DAT_20408800 & 0x300) == 0x300) goto LAB_20109a76;
  iVar2 = (*DAT_20408808)(iVar1,(-(uint)(DAT_204087f4 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_20408800 = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_204087f8,local_7c);
  if (iVar2 == 0) {
    DAT_20408800 = DAT_20408800 | 0x200;
    if (((DAT_204087f4 == 0) && (DAT_204087f0 != 0)) &&
       (sVar3 = _strlen(DAT_204087f8), sVar3 == DAT_204087f0)) {
      uVar4 = 1;
      goto LAB_20109a55;
    }
  }
  else {
    if (((DAT_204087f4 != 0) || (DAT_204087f0 == 0)) ||
       (iVar2 = FUN_200fbba0(DAT_204087f8,local_7c,DAT_204087f0), iVar2 != 0)) goto LAB_20109a76;
    uVar4 = 0;
LAB_20109a55:
    iVar2 = FUN_20109cf9(iVar1,uVar4);
    if (iVar2 == 0) goto LAB_20109a76;
  }
  DAT_20408800 = DAT_20408800 | 0x100;
  if (DAT_204087e8 == 0) {
    DAT_204087e8 = iVar1;
  }
LAB_20109a76:
  return ~DAT_20408800 >> 2 & 1;
}

