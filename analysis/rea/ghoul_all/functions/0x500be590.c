// rea decompile_all
// name: FUN_500be590
// address: 0x500be590
// body: available
// range: 0x500be590-0x500be5c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500be590(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  char *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)param_2;
  dVar4 = (double)param_3;
  dVar3 = (double)param_1;
  pcVar2 = s__f__f__f_50145ee8;
  puVar1 = FUN_500fe1e0((byte *)s__f__f__f_50145ee8);
  (*DAT_5015cb00)(5,puVar1,pcVar2,dVar3,dVar4,dVar5);
  return;
}

