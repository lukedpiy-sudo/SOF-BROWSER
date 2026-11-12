// rea decompile_all
// name: FUN_20108378
// address: 0x20108378
// body: available
// range: 0x20108378-0x20108430 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_20108378(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_2015e1ac == (undefined1 *)0x0) {
    DAT_2015e1ac = _malloc(0x351);
  }
  *DAT_2015e1ac = 0;
  FUN_20108549(DAT_2015e1ac,3,PTR_s_LC_COLLATE_2015e1b4,&DAT_2011d748,PTR_DAT_2015e1b8);
  ppuVar3 = &PTR_DAT_2015e1b8;
  do {
    FUN_20101d00(DAT_2015e1ac,&DAT_20130c5c);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,ppuVar3[3]);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    FUN_20108549(DAT_2015e1ac,3,ppuVar3[2],&DAT_2011d748,*ppuVar4);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x2015e1e8);
  if (!bVar1) {
    return DAT_2015e1ac;
  }
  FUN_200f9d32(DAT_2015e1ac);
  DAT_2015e1ac = (undefined1 *)0x0;
  return PTR_DAT_2015e1c4;
}

