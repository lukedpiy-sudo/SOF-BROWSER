// rea decompile_all
// name: FUN_20016cd0
// address: 0x20016cd0
// body: available
// range: 0x20016cd0-0x2001711a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20016cd0(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 fVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if ((DAT_201c1f00 == 8) && (DAT_201e7594 != '\0')) {
    if (*(float *)(DAT_201e7560 + 0x18) != 0.0) {
      if (DAT_201e7590 == 0) {
        DAT_201e7590 = FUN_20055930();
      }
      DAT_201e758c = DAT_201e758c + 1;
    }
    if ((DAT_201e7e60 != 0) && ((DAT_201e7596 != '\0' || (*(float *)(DAT_202250a8 + 0x18) == 0.0))))
    {
      DAT_201e7596 = '\0';
      DAT_2023f2d0 = 0;
      DAT_2023e2c8 = 0;
      DAT_2023d2c4 = 0;
      DAT_20230eb4 = 0;
      FUN_20004460();
      if (*(float *)(DAT_20230eb8 + 0x18) != 0.0) {
        FUN_200167c0();
      }
      iVar4 = DAT_20225edc;
      iVar3 = DAT_20225ed8;
      fVar2 = DAT_201e8fe8;
      if (*(float *)(DAT_20230ebc + 0x18) != 0.0) {
        DAT_201e9008 = 0x3f800000;
        DAT_201e900c = 0x3f000000;
        _DAT_201e9010 = 0x3e800000;
        _DAT_201e9014 = 0x3f000000;
      }
      DAT_201e8ff0 = DAT_201e8ff0 + 0.0625;
      _DAT_201e8fdc = DAT_20225ed4;
      DAT_201e8ff4 = DAT_201e8ff4 + 0.0625;
      _DAT_201e8fe0 = DAT_20225ed8;
      _DAT_201e8fd8 = DAT_20225ed0;
      _DAT_201e8fe4 = DAT_20225edc;
      DAT_201e8ff8 = DAT_201e8ff8 + 0.0625;
      if ((DAT_201e8fe8 < 1.0) || (179.0 < DAT_201e8fe8)) {
        Com_Error(1,s_Bad_fov___f_2011f880,(double)DAT_201e8fe8);
      }
      _DAT_201e9020 = DAT_201e9024;
      _DAT_201e901c = DAT_201e9024;
      DAT_201e9024 = DAT_201e8fc8;
      _DAT_201e902c = &DAT_201e7e74;
      fVar5 = (float10)fptan((float10)fVar2 * (float10)0.0027777778 * (float10)3.141592653589793);
      fVar5 = (float10)fpatan((float10)iVar4 / ((float10)iVar3 / fVar5),(float10)1);
      _DAT_201e8fec = (float)(fVar5 * (float10)360.0 * (float10)0.3183098861837907);
      _DAT_201e9018 = (float)DAT_201e8fc4 * 0.001;
      _DAT_201e9020 = DAT_201e8fc8 - _DAT_201e9020;
      if (*(float *)(DAT_20225078 + 0x18) == 0.0) {
        DAT_2023e2c8 = 0;
      }
      if (*(float *)(DAT_202250a4 + 0x18) == 0.0) {
        DAT_2023f2d0 = 0;
      }
      if (*(float *)(DAT_2015eef0 + 0x18) == 0.0) {
        DAT_2023d2c4 = 0;
        DAT_20230eb4 = 0;
      }
      if (*(float *)(DAT_20225060 + 0x18) == 0.0) {
        DAT_201e9008 = 0;
        DAT_201e900c = 0;
        _DAT_201e9010 = 0;
      }
      _DAT_201e9034 = DAT_2023e2c8;
      _DAT_201e904c = DAT_2023d2c4;
      _DAT_201e9038 = &DAT_202306b0;
      _DAT_201e9050 = &DAT_2023d2c8;
      _DAT_201e9044 = DAT_20230eb4;
      _DAT_201e9048 = &DAT_20230ec0;
      _DAT_201e903c = DAT_2023f2d0;
      _DAT_201e9040 = &DAT_20230330;
      _DAT_201e9030 = &DAT_2023e2d0;
      _DAT_201e9028 = DAT_201e7f2c;
    }
    uVar7 = CONCAT44(unaff_ESI,unaff_EDI);
    puVar6 = &DAT_201e8fd4;
    (*DAT_204035b0)(&DAT_201e8fd4);
    (*DAT_20403624)(0,puVar6,uVar7);
    if (*(float *)(DAT_2023d2c0 + 0x18) != 0.0) {
      iVar3 = 0;
      iVar4 = 0;
      if (0 < DAT_20230eb4) {
        do {
          for (iVar1 = *(int *)(&DAT_20230ec0)[iVar4]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x60)) {
            iVar3 = iVar3 + 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_20230eb4);
      }
      Com_Printf(s_ent__i_lt__i_alphaquads___i_quad_2011f8a0,DAT_2023e2c8,DAT_2023f2d0,DAT_2023d2c4,
                 DAT_20230eb4,iVar3);
    }
    if ((*(float *)(DAT_20249f54 + 0x18) != 0.0) && (DAT_20249628 != 0)) {
      iVar3 = 0;
      iVar4 = 0;
      if (0 < DAT_20230eb4) {
        do {
          for (iVar1 = *(int *)(&DAT_20230ec0)[iVar4]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x60)) {
            iVar3 = iVar3 + 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_20230eb4);
      }
      FUN_200faa48(DAT_20249628,s__i__i__i___i__i__2011f88c,DAT_2023e2c8,DAT_2023f2d0,DAT_2023d2c4,
                   DAT_20230eb4,iVar3);
    }
    FUN_200140b0(DAT_20225ed0,DAT_20225ed4);
    FUN_200140b0(DAT_20225ed8 + -1 + DAT_20225ed0,DAT_20225edc + -1 + DAT_20225ed4);
  }
  return;
}

