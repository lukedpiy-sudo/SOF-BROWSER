// rea decompile_all
// name: FUN_2001f090
// address: 0x2001f090
// body: available
// range: 0x2001f090-0x2001f11a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_2001f090(int param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint _Size;
  undefined4 *puVar3;
  
  _Size = param_1 + 0x10;
  puVar1 = _malloc(_Size);
  if (puVar1 == (undefined4 *)0x0) {
    Com_Error(0,s_Z_Malloc__failed_on_allocation_o_201213dc,_Size);
  }
  puVar3 = puVar1;
  for (uVar2 = _Size >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = _Size & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  DAT_20249e70 = DAT_20249e70 + _Size;
  DAT_20249634 = DAT_20249634 + 1;
  *(undefined2 *)(puVar1 + 2) = 0x1d1d;
  *(undefined2 *)((int)puVar1 + 10) = param_2;
  puVar1[3] = _Size;
  puVar3 = DAT_20249e58;
  *puVar1 = &DAT_20249e54;
  puVar1[1] = puVar3;
  *DAT_20249e58 = puVar1;
  DAT_20249e58 = puVar1;
  return puVar1 + 4;
}

