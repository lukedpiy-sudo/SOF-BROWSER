// rea decompile_all
// name: FUN_50051600
// address: 0x50051600
// body: available
// range: 0x50051600-0x500516fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50051600(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = DAT_5015cca0 + 0x464;
  iVar8 = 1;
  if (0 < DAT_5015d8c8) {
    iVar6 = 0x464;
    do {
      if (((((*(int *)(iVar7 + 0x78) != 0) && (iVar4 = *(int *)(iVar7 + 0x74), iVar4 != 0)) &&
           (*(int *)(iVar4 + 800) == 0)) &&
          ((iVar7 != param_1 &&
           (*(int *)(iVar4 + 0x324) == *(int *)(*(int *)(param_1 + 0x74) + 0x324))))) &&
         ((iVar4 = (**(code **)(**(int **)(iVar4 + 0x34c) + 0x54))(7), iVar4 != 0 &&
          (*(int *)(*(int *)(param_1 + 0x74) + 0x2dc) == 0)))) break;
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 0x464;
      iVar7 = DAT_5015cca0 + iVar6;
    } while (iVar8 <= DAT_5015d8c8);
  }
  if ((iVar7 != 0) && (pfVar5 = (float *)FUN_5005e0f0(&DAT_50159a60,iVar7), pfVar5 != (float *)0x0))
  {
    fVar1 = *(float *)(param_1 + 4) - *pfVar5;
    fVar3 = *(float *)(param_1 + 8) - pfVar5[1];
    fVar2 = *(float *)(param_1 + 0xc) - pfVar5[2];
    if ((*(int *)(param_1 + 0x45c) != 0) &&
       (65536.0 < fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) {
      *(float **)(*(int *)(param_1 + 0x45c) + 0x4c) = pfVar5;
      FUN_50061fb0(&DAT_50159a60,param_1);
      return;
    }
  }
  return;
}

