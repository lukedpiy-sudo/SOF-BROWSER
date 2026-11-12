// rea decompile_all
// name: FUN_500f1810
// address: 0x500f1810
// body: available
// range: 0x500f1810-0x500f1be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f1810(int param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float10 fVar7;
  char *pcVar8;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_38 [4];
  float fStack_34;
  uint uStack_c;
  
  iVar3 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar3 != 0) {
    if (((param_1 == 0) || (*(int *)(param_1 + 0x74) == 0)) ||
       (uVar6 = 1, (*(byte *)(*(int *)(param_1 + 0x74) + 0x10) & 1) == 0)) {
      uVar6 = 0;
    }
    pfVar1 = (float *)(param_1 + 4);
    fStack_60 = 0.0;
    fStack_68 = *param_2 - *pfVar1;
    fStack_64 = param_2[1] - *(float *)(param_1 + 8);
    fVar7 = (float10)FUN_500fe050(&fStack_68);
    if ((float10)0.1 < fVar7) {
      if (*(int *)(*(int *)(param_1 + 0x74) + 0x550) == 0) {
        FUN_500f0fb0(&fStack_68,1.0,&fStack_68);
      }
      else {
        fStack_68 = fStack_68 * 100.0;
        fStack_64 = fStack_64 * 100.0;
      }
      fStack_60 = param_2[2] - *(float *)(param_1 + 0xc);
      FUN_5003d120(&fStack_68,pfVar1,param_2);
    }
    if ((((param_1 != 0) && (*(int *)(param_1 + 0x74) != 0)) &&
        ((piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x354), piVar5 != (int *)0x0 &&
         (0 < *(int *)(param_1 + 0x2ec))))) &&
       (((piVar5[1] == 0 || (iVar3 = (**(code **)(*piVar5 + 0x6c))(), iVar3 != 0)) ||
        (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x354) + 4) + 0x38) != 5)))) {
      FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x1c),&fStack_44,(float *)0x0,(float *)0x0);
      fStack_68 = fStack_44;
      fStack_64 = fStack_40;
      fStack_60 = 0.0;
      FUN_500fe050(&fStack_68);
      fStack_50 = fStack_68 + *pfVar1;
      fStack_4c = fStack_64 + *(float *)(param_1 + 8);
      fStack_48 = fStack_60 + *(float *)(param_1 + 0xc);
      (*DAT_5015cac0)(pfVar1,param_1 + 0x11c,param_1 + 0x128,&fStack_50,param_1,0x2010003,auStack_38
                     );
      if ((1.0 <= fStack_34) || ((uStack_c & 0x20000000) == 0)) {
        fVar2 = param_2[2] - *(float *)(param_1 + 0xc);
        if ((fVar2 < 1.0) && (-5.0 < fVar2)) {
          return;
        }
        fStack_5c = *(float *)(param_1 + 0x24c);
        fStack_58 = *(float *)(param_1 + 0x250);
        fStack_54 = 0.0;
        fVar7 = (float10)FUN_500fe050(&fStack_5c);
        if ((fVar7 <= (float10)250.0) ||
           (fStack_54 * fStack_60 + fStack_5c * fStack_68 + fStack_58 * fStack_64 <= 0.25)) {
          pcVar8 = (char *)0x0;
          piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
        }
        else {
          pcVar8 = s_std_jrun_fwd_a_a_50138798;
          piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
        }
        iVar3 = (**(code **)(*piVar5 + 0x20))(param_1,param_2,param_3,2,uVar6,pcVar8,0);
        if (iVar3 == 0) {
          return;
        }
        FUN_500f0b00(param_1,(int)param_2);
      }
      else {
        if (*(float *)(param_1 + 0x254) <= 2.0) {
          iVar3 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
          if (-2.0 <= *(float *)(param_1 + 0x254)) {
            iVar3 = (**(code **)(iVar3 + 0x1c))(param_1,param_2,param_3,2,uVar6,0,0);
            FUN_500f0b00(param_1,(int)param_2);
            if (iVar3 == 0) {
              return;
            }
            piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
            if ((iVar3 == piVar5[1]) && (iVar4 = (**(code **)(*piVar5 + 0x6c))(), iVar4 != 0)) {
              (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x58))(param_1,iVar3);
              return;
            }
            (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x54))(param_1,iVar3);
            return;
          }
          pcVar8 = s_std_xladder_dwn_a_a_5013a948;
        }
        else {
          pcVar8 = s_std_xladder_up_a_a_5013a9a0;
          iVar3 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
        }
        iVar3 = (**(code **)(iVar3 + 0x1c))(param_1,param_2,param_3,2,uVar6,pcVar8);
        FUN_500f0b00(param_1,(int)param_2);
        piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
        if (((iVar3 == piVar5[1]) && (iVar4 = (**(code **)(*piVar5 + 0x6c))(), iVar4 != 0)) &&
           (piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x354),
           (*(uint *)(piVar5[1] + 0x48) & 0x8000000) == 0)) {
          (**(code **)(*piVar5 + 0x58))(param_1,iVar3);
          return;
        }
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x54))(param_1,iVar3);
    }
  }
  return;
}

