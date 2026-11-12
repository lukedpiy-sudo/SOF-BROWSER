// rea decompile_all
// name: FUN_5010b1af
// address: 0x5010b1af
// body: available
// range: 0x5010b1af-0x5010b246 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __cdecl
FUN_5010b1af(uint param_1,uint param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [14];
  uint local_24;
  
  bVar1 = FUN_5010b4fa(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xfffffffe;
    FUN_5010b247(local_5c,&param_5,param_1,param_2,&param_3,&param_4);
  }
  iVar2 = FUN_5010b7e4((byte)param_1);
  if ((DAT_501589f0 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_5010b711(iVar2,param_2);
    return fVar3;
  }
  FUN_5010b799(iVar2);
  FUN_5010b984();
  return (float10)param_4;
}

