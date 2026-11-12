// rea decompile_all
// name: FUN_2006dff0
// address: 0x2006dff0
// body: available
// range: 0x2006dff0-0x2006e215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006dff0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float *in_ECX;
  ushort *puVar10;
  ushort *puVar11;
  ushort uVar12;
  ushort *puVar13;
  int *piVar14;
  float10 fVar15;
  undefined1 *puVar16;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  float local_c;
  float local_8;
  float local_4;
  
  local_c = (*param_2 - in_ECX[3]) * *in_ECX;
  local_8 = (param_2[1] - in_ECX[4]) * in_ECX[1];
  local_4 = (param_2[2] - in_ECX[5]) * in_ECX[2];
  FUN_200fc6f3((double)(local_c * 32.0));
  iVar7 = __ftol();
  FUN_200fc6f3((double)(local_8 * 32.0));
  uVar8 = __ftol();
  FUN_200fc6f3((double)(local_4 * 32.0));
  iVar9 = __ftol();
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else if (0x1f < iVar7) {
    iVar7 = 0x1f;
  }
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  else if (0x1f < (int)uVar8) {
    uVar8 = 0x1f;
  }
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else if (0x1f < iVar9) {
    iVar9 = 0x1f;
  }
  puVar10 = (ushort *)in_ECX[0xe];
  uVar12 = (ushort)((iVar9 << 5 | uVar8) << 6) | (ushort)iVar7;
  puVar13 = (ushort *)in_ECX[0xf];
  if (puVar10 == (ushort *)in_ECX[0xf]) {
    return;
  }
  do {
    iVar7 = ((int)puVar13 - (int)puVar10 >> 3) - ((int)puVar13 - (int)puVar10 >> 0x1f) >> 1;
    puVar11 = puVar10 + iVar7 * 4;
    if (puVar10[iVar7 * 4] < uVar12) {
      puVar10 = puVar11 + 4;
      puVar11 = puVar13;
    }
    else if (puVar10[iVar7 * 4] <= uVar12) {
      if (puVar10 == puVar13) {
        return;
      }
      for (; (puVar11 != (ushort *)in_ECX[0xe] && (puVar11[-4] == uVar12)); puVar11 = puVar11 + -4)
      {
      }
      if (puVar11 == (ushort *)in_ECX[0xf]) {
        return;
      }
      do {
        if (*puVar11 != uVar12) {
          return;
        }
        fVar15 = (float10)FUN_200c38e0();
        fVar1 = (float)fVar15;
        fVar2 = *(float *)(puVar11 + 2);
        if (fVar1 < *(float *)((int)fVar2 + 0xc) != (fVar1 == *(float *)((int)fVar2 + 0xc))) {
          piVar3 = *(int **)(param_1 + 4);
          bVar4 = true;
          piVar5 = piVar3;
          piVar6 = (int *)piVar3[1];
          while (piVar6 != *(int **)(param_1 + 8)) {
            if ((float)piVar6[3] <= fVar1) {
              piVar14 = (int *)piVar6[2];
            }
            else {
              piVar14 = (int *)*piVar6;
            }
            bVar4 = (float)piVar6[3] > fVar1;
            piVar5 = piVar6;
            piVar6 = piVar14;
          }
          local_c = fVar1;
          local_8 = fVar2;
          if (*(char *)(param_1 + 0xc) == '\0') {
            if (bVar4) {
              if (piVar5 == (int *)*piVar3) {
                puVar16 = local_14;
                goto LAB_2006e1f3;
              }
              FUN_2008e140();
            }
            if (local_c <= (float)piVar5[3]) goto LAB_2006e1fe;
            puVar16 = local_10;
          }
          else {
            puVar16 = local_18;
          }
LAB_2006e1f3:
          FUN_20074bb0(puVar16,piVar6,CONCAT44(&local_c,piVar5));
        }
LAB_2006e1fe:
        puVar11 = puVar11 + 4;
        if (puVar11 == (ushort *)in_ECX[0xf]) {
          return;
        }
      } while( true );
    }
    puVar13 = puVar11;
    if (puVar10 == puVar11) {
      return;
    }
  } while( true );
}

