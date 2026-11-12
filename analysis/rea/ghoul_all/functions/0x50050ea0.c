// rea decompile_all
// name: FUN_50050ea0
// address: 0x50050ea0
// body: available
// range: 0x50050ea0-0x50051054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50050ea0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float local_8;
  int local_4;
  
  if (*(float *)(DAT_5015c9a8 + 0x18) != 0.0) {
    if ((*(int *)(param_1 + 0x45c) != 0) && (*(int *)(*(int *)(param_1 + 0x45c) + 0x4c) == 0)) {
      iVar8 = 1;
      local_8 = 1e+08;
      local_4 = 0;
      iVar10 = DAT_5015cca0 + 0x464;
      if (0 < DAT_5015d8c8) {
        iVar9 = 0x464;
        do {
          fVar3 = *(float *)(param_1 + 4) - *(float *)(iVar10 + 4);
          fVar4 = *(float *)(param_1 + 8) - *(float *)(iVar10 + 8);
          fVar1 = *(float *)(param_1 + 0xc) - *(float *)(iVar10 + 0xc);
          fVar3 = fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1;
          if ((((((iVar10 != 0) && (*(int *)(iVar10 + 0x74) != 0)) &&
                (*(int *)(*(int *)(iVar10 + 0x74) + 800) == 0)) &&
               ((0 < *(int *)(iVar10 + 0x2ec) && (fVar3 < local_8)))) &&
              ((iVar10 != param_1 &&
               ((iVar7 = *(int *)(iVar10 + 0x45c), iVar7 != 0 &&
                (*(float *)(iVar7 + 4) < DAT_5015ccdc == (*(float *)(iVar7 + 4) == DAT_5015ccdc)))))
              )) && (iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210),
                    *(int *)(iVar7 + 0xc) <= iVar2)) {
            fVar1 = *(float *)(iVar7 + 8);
            if (2 < iVar2) {
              fVar1 = fVar1 + fVar1;
            }
            fVar6 = *(float *)(param_1 + 4) - *(float *)(iVar10 + 4);
            fVar5 = *(float *)(param_1 + 8) - *(float *)(iVar10 + 8);
            fVar4 = *(float *)(param_1 + 0xc) - *(float *)(iVar10 + 0xc);
            if (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 <= fVar1 * fVar1) {
              iVar7 = FUN_50050b50(param_1);
              if (iVar7 == 0) {
                local_8 = fVar3;
                local_4 = iVar10;
              }
            }
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x464;
          iVar10 = DAT_5015cca0 + iVar9;
        } while (iVar8 <= DAT_5015d8c8);
        if (local_4 != 0) {
          FUN_5005df10(&DAT_50159a60,param_1,local_4);
        }
      }
    }
  }
  return;
}

