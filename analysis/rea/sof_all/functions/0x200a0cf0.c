// rea decompile_all
// name: FUN_200a0cf0
// address: 0x200a0cf0
// body: available
// range: 0x200a0cf0-0x200a0d49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_200a0cf0(void)

{
  float *pfVar1;
  float *in_ECX;
  int iVar2;
  float10 fVar3;
  float local_58;
  undefined1 local_54 [16];
  float local_44 [16];
  float local_4;
  
  local_4 = in_ECX[0x10];
  if (((uint)local_4 & 1) != 0) {
    return (float10)1.0;
  }
  pfVar1 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar1 = *in_ECX;
    in_ECX = in_ECX + 1;
    pfVar1 = pfVar1 + 1;
  }
  FUN_200a08f0(local_44,local_54,&local_58);
  fVar3 = (float10)local_58;
  pfVar1 = local_44;
  iVar2 = 4;
  do {
    fVar3 = fVar3 * (float10)*pfVar1;
    pfVar1 = pfVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return fVar3;
}

