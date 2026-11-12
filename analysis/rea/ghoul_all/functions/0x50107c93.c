// rea decompile_all
// name: FUN_50107c93
// address: 0x50107c93
// body: available
// range: 0x50107c93-0x50107d30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * __cdecl FUN_50107c93(uint *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  uint *puVar3;
  LPWSTR local_8;
  
  local_8 = (LPWSTR)0x0;
  if (DAT_5018c35c == 0) {
    cVar1 = (char)*param_1;
    puVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = (char)*puVar3;
      if (('@' < cVar1) && (cVar1 < '[')) {
        *(char *)puVar3 = cVar1 + ' ';
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      cVar1 = *(char *)puVar3;
    }
  }
  else {
    _Size = FUN_5010c230(DAT_5018c35c,0x100,(char *)param_1,-1,(LPWSTR)0x0,0,0,1);
    if (((_Size != 0) && (local_8 = _malloc(_Size), local_8 != (LPWSTR)0x0)) &&
       (iVar2 = FUN_5010c230(DAT_5018c35c,0x100,(char *)param_1,-1,local_8,_Size,0,1), iVar2 != 0))
    {
      FUN_5010c140(param_1,(uint *)local_8);
    }
    FUN_5010880b((undefined *)local_8);
  }
  return param_1;
}

