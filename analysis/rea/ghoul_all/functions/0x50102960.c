// rea decompile_all
// name: FUN_50102960
// address: 0x50102960
// body: available
// range: 0x50102960-0x50102a3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50102960(float param_1,float *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)((int)param_1 + 0x74);
  if (iVar1 != 0) {
    fVar2 = *(float *)(iVar1 + 0x4cc) - param_3;
    fVar3 = DAT_5015ccdc + param_3 * 0.033333335;
    fVar4 = *(float *)(iVar1 + 0x4d0) + param_3 * 0.033333335;
    if (-20.0 <= fVar2) {
      *(float *)(iVar1 + 0x4cc) = fVar2;
    }
    else {
      *(undefined4 *)(iVar1 + 0x4cc) = 0xc1a00000;
    }
    if (fVar3 <= fVar4) {
      *(float *)(*(int *)((int)param_1 + 0x74) + 0x4d0) = fVar4;
    }
    else {
      *(float *)(*(int *)((int)param_1 + 0x74) + 0x4d0) = fVar3;
    }
    pfVar6 = &local_c;
    local_c = *param_2 * -1.0;
    local_8 = param_2[1] * -1.0;
    local_4 = param_2[2] * -1.0;
    lVar5 = __ftol();
    FUN_5008b810(param_1,0,(int)lVar5,pfVar6);
  }
  return;
}

