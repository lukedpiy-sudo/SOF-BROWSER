// rea decompile_all
// name: FUN_200581a0
// address: 0x200581a0
// body: available
// range: 0x200581a0-0x20058277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_200581a0(undefined4 param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *local_4;
  
  uVar3 = param_1;
  piVar2 = (int *)*DAT_20390db4;
  if (piVar2 != DAT_20390db4) {
    while (uVar4 = FUN_200576c0(uVar3), (int)uVar4 < 0) {
      FUN_20085230();
      if (piVar2 == DAT_20390db4) {
        return &DAT_2015ee44;
      }
    }
    bVar1 = *(byte *)(piVar2 + 3);
    uVar5 = (uint)bVar1 << 8 | uVar4;
    if (uVar5 != 0xffffffff) {
      param_1 = CONCAT31(param_1._1_3_,(char)(uVar5 >> 8));
      FUN_20058d50(&local_4,&param_1);
      uVar5 = (uint)bVar1 << 8 | uVar4 & 0xffff;
      if (local_4 == DAT_20390db4) {
        Com_Error(1,s_String_package_not_registered_fo_20138c78,uVar5);
        iVar6 = 0;
      }
      else {
        iVar6 = (uVar4 & 0xff) * 0x10 + 0x1c + local_4[4];
        if (iVar6 == 0) {
          Com_Error(1,s_String_ID__04x_not_defined_20138c5c,uVar5);
        }
      }
      if (*(undefined1 **)(iVar6 + 0xc) != (undefined1 *)0x0) {
        return *(undefined1 **)(iVar6 + 0xc);
      }
    }
  }
  return &DAT_2015ee44;
}

