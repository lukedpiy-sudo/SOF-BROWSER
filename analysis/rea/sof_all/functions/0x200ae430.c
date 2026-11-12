// rea decompile_all
// name: FUN_200ae430
// address: 0x200ae430
// body: available
// range: 0x200ae430-0x200ae4a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ae430(void)

{
  byte *pbVar1;
  int iVar2;
  float fVar3;
  byte *pbVar4;
  int *in_ECX;
  
  pbVar4 = (byte *)in_ECX[0x2b];
  iVar2 = *in_ECX;
  fVar3 = 0.0;
  *in_ECX = iVar2 + 1;
  pbVar1 = pbVar4 + in_ECX[0x29] + -1;
  for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 0x1000) {
    fVar3 = fVar3 + (float)*pbVar4;
  }
  pbVar4 = (byte *)in_ECX[0x43];
  pbVar1 = pbVar4 + in_ECX[8] * 0x4c;
  for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 0x1000) {
    fVar3 = fVar3 + (float)*pbVar4;
  }
  if (0.0 < fVar3) {
    *in_ECX = iVar2 + 2;
  }
  return;
}

