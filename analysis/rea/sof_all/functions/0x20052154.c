// rea decompile_all
// name: FUN_20052154
// address: 0x20052154
// body: available
// range: 0x20052154-0x2005227a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_20052154(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined1 *param_6)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = FUN_200520ca();
  bVar2 = iVar1 != -1;
  if (bVar2) {
    *param_1 = iVar1 == 1;
  }
  iVar1 = FUN_200520e1();
  bVar3 = iVar1 != -1;
  if (bVar3) {
    *param_2 = iVar1 == 1;
  }
  iVar1 = FUN_200520f8();
  bVar4 = iVar1 != -1;
  if (bVar4) {
    *param_3 = iVar1 == 1;
  }
  iVar1 = FUN_2005210f();
  bVar5 = iVar1 != -1;
  if (bVar5) {
    *param_4 = iVar1 == 1;
  }
  iVar1 = FUN_20052126();
  bVar6 = iVar1 != -1;
  if (bVar6) {
    *param_5 = iVar1 == 1;
  }
  iVar1 = FUN_2005213d();
  if (iVar1 == -1) {
    *param_6 = 1;
  }
  else {
    *param_6 = iVar1 == 1;
  }
  if (!bVar6 || (!bVar5 || (!bVar4 || (!bVar3 || !bVar2)))) {
    *param_6 = 1;
    *param_5 = 1;
    *param_4 = 1;
    *param_3 = 1;
    *param_2 = 1;
    *param_1 = 1;
  }
  return bVar6 && (bVar5 && (bVar4 && (bVar3 && bVar2)));
}

