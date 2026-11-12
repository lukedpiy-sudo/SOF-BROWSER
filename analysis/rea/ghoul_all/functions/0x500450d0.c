// rea decompile_all
// name: FUN_500450d0
// address: 0x500450d0
// body: available
// range: 0x500450d0-0x5004543b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500450d0(void *this,float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  int local_50;
  int local_4c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar9 = FUN_50045040(this,param_1);
  iVar10 = FUN_50045040(this,param_2);
  bVar7 = false;
  if (iVar9 != -1) {
    local_18 = *param_1;
    local_14 = param_1[1];
    local_10 = param_1[2];
    fVar3 = *param_2 - local_18;
    fVar4 = param_2[1] - local_14;
    local_c = -fVar4;
    if (iVar10 != -1) {
      do {
        iVar12 = 0;
        fVar5 = *(float *)((int)this + iVar9 * 100 + 4) + 24.0;
        sVar8 = *(short *)((int)this + iVar9 * 100 + 0x20);
        fVar2 = *(float *)((int)this + iVar9 * 100 + 0xc);
        iVar11 = (int)this + iVar9 * 100 + 0x20;
        fVar6 = *(float *)((int)this + iVar9 * 100 + 8) + 24.0;
        if (sVar8 == -1) {
LAB_500451a8:
          *(undefined2 *)((int)this + iVar12 * 2 + iVar9 * 100 + 0x20) = (undefined2)param_3;
          if (iVar12 != -1) {
            local_24 = *param_1 - fVar5;
            local_20 = param_1[1] - fVar6;
            local_1c = param_1[2] - fVar2;
            fVar13 = FUN_500fe130(&local_24);
            *(float *)((int)this + (iVar12 + iVar9 * 0x19) * 4 + 0x38) = (float)fVar13;
          }
        }
        else {
          do {
            if (sVar8 == param_3) break;
            sVar8 = *(short *)(iVar11 + 2);
            iVar11 = iVar11 + 2;
            iVar12 = iVar12 + 1;
          } while (sVar8 != -1);
          if (iVar12 < 0xc) goto LAB_500451a8;
        }
        sVar8 = *(short *)((int)this + iVar9 * 100 + 0x20);
        iVar11 = (int)this + iVar9 * 100 + 0x20;
        iVar12 = 0;
        if (sVar8 == -1) {
LAB_5004521f:
          *(undefined2 *)((int)this + iVar12 * 2 + iVar9 * 100 + 0x20) = (undefined2)param_4;
          if (iVar12 != -1) {
            local_24 = *param_2 - fVar5;
            local_20 = param_2[1] - fVar6;
            local_1c = param_2[2] - fVar2;
            fVar13 = FUN_500fe130(&local_24);
            *(float *)((int)this + (iVar12 + iVar9 * 0x19) * 4 + 0x38) = (float)fVar13;
          }
        }
        else {
          do {
            if (sVar8 == param_4) break;
            sVar8 = *(short *)(iVar11 + 2);
            iVar11 = iVar11 + 2;
            iVar12 = iVar12 + 1;
          } while (sVar8 != -1);
          if (iVar12 < 0xc) goto LAB_5004521f;
        }
        fVar1 = *(float *)((int)this + iVar9 * 100 + 8);
        if (5.0 <= ABS(*(float *)((int)this + iVar9 * 100 + 4) -
                       *(float *)((int)this + iVar10 * 100 + 4))) {
          if (5.0 <= ABS(fVar1 - *(float *)((int)this + iVar10 * 100 + 8))) {
            if ((fVar3 <= 0.0) || (fVar4 <= 0.0)) {
              if ((0.0 <= fVar3) || (fVar4 <= 0.0)) {
                if ((fVar3 <= 0.0) || (0.0 <= fVar4)) {
                  if ((fVar3 < 0.0) && (fVar4 < 0.0)) {
                    local_4c = (int)*(short *)((int)this + iVar9 * 100 + 0x16);
                    local_50 = (int)*(short *)((int)this + iVar9 * 100 + 0x1c);
                  }
                }
                else {
                  local_4c = (int)*(short *)((int)this + iVar9 * 100 + 0x18);
                  local_50 = (int)*(short *)((int)this + iVar9 * 100 + 0x16);
                }
              }
              else {
                local_4c = (int)*(short *)((int)this + iVar9 * 100 + 0x1c);
                local_50 = (int)*(short *)((int)this + iVar9 * 100 + 0x1a);
              }
            }
            else {
              local_4c = (int)*(short *)((int)this + iVar9 * 100 + 0x1a);
              local_50 = (int)*(short *)((int)this + iVar9 * 100 + 0x18);
            }
            iVar9 = local_50;
            if ((fVar2 - local_10) * 0.0 + (fVar5 - local_18) * local_c + (fVar6 - local_14) * fVar3
                <= 0.0) {
              iVar9 = local_4c;
            }
          }
          else if (*(float *)((int)this + iVar9 * 100 + 4) <=
                   *(float *)((int)this + iVar10 * 100 + 4)) {
            iVar9 = (int)*(short *)((int)this + iVar9 * 100 + 0x18);
          }
          else {
            iVar9 = (int)*(short *)((int)this + iVar9 * 100 + 0x1c);
          }
        }
        else if (fVar1 <= *(float *)((int)this + iVar10 * 100 + 8)) {
          iVar9 = (int)*(short *)((int)this + iVar9 * 100 + 0x1a);
        }
        else {
          iVar9 = (int)*(short *)((int)this + iVar9 * 100 + 0x16);
        }
        if (iVar9 < 0) {
          return;
        }
        if ((ABS(*(float *)((int)this + iVar9 * 100 + 4) - *(float *)((int)this + iVar10 * 100 + 4))
             < 5.0) &&
           (ABS(*(float *)((int)this + iVar9 * 100 + 8) - *(float *)((int)this + iVar10 * 100 + 8))
            < 5.0)) {
          bVar7 = true;
        }
        if (iVar9 == iVar10) {
          return;
        }
        if (bVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

