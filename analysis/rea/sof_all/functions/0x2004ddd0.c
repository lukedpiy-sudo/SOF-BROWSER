// rea decompile_all
// name: FUN_2004ddd0
// address: 0x2004ddd0
// body: available
// range: 0x2004ddd0-0x2004de55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2004ddd0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  bool bVar4;
  
  if (param_1 == param_6) {
    if (param_1 == 0) {
      return 1;
    }
    if (param_1 == 2) {
      param_1 = 0;
      if (((((char)param_2 == (char)param_7) && (param_1 = 0, param_2._1_1_ == param_7._1_1_)) &&
          (param_1 = 0, param_2._2_1_ == param_7._2_1_)) &&
         ((param_1 = 0, param_2._3_1_ == param_7._3_1_ && (param_5._2_2_ == param_10._2_2_)))) {
        return 1;
      }
    }
    else if (param_1 == 3) {
      iVar1 = 5;
      bVar4 = true;
      psVar2 = (short *)&param_3;
      psVar3 = (short *)&param_8;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *psVar2 == *psVar3;
        psVar2 = psVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (bVar4);
      if ((bVar4) && (param_1 = (uint)param_5._2_2_, param_5._2_2_ == param_10._2_2_)) {
        return CONCAT31((uint3)(byte)((uint)param_5 >> 0x18),1);
      }
    }
  }
  return param_1 & 0xffffff00;
}

