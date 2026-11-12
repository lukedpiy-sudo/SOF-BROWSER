// rea decompile_all
// name: FUN_500bd8f0
// address: 0x500bd8f0
// body: available
// range: 0x500bd8f0-0x500bd9d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500bd8f0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  char *_Source;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char local_100 [256];
  
  puVar5 = param_2;
  bVar1 = false;
  puVar4 = &DAT_5015cb90;
  for (iVar3 = 0x43; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  while (_Source = FUN_500fe200(&param_1), *_Source != '}') {
    if (param_1 == 0) {
      (*DAT_5015cb10)(s_ED_ParseEntity__EOF_without_clos_5014ff3c);
    }
    _strncpy(local_100,_Source,0xff);
    pbVar2 = FUN_500fe200(&param_1);
    if (param_1 == 0) {
      (*DAT_5015cb10)(s_ED_ParseEntity__EOF_without_clos_5014ff3c);
    }
    if (*pbVar2 == 0x7d) {
      (*DAT_5015cb10)(s_ED_ParseEntity__closing_brace_wi_5014ff10);
    }
    bVar1 = true;
    if (local_100[0] != '_') {
      FUN_500bd730(local_100,pbVar2,puVar5);
    }
  }
  if (!bVar1) {
    for (iVar3 = 0x119; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return param_1;
}

