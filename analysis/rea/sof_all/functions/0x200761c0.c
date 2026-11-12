// rea decompile_all
// name: FUN_200761c0
// address: 0x200761c0
// body: available
// range: 0x200761c0-0x20076213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200761c0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_2 + 0x18);
    puVar3 = param_3 + 6;
    do {
      puVar1 = (undefined4 *)(param_2 + -0x1c);
      param_2 = param_2 + -0x1c;
      param_3 = param_3 + -7;
      *param_3 = *puVar1;
      puVar3[-0xc] = puVar2[-0xc];
      puVar3[-0xb] = puVar2[-0xb];
      puVar3[-10] = puVar2[-10];
      puVar3[-9] = puVar2[-9];
      puVar3[-8] = puVar2[-8];
      puVar3[-7] = puVar2[-7];
      puVar2 = puVar2 + -7;
      puVar3 = puVar3 + -7;
    } while (param_2 != param_1);
  }
  return;
}

