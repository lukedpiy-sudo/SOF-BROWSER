// rea decompile_all
// name: FUN_200a0f40
// address: 0x200a0f40
// body: available
// range: 0x200a0f40-0x200a0fad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a0f40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 *in_ECX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = in_ECX;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  in_ECX[10] = param_3;
  *in_ECX = param_1;
  in_ECX[5] = param_2;
  in_ECX[0xf] = 0x3f800000;
  in_ECX[0x10] = 0;
  iVar2 = 0;
  do {
    iVar3 = 0;
    do {
      fVar1 = (float)in_ECX[iVar3 + iVar2 * 4];
      if (iVar2 == iVar3) {
        fVar1 = 1.0 - fVar1;
      }
      if (0.0001 < ABS(fVar1)) {
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      in_ECX[0x10] = 1;
      return;
    }
  } while( true );
}

