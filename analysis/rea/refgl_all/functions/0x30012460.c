// rea decompile_all
// name: FUN_30012460
// address: 0x30012460
// body: available
// range: 0x30012460-0x300124c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_30012460(int param_1)

{
  byte bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  
  uVar3 = 0xffffffff;
  pfVar6 = (float *)(param_1 + 4);
  iVar4 = 8;
  do {
    uVar5 = 0;
    bVar1 = 0;
    pfVar2 = (float *)&DAT_3008fe4c;
    do {
      if ((*pfVar6 * *pfVar2 + pfVar2[-1] * pfVar6[-1] + pfVar2[1] * pfVar6[1]) - pfVar2[2] < 0.0) {
        uVar5 = uVar5 | 1 << (bVar1 & 0x1f);
      }
      pfVar2 = pfVar2 + 5;
      bVar1 = bVar1 + 1;
    } while ((int)pfVar2 < 0x3008fe9c);
    uVar3 = uVar3 & uVar5;
    pfVar6 = pfVar6 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar3 != 0;
}

