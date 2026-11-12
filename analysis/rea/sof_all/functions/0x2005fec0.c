// rea decompile_all
// name: FUN_2005fec0
// address: 0x2005fec0
// body: available
// range: 0x2005fec0-0x2005ff80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005fec0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_20396eec != 0) {
    FUN_2005fd80(param_1,param_2);
  }
  FUN_2005cd70();
  FUN_20057f40(2);
  if (DAT_203fac48 != 0) {
    FS_FCloseFile(DAT_203fac48);
  }
  puVar3 = &DAT_203a1f20;
  for (iVar2 = 0x1634c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_2001caf0(DAT_203a1f20);
  if (DAT_20396eec != 0) {
    Z_Free(DAT_20396eec);
  }
  if (DAT_20396ef8 != 0) {
    Z_Free(DAT_20396ef8);
  }
  if (DAT_2039df00 != 0) {
    FS_FCloseFile(DAT_2039df00);
  }
  puVar3 = &DAT_20396de0;
  for (iVar2 = 0x2c50; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_2008eaa0();
  if (param_2 == 0) {
    piVar1 = (int *)FUN_2008ea40();
    (**(code **)(*piVar1 + 0x20))();
  }
  DAT_20402cd0 = 1;
  return;
}

