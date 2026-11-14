// rea decompile_all
// name: FUN_3001d5a0
// address: 0x3001d5a0
// body: available
// range: 0x3001d5a0-0x3001d8cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_3001d5a0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  
  piVar3 = param_5;
  uVar5 = DAT_300aa310;
  if (*param_5 == 0) {
    if (DAT_300aa30c == DAT_300aa310) {
      uVar5 = 0;
    }
    else if ((float)param_5[9] <=
             (_DAT_300aa2ec - DAT_3008fecc) * (_DAT_300aa2ec - DAT_3008fecc) +
             (_DAT_300aa2f0 - DAT_3008fed0) * (_DAT_300aa2f0 - DAT_3008fed0) +
             (_DAT_300aa2f4 - DAT_3008fed4) * (_DAT_300aa2f4 - DAT_3008fed4)) {
      _DAT_300aa2f0 = DAT_3008fed0;
      _DAT_300aa2ec = DAT_3008fecc;
      _DAT_300aa2f4 = DAT_3008fed4;
      iVar6 = FUN_3001df70(&DAT_300a6418 +
                           (((DAT_300aa30c >> 3) + DAT_300aa30c + (DAT_300aa30c >> 6)) % 0x13) *
                           0x97,DAT_300aa30c,(int *)&param_5);
      piVar7 = param_5;
      if (iVar6 != 0) {
        piVar1 = (int *)*param_5;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar7 = 0;
        }
        piVar7[1] = 0;
        piVar7[2] = 0;
      }
      iVar6 = FUN_3001df70(&DAT_300a6418 +
                           (((DAT_300aa310 >> 3) + DAT_300aa310 + (DAT_300aa310 >> 6)) % 0x13) *
                           0x97,DAT_300aa310,(int *)&param_5);
      if (iVar6 != 0) {
        FUN_3001dfb0(param_5);
      }
      DAT_300aa30c = DAT_300aa310;
      uVar5 = DAT_300aa310;
    }
    else {
      uVar5 = 0;
    }
  }
  (**(code **)(*param_2 + 0x40))(param_2);
  uVar8 = 0x3f800000;
  piVar7 = (int *)0x42b40000;
  (**(code **)(*param_2 + 0x58))(param_2,0x42b40000,0x3f800000,0,0);
  fVar2 = 1.0 / (float)piVar3[1];
  (**(code **)(*param_2 + 0x60))(param_2,fVar2,fVar2,fVar2);
  if (uVar5 != 0) {
    DAT_300aa314 = 0;
    DAT_300aa2f8 = (undefined4 *)0x0;
    DAT_300aa2e8 = 0;
    _DAT_300aa2fc = (*(float *)(uVar5 + 0x14) + *(float *)(uVar5 + 8)) * 0.5;
    _DAT_300aa300 = (*(float *)(uVar5 + 0x18) + *(float *)(uVar5 + 0xc)) * 0.5;
    _DAT_300aa304 = (*(float *)(uVar5 + 0x1c) + *(float *)(uVar5 + 0x10)) * 0.5;
    (**(code **)(*piVar7 + 0x30))(piVar7);
    (**(code **)(*param_2 + 0x90))(param_2,uVar8);
    FUN_3001deb0();
    piVar1 = (int *)piVar7[0x28];
    if ((((int)DAT_300aa2f8 < 1000) && (*piVar1 != 1)) && (piVar1[1] == DAT_3008fe98)) {
      if (*piVar1 == -1) {
        FUN_3001dd60(param_2,(int *)piVar1[10],piVar7,piVar3);
        FUN_3001dd60(param_2,(int *)piVar1[0xb],piVar7,piVar3);
      }
      else {
        (&DAT_300a5478)[(int)DAT_300aa2f8] = (uint)piVar1;
        DAT_300aa2f8 = (undefined4 *)((int)DAT_300aa2f8 + 1);
      }
    }
    FUN_30020b7d((int *)&DAT_300a5478,DAT_300aa2f8,4,&LAB_3001dde0);
    piVar3[0xe] = (int)((float)piVar3[0xe] * 0.01);
    piVar3[0x11] = (int)((float)piVar3[0x11] * 0.01);
    DAT_300a9348 = FUN_3001d8d0(param_2,DAT_300a5478);
    iVar6 = 1;
    piVar3[0xe] = (int)((float)piVar3[0xe] * 100.0);
    piVar3[0x11] = (int)((float)piVar3[0x11] * 100.0);
    DAT_300aa2e8 = DAT_300aa2e8 + 1;
    if (1 < (int)DAT_300aa2f8) {
      do {
        piVar7 = FUN_3001d8d0(param_2,(&DAT_300a5478)[iVar6]);
        if (piVar7 != (int *)0x0) {
          (&DAT_300a9348)[DAT_300aa2e8] = piVar7;
          DAT_300aa2e8 = DAT_300aa2e8 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)DAT_300aa2f8);
    }
    uVar5 = 0;
    iVar6 = 0;
    if (0 < DAT_300aa2e8) {
      do {
        if ((uint)piVar3[3] <= uVar5) {
          return;
        }
        piVar7 = (&DAT_300a9348)[iVar6];
        if (piVar7 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar7 + 0x14))(piVar7);
          uVar5 = uVar5 + iVar4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_300aa2e8);
    }
  }
  return;
}

