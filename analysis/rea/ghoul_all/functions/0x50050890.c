// rea decompile_all
// name: FUN_50050890
// address: 0x50050890
// body: available
// range: 0x50050890-0x50050971 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50050890(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  
  if ((*(int *)(param_1 + 0x45c) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 0x40), iVar1 != 0)) {
    pfVar8 = (float *)FUN_5005deb0(&DAT_50159a60,*(int *)(iVar1 + 0xc) + 1);
    pfVar9 = (float *)FUN_5005deb0(&DAT_50159a60,
                                   *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x40) + 0xc) + -1);
    if ((pfVar8 != (float *)0x0) && (pfVar9 != (float *)0x0)) {
      fVar2 = *(float *)(param_2 + 4) - *pfVar8;
      fVar6 = *(float *)(param_2 + 8) - pfVar8[1];
      fVar5 = *(float *)(param_2 + 0xc) - pfVar8[2];
      fVar4 = *(float *)(param_2 + 4) - *pfVar9;
      fVar3 = *(float *)(param_2 + 8) - pfVar9[1];
      fVar7 = *(float *)(param_2 + 0xc) - pfVar9[2];
      if (fVar4 * fVar4 + fVar3 * fVar3 + fVar7 * fVar7 <
          fVar2 * fVar2 + fVar6 * fVar6 + fVar5 * fVar5) {
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x50) = 0;
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x50) = 1;
    }
  }
  return;
}

