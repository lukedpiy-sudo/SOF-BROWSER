// rea decompile_all
// name: FUN_2004fd20
// address: 0x2004fd20
// body: available
// range: 0x2004fd20-0x2004fd7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2004fd20(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int in_ECX;
  
  cVar1 = FUN_2004fa80(param_1,&param_2,param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  puVar2 = *(undefined1 **)(in_ECX + 0x1c);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_201116cc;
  }
  iVar3 = FUN_200faa9a(puVar2,&DAT_201311d4);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_200faf40(iVar3,param_2,0);
  return iVar3;
}

