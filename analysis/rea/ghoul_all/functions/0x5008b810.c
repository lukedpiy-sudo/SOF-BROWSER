// rea decompile_all
// name: FUN_5008b810
// address: 0x5008b810
// body: available
// range: 0x5008b810-0x5008b91b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008b810(float param_1,byte param_2,int param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  fVar3 = param_1;
  if (((((*(uint *)((int)param_1 + 0x1a0) & 0x800) == 0) && ((param_2 & 8) == 0)) && (param_3 != 0))
     && (((iVar1 = *(int *)((int)param_1 + 0x19c), iVar1 != 0 && (iVar1 != 9)) &&
         ((iVar1 != 2 && (iVar1 != 3)))))) {
    if (*(int *)((int)param_1 + 0x27c) < 0x32) {
      param_1 = 50.0;
    }
    else {
      param_1 = (float)*(int *)((int)param_1 + 0x27c);
    }
    local_18 = *param_4;
    local_14 = param_4[1];
    if ((char)param_2 < '\0') {
      local_10 = 0.1;
    }
    else {
      local_10 = 0.25;
    }
    local_10 = param_4[2] * local_10;
    FUN_500fe050(&local_18);
    fVar2 = ((float)param_3 * 250.0) / param_1;
    *(float *)((int)fVar3 + 0x24c) = local_18 * fVar2 + *(float *)((int)fVar3 + 0x24c);
    *(float *)((int)fVar3 + 0x250) = local_14 * fVar2 + *(float *)((int)fVar3 + 0x250);
    *(float *)((int)fVar3 + 0x254) = fVar2 * local_10 + *(float *)((int)fVar3 + 0x254);
  }
  return;
}

