// rea decompile_all
// name: FUN_500add60
// address: 0x500add60
// body: available
// range: 0x500add60-0x500ae09e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500adddd to 0x500adbb0 FUN_500adbb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x500ade20 to 0x500adbb0 FUN_500adbb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x500ae09a to 0x500adbb0 FUN_500adbb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_500add60(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  undefined3 extraout_var;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int *piStack_284;
  int iStack_280;
  int aiStack_27c [159];
  
  if ((_DAT_5015d1c8 == 0.0) && (iVar7 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar7 != 0)) {
    if (*(int *)(DAT_5015c8c8 + 0x18) == 0x40c00000) {
      iVar7 = *DAT_5015c4d8;
      lVar12 = __ftol();
      cVar4 = (**(code **)(iVar7 + 0x38))((int)lVar12);
      if (cVar4 != '\0') {
        (*DAT_5015cab0)(0,0xd0d);
        FUN_500adbb0();
        return;
      }
    }
    iVar7 = DAT_5015d2a4;
    if ((*(int *)(DAT_5015c8c8 + 0x18) == 0x40800000) && (*(float *)(DAT_5015c8a4 + 0x18) != 0.0)) {
      (*DAT_5015cab0)(0,0xa0d);
      FUN_500adbb0();
      return;
    }
    if (*(float *)(DAT_5015d2a4 + 0x18) != 0.0) {
      iVar10 = 0;
      lVar12 = __ftol();
      if (0 < (int)lVar12) {
        piVar8 = (int *)(DAT_5015cca0 + 0x4d8);
        do {
          if (((piVar8[1] != 0) && (*piVar8 != 0)) &&
             (fVar3 = (float)(DAT_5015ccd8 - *(int *)(*piVar8 + 0x304)),
             fVar2 = *(float *)(iVar7 + 0x18) * 600.0, fVar2 < fVar3 != (fVar2 == fVar3))) {
            lVar12 = __ftol();
            sVar6 = (short)lVar12;
            uVar13 = 0x3c;
            goto LAB_500ae085;
          }
          iVar10 = iVar10 + 1;
          piVar8 = piVar8 + 0x119;
        } while (iVar10 < (int)lVar12);
      }
    }
    if (*(float *)(DAT_5015c95c + 0x18) != 0.0) {
      iVar7 = (**(code **)(*DAT_5015c4d8 + 0x58))();
      if (iVar7 == 0) {
        iVar7 = 0;
        lVar12 = __ftol();
        if (0 < (int)lVar12) {
          piVar9 = (int *)(DAT_5015d6c4 + 0x308);
          piVar8 = (int *)(DAT_5015cca0 + 0x4dc);
          while ((*piVar8 == 0 || ((float)*piVar9 < *(float *)(DAT_5015c95c + 0x18)))) {
            iVar7 = iVar7 + 1;
            piVar8 = piVar8 + 0x119;
            piVar9 = piVar9 + 0x180;
            if ((int)lVar12 <= iVar7) {
              return;
            }
          }
          lVar12 = __ftol();
          sVar6 = (short)lVar12;
LAB_500ae083:
          uVar13 = 0x3b;
LAB_500ae085:
          (*DAT_5015cab0)(0,uVar13,(int)sVar6);
          FUN_500adbb0();
          return;
        }
      }
      else {
        iVar7 = 0;
        iStack_28c = 0;
        lVar12 = __ftol();
        if (0 < (int)lVar12) {
          piStack_284 = aiStack_27c;
          iStack_290 = 0;
          iStack_294 = 0x464;
          do {
            iVar10 = iStack_294 + DAT_5015cca0;
            if (*(int *)(iVar10 + 0x78) != 0) {
              iVar11 = 0;
              iVar1 = *(int *)(iStack_290 + 0x308 + DAT_5015d6c4);
              if (0 < iVar7) {
                piVar8 = &iStack_280;
                do {
                  bVar5 = FUN_500887e0(DAT_5015cca0 + (*piVar8 + 1) * 0x464,iVar10);
                  if (CONCAT31(extraout_var,bVar5) != 0) {
                    aiStack_27c[iVar11 * 5] = aiStack_27c[iVar11 * 5] + iVar1;
                    break;
                  }
                  iVar11 = iVar11 + 1;
                  piVar8 = piVar8 + 5;
                } while (iVar11 < iVar7);
              }
              if (iVar11 == iVar7) {
                iVar7 = iVar7 + 1;
                piStack_284[-1] = iStack_28c;
                *piStack_284 = iVar1;
                piStack_284 = piStack_284 + 5;
              }
            }
            iStack_290 = iStack_290 + 0x600;
            iStack_28c = iStack_28c + 1;
            iStack_294 = iStack_294 + 0x464;
            lVar12 = __ftol();
          } while (iStack_28c < (int)lVar12);
        }
        iVar10 = 0;
        if (0 < iVar7) {
          piVar8 = aiStack_27c;
          do {
            if (*(float *)(DAT_5015c95c + 0x18) <= (float)*piVar8) {
              lVar12 = __ftol();
              sVar6 = (short)lVar12;
              goto LAB_500ae083;
            }
            iVar10 = iVar10 + 1;
            piVar8 = piVar8 + 5;
          } while (iVar10 < iVar7);
        }
      }
    }
  }
  return;
}

