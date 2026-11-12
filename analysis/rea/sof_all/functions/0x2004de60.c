// rea decompile_all
// name: FUN_2004de60
// address: 0x2004de60
// body: available
// range: 0x2004de60-0x2004dee0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_2004de60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  if (param_1 == param_6) {
    if (param_1 == 0) {
      return 1;
    }
    if (param_1 == 2) {
      if (((((char)param_2 == (char)param_7) && (param_2._1_1_ == param_7._1_1_)) &&
          (param_2._2_1_ == param_7._2_1_)) &&
         ((param_2._3_1_ == param_7._3_1_ && (param_5._2_2_ == param_10._2_2_)))) {
        return 1;
      }
    }
    else if (param_1 == 3) {
      iVar3 = 5;
      psVar4 = (short *)&param_3;
      psVar5 = (short *)&param_8;
      do {
        if (iVar3 == 0) {
          return 1;
        }
        iVar3 = iVar3 + -1;
        sVar2 = *psVar5;
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
        psVar5 = psVar5 + 1;
      } while (sVar1 == sVar2);
      return 0;
    }
  }
  return 0;
}

