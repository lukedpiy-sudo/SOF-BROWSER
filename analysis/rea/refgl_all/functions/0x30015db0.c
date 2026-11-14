// rea decompile_all
// name: FUN_30015db0
// address: 0x30015db0
// body: available
// range: 0x30015db0-0x30015fd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30015db0(int *param_1)

{
  char cVar1;
  float *pfVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar10 = param_1;
  if (*param_1 != 1) {
    while( true ) {
      if (piVar10[1] != DAT_3008fe98) {
        return;
      }
      iVar6 = FUN_3000dc50((undefined8 *)(piVar10 + 2),(undefined8 *)(piVar10 + 5));
      if (iVar6 != 0) {
        return;
      }
      if (*piVar10 != -1) break;
      pfVar2 = (float *)piVar10[9];
      cVar1 = *(char *)(pfVar2 + 4);
      fVar5 = DAT_30090010;
      if (((cVar1 != '\0') && (fVar5 = DAT_30090014, cVar1 != '\x01')) &&
         (fVar5 = DAT_30090018, cVar1 != '\x02')) {
        fVar5 = DAT_30090010 * *pfVar2 + DAT_30090014 * pfVar2[1] + DAT_30090018 * pfVar2[2];
      }
      bVar4 = fVar5 - pfVar2[3] < 0.0;
      param_1 = (int *)(uint)bVar4;
      FUN_30015db0((int *)piVar10[(int)param_1 + 10]);
      piVar11 = (int *)(*(int *)(DAT_3008fc6c + 0xb8) + (uint)*(ushort *)(piVar10 + 0xe) * 0x6c);
      for (uVar9 = (uint)*(ushort *)((int)piVar10 + 0x3a); uVar9 != 0; uVar9 = uVar9 - 1) {
        if ((*piVar11 == DAT_3008fd90) && ((bool)(char)piVar11[2] == bVar4)) {
          iVar6 = piVar11[0xd];
          uVar3 = *(uint *)(iVar6 + 0x20);
          if ((uVar3 & 0x10000) == 0) {
            if ((uVar3 & 4) == 0) {
              if ((uVar3 & 0x800) == 0) {
                if (*(int *)(iVar6 + 0x28) != 0) {
                  if (((*(uint *)(iVar6 + 0x20) & 0x1000) == 0) ||
                     (*(char *)(*(int *)(iVar6 + 0x2c) + 0x55) == '\0')) {
                    iVar8 = *(int *)(DAT_3008fed8 + 0x34);
                  }
                  else {
                    lVar12 = __ftol();
                    iVar8 = (int)lVar12;
                  }
                  for (iVar8 = iVar8 % *(int *)(iVar6 + 0x24); iVar8 != 0; iVar8 = iVar8 + -1) {
                    iVar6 = *(int *)(iVar6 + 0x28);
                  }
                }
                iVar6 = *(int *)(iVar6 + 0x2c);
                piVar11[0xb] = *(int *)(iVar6 + 0x4c);
                *(int **)(iVar6 + 0x4c) = piVar11;
              }
              else {
                piVar11[0xb] = (int)DAT_3008fd68;
                DAT_3008fd68 = piVar11;
                if (piVar11[0xe] != 0) {
                  FUN_30012710((int)piVar11);
                }
              }
            }
            else {
              FUN_30018b90((int)piVar11);
              if (piVar11[0xe] != 0) {
                FUN_30012710((int)piVar11);
              }
            }
          }
          else {
            FUN_30012710((int)piVar11);
          }
        }
        piVar11 = piVar11 + 0x1b;
      }
      piVar10 = (int *)piVar10[!bVar4 + 10];
      if (*piVar10 == 1) {
        return;
      }
    }
    if ((DAT_3008fd40 == 0) ||
       ((*(byte *)((piVar10[10] >> 3) + DAT_3008fd40) & (byte)(1 << ((byte)piVar10[10] & 7))) != 0))
    {
      puVar7 = (undefined4 *)piVar10[0xc];
      for (iVar6 = piVar10[0xd]; iVar6 != 0; iVar6 = iVar6 + -1) {
        piVar10 = (int *)*puVar7;
        puVar7 = puVar7 + 1;
        *piVar10 = DAT_3008fd90;
      }
    }
  }
  return;
}

