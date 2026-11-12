// rea decompile_all
// name: CL_GetEntitySoundOrigin
// address: 0x20004560
// body: available
// range: 0x20004560-0x20004614 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CL_GetEntitySoundOrigin(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  
                    /* 0x4560  1  CL_GetEntitySoundOrigin */
  if ((param_1 < 0) || (0x3ff < param_1)) {
    Com_Error(1,s_CL_GetEntitySoundOrigin__bad_ent_2011c930);
  }
  iVar1 = param_1 * 0x18c;
  if (*(int *)(&DAT_2015efa4 + param_1 * 0x18c) == 0x1f) {
    pfVar6 = *(float **)(&DAT_2022118c + *(int *)(&DAT_2015ef8c + iVar1) * 4);
    fVar2 = pfVar6[4];
    fVar3 = pfVar6[1];
    fVar4 = pfVar6[5];
    fVar5 = pfVar6[2];
    *param_2 = (pfVar6[3] + *pfVar6) * 0.5;
    param_2[1] = (fVar2 + fVar3) * 0.5;
    param_2[2] = (fVar4 + fVar5) * 0.5;
    return;
  }
  *param_2 = *(float *)(&DAT_2015f058 + iVar1);
  param_2[1] = *(float *)(&DAT_2015f05c + iVar1);
  param_2[2] = *(float *)(&DAT_2015f060 + iVar1);
  return;
}

