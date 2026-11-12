// rea decompile_all
// name: FUN_2004a100
// address: 0x2004a100
// body: available
// range: 0x2004a100-0x2004a1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004a100(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_203645e4 != 0) {
    DAT_2036474c = DAT_203646d4;
    DAT_203646d4 = param_1;
    iVar3 = 0;
    uVar1 = DAT_204034fc;
    do {
      uVar2 = 1 << ((byte)iVar3 & 0x1f);
      if (((uVar2 & param_1) != 0) && ((DAT_2036474c & uVar2) == 0)) {
        FUN_2004c420(iVar3 + 1,1,uVar1);
        if ((float)DAT_204034fc <
            (float)(int)(&DAT_20364690)[iVar3] + *(float *)(DAT_20364738 + 0x18)) {
          FUN_2004c420(iVar3 + 0x80,1,DAT_204034fc);
          FUN_2004c420(iVar3 + 0x80,0,DAT_204034fc);
        }
        uVar1 = DAT_204034fc;
        (&DAT_20364690)[iVar3] = DAT_204034fc;
      }
      if (((uVar2 & param_1) == 0) && ((DAT_2036474c & uVar2) != 0)) {
        FUN_2004c420(iVar3 + 1,0,uVar1);
        uVar1 = DAT_204034fc;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  return;
}

