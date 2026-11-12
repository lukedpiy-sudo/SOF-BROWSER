// rea decompile_all
// name: FUN_20012830
// address: 0x20012830
// body: available
// range: 0x20012830-0x200128c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20012830(void)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_200216d0(s_maxclients_2011d768);
  if (fVar3 == (float10)1.0) {
    iVar1 = FUN_2001cae0();
    if (iVar1 != 0) {
      if (DAT_201c1f04 == 0) {
        if (DAT_20230328 != (undefined4 *)0x0) {
          Z_Free(DAT_20230328);
          DAT_20230328 = (undefined4 *)0x0;
        }
        DAT_20230328 = (undefined4 *)Z_Malloc(0x10000);
        (*DAT_20403644)(DAT_20230328,0x80,0x80);
      }
      else if (DAT_20230328 == (undefined4 *)0x0) {
        DAT_20230328 = (undefined4 *)Z_Malloc(0x10000);
        puVar2 = DAT_20230328;
        for (iVar1 = 0x4000; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        return;
      }
    }
  }
  return;
}

