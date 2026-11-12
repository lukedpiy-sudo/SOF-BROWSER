// rea decompile_all
// name: FUN_200a0d50
// address: 0x200a0d50
// body: available
// range: 0x200a0d50-0x200a0dca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a0d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  
  puVar2 = in_ECX;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar3 = 4;
  puVar2 = in_ECX;
  do {
    *puVar2 = 0x3f800000;
    puVar2 = puVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  in_ECX[0xe] = param_3;
  in_ECX[0xc] = param_1;
  in_ECX[0xd] = param_2;
  in_ECX[0x10] = 0;
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      fVar1 = (float)in_ECX[iVar4 + iVar3 * 4];
      if (iVar3 == iVar4) {
        fVar1 = 1.0 - fVar1;
      }
      if (0.0001 < ABS(fVar1)) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      in_ECX[0x10] = 1;
      return;
    }
  } while( true );
}

