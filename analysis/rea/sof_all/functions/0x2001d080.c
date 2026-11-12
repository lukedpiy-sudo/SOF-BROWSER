// rea decompile_all
// name: FUN_2001d080
// address: 0x2001d080
// body: available
// range: 0x2001d080-0x2001d0d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2001d080(float *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float local_4;
  
  iVar4 = 0;
  local_4 = 0.0;
  iVar3 = 0;
  pfVar2 = (float *)&DAT_2012064c;
  do {
    fVar1 = *pfVar2 * param_1[1] + pfVar2[1] * param_1[2] + pfVar2[-1] * *param_1;
    if (local_4 < fVar1) {
      iVar4 = iVar3;
      local_4 = fVar1;
    }
    pfVar2 = pfVar2 + 3;
    iVar3 = iVar3 + 1;
  } while ((int)pfVar2 < 0x20121204);
  return iVar4;
}

