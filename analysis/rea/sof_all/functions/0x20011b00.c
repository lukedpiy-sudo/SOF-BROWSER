// rea decompile_all
// name: FUN_20011b00
// address: 0x20011b00
// body: available
// range: 0x20011b00-0x20011b7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20011b00(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = FUN_2001ab50(param_1,0);
  iVar4 = 0;
  if (0 < DAT_201e7f5c) {
    do {
      uVar3 = DAT_201e7f60 + iVar4 & 0x3ff;
      iVar1 = uVar3 * 0x74;
      if ((*(int *)(&DAT_201ca568 + uVar3 * 0x74) == 0x1f) &&
         (*(int *)(&DAT_2022118c + *(int *)(&DAT_201ca550 + iVar1) * 4) != 0)) {
        uVar3 = FUN_2001abf0(param_1,*(undefined4 *)
                                      (*(int *)(&DAT_2022118c + *(int *)(&DAT_201ca550 + iVar1) * 4)
                                      + 0x28),&DAT_201ca534 + iVar1,iVar1 + 0x201ca540);
        uVar2 = uVar2 | uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_201e7f5c);
  }
  return uVar2;
}

